#include<stdio.h>

void bubbleSort(int A[], int n){
    int i, j, k, flag, temp;

    for(i=0; i<n; i++){
        flag = 0;
        for(j=0; j<(n-i-1);j++){
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] =  A[j+1];
                A[j+1] = temp;
                flag = 1;
            }
        }
       if(flag == 0)
       {
           break;
       }
    }

    printf("i = %d, flag = %d\n", i, flag);
    printf("Sorted data is: ");
    for(i=0;i<n;i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}



int main(){
    //int A[] = {45, 6, 1, 7, 5, 3};
    int A[] = {3, 1, 6, 5, 7, 45};
    //int A[] = {3, 1, 2, 6, 7};
    int n = 5;

    bubbleSort(A, n);

    return 0;
}

