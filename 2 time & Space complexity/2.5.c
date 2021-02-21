#include<stdio.h>
#define M 101

int main(){
    int i, n, even[M];

    for(i=0;i<M;i++){
        even[i] = 0;
    }

    for(i=0;i<M;i+=2){
        even[i] = 1;
    }

    printf("Enter the value n: ");
    scanf("%d",&n);

    if(even[n]){
        printf("%d is even number.\n",n);
    }else{
        printf("%d is odd number.\n",n);
    }

    return 0;
}
