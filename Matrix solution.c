#include <stdio.h>
#include <stdlib.h>
int main() {
    int u,k,i,j,sum=0;
    scanf("%d %d",&u,&k);
    int arr[u][k];
    for(i=0;i<u;i++){
        for(j=0;j<k;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<u;i++){
        for(j=0;j<k;j++){
            if(i==0 || j==0 || i==u-1 || j==k-1){
                continue;
            }
            else{
                sum+=arr[i][j];
            }
        }
    }
    printf("%d",sum);
}
