#include <iostream>
using namespace std;

struct MinMax {
    int min;
    int max;
};

MinMax findMaxMinInArray(int arr[], int size) {
    int max = arr[0], min = arr[0];
    
    for(int i = 0; i < size; i++) {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
    
    return {min, max};
}

int main() {
   int arr[] = {1, 2, 3, -45, 4, 28, 5, 6};
   int size = sizeof(arr) / sizeof(arr[0]);
   
   MinMax result = findMaxMinInArray(arr, size);
   
   cout << "Min: " << result.min << endl;
   cout << "Max: " << result.max << endl;
}
