#include <stdio.h>
void main() {
    int n,arr[10],arreven[10],arrodd[10],arrevenpos = 0,arroddpos = 0,k;
    printf("Enter Size of Array : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        printf("Enter value of element at %dth index : ",i);
        scanf("%d",&arr[i]);
        if (arr[i]%2==0){
            arreven[arrevenpos] = arr[i];
            arrevenpos += 1;
        }
        else {
            arrodd[arroddpos] = arr[i];
            arroddpos += 1;
        }
    }
    for (int j = 0; j < arrevenpos; j++){
        for (int i = 0; i < arrevenpos; i++){
            if (arreven[i]>arreven[i+1]){
                k = arreven[i];
                arreven[i] = arreven[i+1];
                arreven[i+1] = k;
            }
        }
    }
    for (int j = 0; j < arroddpos; j++){
        for (int i = 0; i < arroddpos; i++){
            if (arrodd[i]>arrodd[i+1]){
                k = arrodd[i];
                arrodd[i] = arrodd[i+1];
                arrodd[i+1] = k;
            }
        }
    }
    printf("Even Array");
    for (int i = 0; i < arroddpos; i++){
        printf("%d,",arreven[i]);
    }
    printf("Even Array");
    for (int i = 0; i < arroddpos; i++){
        printf("%d,",arreven[i]);
    }//Complete it
}