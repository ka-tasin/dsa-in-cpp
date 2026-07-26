#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = low;
    int i = low;
    int j = high;
     
    while(i < j) {
        while(arr[i] <= arr[pivot] && i <= high) {
            i++;
        }
    
        while(arr[j] > arr[pivot] && j >= low) {
            j--;
        }
    
        if(i < j){
            swap(arr[i], arr[j]);        
        } 
    }
    
    swap(arr[low], arr[j]);
    return j;
} 

void qs(vector<int> &arr, int low, int high) {
    if(low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	
	for(int i = 0; i < n; i++) {
	    cin >> arr[i];
	}
	
	qs(arr, 0, arr.size() - 1);
	
	for(int i = 0; i < n; i++) {
	    cout << arr[i] << " ";
	}

}
