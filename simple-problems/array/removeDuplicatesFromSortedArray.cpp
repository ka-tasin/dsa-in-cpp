#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums) {
    int n = nums.size();    
    int unique = 1;
    
    int i = 0;
        for (int j = i+1; j < n; j++) {
            if(nums[i] != nums[j]) {
                 nums[i+1] = nums[j];
                 unique++;
                 i++;
                 
            }   
        
    }
    
    return unique;
   
}

int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	
	for(int i = 0; i < n; i++) {
	    cin >> nums[i];
	}
	
	cout << "unique : " << removeDuplicates(nums) << endl;
	
	
	
	for(int i = 0; i < n; i++) {
	    cout << nums[i] << " ";
	}
}
