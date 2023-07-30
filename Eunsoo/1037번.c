#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int A[100];
    for(int i=0; i<N; i++){
        scanf("%d",&A[i]);
    }
    int min = A[0];
    int max = A[0];
    for(int i = 1; i<N; i++){
        if(A[i]>max){
            max = A[i];
        }
        if(A[i]<min){
            min = A[i];
        }
    }
    int result = max*min;
    printf("%d", result);
    return 0;
}