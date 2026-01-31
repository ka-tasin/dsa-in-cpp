#include <iostream>
using namespace std;

void sortArray(int *arr, int size) {
   for(int i = 0; i < size; i++) {
       for(int j = 0; j < size - 1; j++) {
           int temp = 0;
           if(*(arr + j) > *(arr + j + 1)){
               temp = *(arr + j);
               *(arr + j) = *(arr + j + 1);
               *(arr + j + 1) = temp;
           }
       }
   }
}

int main() {
   int arr[] = { 10, 2, 333, 4, 5};
   int size = sizeof(arr) / sizeof(arr[1]);
   
   sortArray(arr, size);
   
   for(int i = 0; i < size; i++) {
       cout << arr[i];
       if(i < size - 1) cout << ", ";
   }
 
    return 0;
}
