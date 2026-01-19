#include <iostream>
using namespace std;

int main() {
    int size = 5;
    
    int *arr = new int[size];
  
    
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
        
    for(int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }
    
    delete[] arr;

    return 0;
}
