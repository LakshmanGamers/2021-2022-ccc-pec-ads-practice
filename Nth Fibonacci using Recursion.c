#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fibo(int num){
    if(num==1 || num== 0)
        return num;
    else
        return fibo(num-1)+fibo(num-2);
}
int main() {

    int n;
    scanf("%d",&n);
    printf("%d",fibo(n));
    
    
    return 0;
}
