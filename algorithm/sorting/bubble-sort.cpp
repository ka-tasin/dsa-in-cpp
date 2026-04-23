#include <iostream>
using namespace std;

void bubleSort(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;   
            }
        }
    }
    for(int i = 0; i < size; i++) {
        cout << arr[i];
        if(i < size - 1) cout << ", ";
    }
}
int main() {
    int arr[] = {34, 3, 56, 4, 200, 55};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    bubleSort(arr, size);

    return 0;
}
