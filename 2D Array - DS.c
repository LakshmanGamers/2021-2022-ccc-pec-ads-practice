int hourglassSum(int arr_rows, int arr_columns, int** arr) {
int i=0,j=0,s,sum;
s=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
for(i=0;i<=(arr_rows/2);i++){
    for(j=0;j<=(arr_rows/2);j++){
        sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
        if(sum>s)
        s=sum;
    }
}
return s;



}
