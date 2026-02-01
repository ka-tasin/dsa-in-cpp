#include <iostream>
using namespace std;

void revereseArray(int *arr, int size) {
    int start = 0, end = size - 1;
    while(start < end) {
        int temp;
        temp = *(arr + start);
        *(arr + start) = *(arr + end);
        *(arr + end) = temp;
        start++;
        end--;
    }
    for(int i = 0; i < size; i++) {
        cout << *(arr + i);
        if(i < size - 1) cout << ", ";
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    
    revereseArray(arr, size);

    return 0;
}
