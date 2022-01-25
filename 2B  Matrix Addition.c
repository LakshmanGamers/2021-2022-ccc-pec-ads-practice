#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int r1,c1,r2,c2;
int a[100][100];
int b[100][100];
int i,j;
    scanf("%d %d",&r1,&c1);
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d",&r2,&c2);
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
   if (r1==r2 && c1==c2){
       for(i=0;i<r1;i++){
           for(j=0;j<c1;j++){
               printf("%d ",a[i][j]+b[i][j]);
           }
       printf("\n");
       }
       
   }
    else{
        printf("-1");
    }
   
    return 0;
}
