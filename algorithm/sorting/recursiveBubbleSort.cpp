#include <bits/stdc++.h>
using namespace std;

void recursiveBubbleSort(vector<int>& arr, int n) {
    if(n <= 1)  return;
    
    bool swapped = false;
    
    for(int i=1; i < n; i++) {
        if(arr[i-1] > arr[i]) {
            swap(arr[i-1], arr[i]);
            swapped = true;
        }
    }
    
    if(swapped == false) return;
    
    recursiveBubbleSort(arr, n-1);
}

int main() {
    vector<int> arr = {3, 9, 2, 7, 1};

    recursiveBubbleSort(arr, arr.size());

    for(int i =0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

}
