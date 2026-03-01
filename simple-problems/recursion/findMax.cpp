#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    if(size == 1) return arr[0];
    
    int max = findMax(arr, size - 1);
    
    return (arr[size - 1] < max) ? max : arr[size - 1];
}

int main() {
    int arr[] = {4, 3, 6, 1, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << findMax(arr, size);
    return 0;
}
