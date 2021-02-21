#include<stdio.h>

int binary_search(int A[], int n, int x){
    int left=0;
    int right = n-1;
    int mid;

    while(left<=right){
        mid = (left+right)/2;
        if(A[mid]==x){
            return mid;
        }
        if(A[mid]<x){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    return -1;
}

int main(){

    int A[] = {34, 4, 56, 0, 2, 87};
        //printf("Array size = %lu\n",sizeof(int));
        int x, n=7;
        printf("Finding Number: ");
        scanf("%d",&x);

        if(binary_search(A, n, x) == -1){
            printf("your value is not found.\n");
        }else{
            printf("your value is found.\n");
        }

        return 0;
}
