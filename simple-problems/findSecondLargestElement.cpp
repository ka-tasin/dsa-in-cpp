#include <iostream>
using namespace std;

int findSecondLargest(vector<int> &arr, int n) {
    int largest = arr[0];
    // int secondLargest = 0;
    // int secondLargest = -1;
    int secondLargest = INT_MIN; // most edge case handled
    
    for (int i = 0; i < n; i++) {
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        } 
        else if(arr[i] < largest && arr[i] > secondLargest ) {
            secondLargest = arr[i];
        }
    }
    
    return secondLargest;
}

int main() {
    int arr[] = {1, 2, 3, 45, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << findSecondLargestElement(arr, size);
}
