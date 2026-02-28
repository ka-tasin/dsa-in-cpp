#include <iostream>
using namespace std;

void reverseArray(int arr[], int end, int start) {
    if(start >= end) return;
    
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    
    reverseArray(arr, end - 1, start + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int start = 0;
    int end = size - 1;
    
    reverseArray(arr, end, start);
    
    for(int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
