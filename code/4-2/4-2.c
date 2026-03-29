#include <stdio.h>

int sum(int arr[], int n){
        int sum = 0;
        for(int i =0; i<n; i++){
                sum = sum+arr[i];
        }
        return sum;
}
double average(int arr[], int n){
        double avg = 0;
        avg = (double)sum(arr, n) / n;
        return avg;
}
int max(int arr[], int n){
        int max = arr[0];
        for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i]; 
        }
    }
        return max;
}

int main() {
        int arr[] = {3, 7,1, 9,4, 6};
        int n sizeof(arr) / sizeof(arr[0]);

        printf("sum: %d\n", sum(arr,n));
        printf("avg: %.2f\n", average(arr,n));
        printf("sum: %d\n", max(arr,n));

        return 0;
}
