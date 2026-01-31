#include <iostream>
using namespace std;

int* searchElement(int *arr, int size, int target) {
   for(int i = 0; i < size - 1; i++) {
       if(*(arr + i) == target) {
           return (arr + i);
       }
   }
   return nullptr;
}

int main() {
   int arr[] = { 10, 2, 333, 4, 5};
   int size = sizeof(arr) / sizeof(arr[1]);
   
   cout << *searchElement(arr, size, 333);
 
    return 0;
}
