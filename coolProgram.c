#include <stdio.h>

int main() {
    int arr[] = { 12, 11, 13, 5, 6 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
 
    printf("Original Array = ");
    printArray(arr, 5);

    insertionSort(arr, n);

    printf("Sorted Array = "); 
    printArray(arr, n); 
  
    return 0;
}

void insertionSort(int arr[], int n) { 
    int key;
    int j; 

    for (int i = 1; i < n; i++) { 
      key = arr[i]; 

      for(j = i-1; j >= 0; j--) {
        if(arr[j] > key) {
          arr[j+1] = arr[j];
        }
        else {
          break;
        }
      }

      arr[j] = key;
    } 
} 

void printArray(int arr[], int n) { 
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
