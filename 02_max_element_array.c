#include <stdio.h>

void main () {
    int i, j, temp;
    int arr[5] = {5, 18, 3, 21, 28};
    int n = 5;
    for (i=0; i<n; i++){
        temp = arr[i];
        for(j=i+1; j<n; j++){
            if (temp < arr[j]){
                temp = arr[j];
            }
        }
    }
    printf("Max element is %d", temp);
}

//Solution
// Max element is 28