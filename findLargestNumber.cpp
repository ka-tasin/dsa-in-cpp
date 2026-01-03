#include <iostream>
using namespace std;

int findLargestNumber(int n[], int size) {
    int largest = n[0];
    
    for(int i = 0; i < size; i++){
        if(n[i] > largest) {
            largest = n[i];
        }
    }
    
    return largest;
}

int main() {
    int arr[] = {1, 2, 3, 34, 4, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << findLargestNumber(arr, size);
}
