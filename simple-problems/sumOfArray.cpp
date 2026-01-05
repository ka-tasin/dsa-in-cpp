#include <iostream>
using namespace std;

int sumOfArray(int n[], int size) {
    int result = 0;
    for(int i = 0; i < size; i++) {
        result += n[i];
    }
    
    return result;
}

int main() {
   int arr[] = {1, 2, 3, 4, 5, 6};
   int size = sizeof(arr) / sizeof(arr[0]);
   cout << sumOfArray(arr, size);
}
