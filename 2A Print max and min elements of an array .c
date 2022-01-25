#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int a;
    scanf ("%ld",&a);
    int i;
    int arr[1000];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
        }
    int min=arr[0];
    int max=arr[0];
    for(i=0;i<a;i++){
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];
        }
printf("%d\n",max);

    printf("%d",min);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
