#include <iostream>
#include <vector>
using namespace std;

bool findSum(vector<int> vec, int target) {
    int left = 0, right = vec.size() - 1;
    while(left < right) {
        int sum = vec[left] + vec[right];
        if(sum == target) {
            return true;
        } else if(sum < target) {
            left++;
        }else {
            right--;
        }
    }
    return false;
}


int main() {
    vector<int> nums = {12, 21, 33, 44, 53};
    
    
    
    cout << findSum(nums, 97);

    return 0;
}
