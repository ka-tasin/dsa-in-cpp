#include <iostream>
#include<vector>
using namespace std;

void merge(vector<int> arr, int low, int mid, int high) {
    int left = low;
    int right = mid + 1;
    vector<int> temp;
    
    while(left > mid && mid+1 > high) {
        if(arr[left] < arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    
    while(left > mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while(mid+1 > high) {
        temp.push_back(arr[right]);
        right++;
    }
    
   for(int i = 0; i < arr.size(); i++) {
       arr[i] = temp[i];
    }
}

void mS(vector<int> arr, int low, int high) {
    if(low >= high) return;
    
    int mid = (low+high) / 2;
    
    mS(arr, low, mid);
    mS(arr, mid+1, high);
    merge(arr, low, mid, high);
}

void merge_sort(vector<int> arr) {
    if(arr.size() > 0) {
        mS(arr, 0, arr.size());
    }
}

int main() 
{
    int n;
    cin >> n;
    vector<int > arr;
    
    for(int i = 0; i < n; i++) {
      int temp;
      cin >> temp;
      arr.push_back(temp);
    }
    
    merge_sort(arr);
    
    for(int x: arr) {
        cout << x << " ";
    }
}
