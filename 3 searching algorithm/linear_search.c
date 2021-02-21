#include<stdio.h>

    int linear_search(int A[], int n, int x){
        int i;
        for(i=0;i<n;i++){
            if(A[i]==x){
                return i;
            }
        }
        i = -1;
        return i;
}

    int main(){
        int A[] = {34, 4, 56, 0, 2, 87};
        printf("Array size = %lu\n",sizeof(int));
        int x, n=7;
        printf("Finding Number: ");
        scanf("%d",&x);

        if(linear_search(A, n, x) == -1){
            printf("your value is not found.\n");
        }else{
            printf("your value is found.\n");
        }

        return 0;
}
