#include <iostream>
using namespace std;

int findSum(int *arr, int size) {
    int res = 0;
    for(int i = 0; i <  5; i++) {
        res += *(arr + i);
  }
  return res;
    
}

int findMax(int *arr, int size) {
    int max = *arr;
    for(int i = 0; i <  5; i++) {
        if(*(arr + i) > max) max = *(arr + i);
  }
  return max;
    
}

int main() {
   int arr[] = { 10, 2, 333, 4, 5};
   int size = sizeof(arr) / sizeof(arr[1]);
   
   int res = findSum(arr, size);
   cout << res << endl;
   
   int result = findMax(arr, size);
   cout << result << endl;
 
    return 0;
}
