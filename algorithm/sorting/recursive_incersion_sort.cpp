#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int>& arr, int n) {
    if (n <= 1) return;
    
    for(int i = 1; i < n; i++) {
        if(arr[i-1] > arr[i]) {
            swap(arr[i-1], arr[i]);
        }
    }
    
  insertion_sort(arr, n-1);
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	insertion_sort(arr, n);
	
	for(int i = 0; i < n; i++) cout << arr[i] << " ";

}
