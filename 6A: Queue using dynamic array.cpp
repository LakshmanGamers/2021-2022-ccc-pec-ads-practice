#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    queue<int> q;
     int n,a,b,x;
    
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        if(a==1){
            cin >> b;
            q.push(b);
        }
        else if(a==5){
            if(q.empty()){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
            
        }
        else if(a==3){
            if(!q.empty()){
                cout << q.front() << endl;
            }
            else{
                cout << "invalid\n";
            }
        }
        else if(a==4){
            if(!q.empty())
       {
                cout << q.back() << endl;
            }
            else{
                cout << "invalid\n";
            }
        }
        else if(a==2){
            if(q.empty()){
                cout <<"invalid\n";
            }
            else{
                q.pop();
            }
        }
        
    }
    return 0;
}
