#include <iostream>
using namespace std;


void findDuplicate(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        bool checked = false;
        
        for(int k =0; k < i; k++) {
            if(arr[i] == arr[k]) {
                checked = true;
                break;
            }
        }
        
        if(checked) continue;
        
        for(int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }
}

int main() {
    int arr[] = { 1, 3, 5, 3, 5, 7, 9, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    findDuplicate(arr, size);

    return 0;
}
