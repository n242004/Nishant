#include <stdio.h>
void main() {
    int arr[10],n,elem;
    printf("Enter array size :\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        printf("Enter value of element at %d index",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++){
        if (arr[i] != elem){
            elem = arr[i];
            printf("%d,",elem);
            //Error
        }
    }
}