#include <iostream>
using namespace std;

void leftRotateByOnePosition(int arr[], int size) {
    int temp = arr[0];
    
    for(int i = 0; i < size; i++) {
        if(i == size - 1){
            arr[i] = temp;   
            break;
        } 
        arr[i] = arr[i + 1];
    }
    for(int i = 0; i < size; i++) {
        cout << arr[i];
        if(i < size - 1) cout << ", ";
    }
}


int main() {
    int arr[] = {1, 2, 3, 4, 200};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    leftRotateByOnePosition(arr, size);

    return 0;
}
