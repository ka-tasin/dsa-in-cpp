#include <bits/stdc++.h>
using namespace std;

int findMissingElement(vector<int> &nums, int n) {
    sort(nums.begin(), nums.end());
    
    for(int i = 0; i <= n; i++) {
        if(i != nums[i]) return i;
    }
    
    return n;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    cout << findMissingElement(nums, n);
    
    // for(int i = 0; i < n; i++) {
    //     cout << nums[i] << " ";
    // }

}
