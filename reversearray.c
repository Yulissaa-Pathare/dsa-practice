#include <stdio.h>

int main() {
    int arr[] = {4, 5, 7, 10, 8};
    int n = 5;
    int i,j = 0;
    int rarr[5];
    
    for(i = n-1; i>=0; i--){
        rarr[j] = arr[i];
        }
    
    for(j=0; j<n; j++){
    printf("%d,", arr[j]);
    }
}