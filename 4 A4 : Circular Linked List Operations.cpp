#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<deque>
using namespace std;


int main() {
    
    deque < int > q;
    int n;
    cin >> n;
    int a,b;
    
    for(int i=0;i<n;i++){
        cin >> a;
        switch(a){
            case 1 : cin >> b;
                      q.push_front(b);
                        break;
            case 2 : cin >> b;
                    q.push_back(b);
                    break;
            case 3 : if(q.empty()) cout << "Invalid\n";
                else
                q.pop_front();
                    break;
            case 4 :  if(q.empty()) cout << "Invalid\n";
                else
                q.pop_back();
                    break;
            case 5 : if(q.empty()) cout <<"Empty\n";
                else{
                for(const auto &val : q ){
                    cout << "->" << val;
                
                
            }
                cout << "->"<< endl;}
                break;
        }
    }
    
    return 0;
}
