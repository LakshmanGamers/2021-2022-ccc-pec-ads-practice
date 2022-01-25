#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string a,b;
        cin >> a;
        b=a;
        reverse(b.begin(),b.end());
        if(a==b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
