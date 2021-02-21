#include<stdio.h>

int main(){
    int i,j,k,n,count;

    printf("Enter the value n: ");
    scanf("%d",&n);

    count=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                count =count+1;
                printf("i = %d, j = %d, k = %d, count = %d\n",i,j,k,count);
            }
        }

    }

    //printf("n = %d, count = %d\n",n,count);
    return 0;
}


