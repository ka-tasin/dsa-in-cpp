#include <iostream>
using namespace std;

void mergeTwoArrays(int arr1[], int arr2[], int size1, int size2) {
    int merged[size1 + size2];
    for(int i = 0; i < (size1 + size2); i++) {
        if(i < size1) {
            merged[i] = arr1[i];
        }else{
            merged[i] = arr2[i - size1];
        }
    }
   
    
    for(int i = 0; i < (size1 + size2); i++) {
        cout << merged[i];
        if(i < (size1 + size2) - 1) cout  << ", ";
    }
}


int main() {
    int arr1[] = {1, 2, 3, 4, 200};
    int arr2[] = {5, 6, 7, 8, 9};
    
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    mergeTwoArrays(arr1, arr2, size1, size2);

    return 0;
}
