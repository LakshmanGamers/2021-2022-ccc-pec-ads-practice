#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
vector <int> v;
    int n,x,a,i,j,b;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a;
        if(a==1){
            cin >> x;
            v.insert(v.begin(),x);
        }
        else if(a==2){
            cin>> x;
            v.push_back(x);
        }
        else if(a==3){
            if((int)v.size()!=0)
            v.erase(v.begin());
            else
                cout << "Invalid\n";
        }
        else if(a==4){
            if((int)v.size()!=0){
            v.erase(v.end()-1);
            }
            else
                cout << "Invalid\n";
        }
        else if(a==5){
            cin >> x >> b;
            if(x-1>(int)v.size()){
                cout << "Invalid\n";
            }
            else if(x-1==(int)v.size()){
                v.push_back(b);
            }
            else{
            v.insert(v.begin()+x-1,b);
            }
        }
        else if(a==6){
            if((int)v.size()==0){
                cout << "Empty\n";
            }
            else{
               
                for(j=0;j<(int)v.size()-1;j++){
                    cout << v[j] << "<==>";
                }
                cout << v[j] <<endl;
            }
                
        }
        
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
