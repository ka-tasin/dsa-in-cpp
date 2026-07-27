// This is bruteforce - not optiomal

/*
#include <bits/stdc++.h>
using namespace std;

int findLargest(vector<int> &arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - 1; j++) {
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
      
    }
    
    return arr[n-1];
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	
	for(int i = 0; i < n; i++) {
	    cin >> arr[i];
	}
	
	cout << findLargest(arr, n) << endl;
	
	for(int i = 0; i < n; i++) {
	    cout << arr[i] << " ";
	}
}
*/


#include <iostream>
using namespace std;

int findLargest(vector<int> &arr, int n) {
    int largest = arr[0];
    
    for (int i = 0; i < n; i++) {
        if(arr[i+1] > largest){
            largest = arr[i+1];
        } 
    }
    
    return largest;
}

int main() {
    int arr[] = {1, 2, 3, 34, 4, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << findLargestNumber(arr, size);
}
