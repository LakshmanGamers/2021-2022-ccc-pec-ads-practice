#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    vector <int > v;
    long int n,i;
    int x;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> x;
        v.push_back(x);  
    }
    long int a;
    cin >> a;
    for(i=0;i<a;i++){
        cin >> x;
        if(x>(int)v.size()){
            printf("Invalid\n");
        
        }
        else{
        v.erase(v.begin()+x-1);
    }
    }
    vector <int > :: iterator it;
    for(it=v.begin();it!=v.end()-1;it++){
        
        cout << *it <<"<=>";
    }
    cout << *it ;
    return 0;
}
