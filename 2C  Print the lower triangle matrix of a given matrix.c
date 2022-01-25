#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
    int i,j,arr[10][10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            printf("%d ",(i>=j)?(arr[i][j]):0);
        }
    printf("\n");
    }
    
    return 0;
}
