#include<stdio.h>

int main(){
    int i,j, n, count;

    printf("Enter the value n: ");
    scanf("%d",&n);

    count=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           count =count+1;
           printf("i = %d, j = %d, count = %d\n",i,j,count);
        }
    }

    for(i=0;i<n;i++){
        count =count+1;
        printf("i = %d, count = %d\n",i,count);
    }
    printf("count = %d\n",count);

    return 0;
}


