#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int start, int end) {
    if(start >= end) return true;
    
    if(arr[start] != arr[end]) return false;
    
    return isPalindrome(arr, start + 1, end - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;
    
    cout << isPalindrome(arr, start, end);
    return 0;
}
