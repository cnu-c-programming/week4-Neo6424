#include <stdio.h>

int sum(int arr[], int n){
        int sum = 0;
        for(int i =0; i<n; i++){
                sum = sum+arr[i];
        }
}
double average(int arr[], int n){
}
int max(int arr[], int n){
}

int main() {
        int arr[] = {3, 7,1, 9,4, 6};
        int n sizeof(arr) / sizeof(arr[0]);

        printf("sum: %d\n", sum(arr,n));
        printf("avg: %.2f\n", average(arr,n));
        printf("sum: %d\n", max(arr,n));

        return 0;
}
