#include<stdio.h>

void insertionSort(int A[], int n){
    int i, j, temp;

    for(i=1;i<n;i++){
        temp = A[i];
        j = i-1;

        while(j>=0 && A[j]>temp){
            A[j+1] = A[j];
            j = j-1;
        }
        //printf("%d ", j);
        A[j+1] = temp;
    }

    printf("Sorted data is: ");
    for(i=0;i<n;i++){
        printf("%d ", A[i]);
    }
    printf("\n");

}

int main(){
    int A[] = {5, 10, 3, 97, 0};
    int n = 5;

    insertionSort(A, n);
    return 0;
}
