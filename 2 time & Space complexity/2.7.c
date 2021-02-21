#include<stdio.h>

int main(){
    int i,n,count;

    printf("Enter the value n: ");
    scanf("%d",&n);

    count=0;
    for(i=0;i<n;i++){
        count =count+1;
        printf("i = %d, count = %d\n",i,count);
    }

    //printf("n = %d, count = %d\n",n,count);
    return 0;
}


