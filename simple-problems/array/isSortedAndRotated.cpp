#include <bits/stdc++.h>
using namespace std;

bool isSortedAndRotated(vector<int> &arr, int n) {
    int rotationCount = 0;
    
    for (int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i+1]) {
            rotationCount++;
        }
    }
    if(rotationCount == 0) {
        return true;
    }
    else if(rotationCount == 1 && arr[n-1] <= arr[0]) return true;
    
    else return false;
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	
	for(int i = 0; i < n; i++) {
	    cin >> arr[i];
	}
	
	cout << isSortedAndRotated(arr, n) << endl;
	
	
	
// 	for(int i = 0; i < n; i++) {
// 	    cout << arr[i] << " ";
// 	}
}
