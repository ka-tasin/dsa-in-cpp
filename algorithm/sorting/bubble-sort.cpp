// O(n) - Optimized
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        bool swap = false; // Optimization
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
                swap = true; // Optimization 
            }
            
        }
        if(!swap) break; 
        cout << "runs\n";
    }
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	bubble_sort(arr, n);
	
	for(int i = 0; i < n; i++) cout << arr[i] << " ";

}



// O(n^2) - Not Optimized
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	bubble_sort(arr, n);
	
	for(int i = 0; i < n; i++) cout << arr[i] << " ";

}
