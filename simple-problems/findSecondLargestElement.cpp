#include <iostream>
using namespace std;

int findSecondLargestElement(int a[], int size) {
    int largest = a[0], secondLargest = a[0];
    
    for(int i = 1; i < size; i++) {
        if(largest < a[i]) {
            secondLargest = largest;
            largest = a[i];
        }
        else if(secondLargest < a[i] && a[i] != largest) {
            secondLargest = a[i];
        }
    }
   
    return secondLargest;
}

int main() {
    int arr[] = {1, 2, 3, 45, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << findSecondLargestElement(arr, size);
}
