#include <stdio.h>
void main() {
    int arr[10] = {4,4,3,2,1},first = arr[0],second = arr[0];
    for (int i = 0; i < 5; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
    }
    printf("Second Highest : %d",second);
}//Error