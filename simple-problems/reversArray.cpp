#include <iostream>
using namespace std;

void reversArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
}

int main() {
   int arr[] = {1, 2, 3, -45, 4, 28, 5, 6};
   int size = sizeof(arr) / sizeof(arr[0]);
   
   reversArray(arr, size);
   
   cout << "{";
   for(int i = 0; i < size; i++) {
       cout << arr[i];
       if(i != size - 1) {
           cout << ", ";
       }
   }
   cout << "}";
}
