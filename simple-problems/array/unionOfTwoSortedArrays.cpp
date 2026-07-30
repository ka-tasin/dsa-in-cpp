/*
8
7
1 1 2 2 2 3 4 5
2 3 4 5 6 7 8
*/



#include <bits/stdc++.h>
using namespace std;

vector<int> unionOfTwoSortedArrays(vector<int> &nums1, vector<int> &nums2, int n1, int n2) {
    vector<int> sortedArray;
    
    for (int i = 0; i < n1; i++) {
        if(nums1[i]<nums1[i+1]) {
            sortedArray.push_back(nums1[i]);
        }
    }
    
    for (int i = 0; i < n2; i++) {
        bool exist = false;
        for (int j = 0; j < sortedArray.size(); j++) {
            if(nums2[i] == sortedArray[j]) {
                exist = true;
                break;
            }
        }
        if(!exist) sortedArray.push_back(nums2[i]);
      
    }
    
    return sortedArray;
}

int main() {
	int n1, n2;
	cin >> n1;
	cin >> n2;
	
	vector<int> nums1(n1);
	vector<int> nums2(n2);
	
	
	for(int i = 0; i < n1; i++) {
	    cin >> nums1[i];
	}
	for(int i = 0; i < n2; i++) {
	    cin >> nums2[i];
	}
	
	vector<int> sortedArray = unionOfTwoSortedArrays(nums1, nums2, n1, n2);
	
	
	for(int i = 0; i < sortedArray.size(); i++) {
	    cout << sortedArray[i] << " ";
	}
}
