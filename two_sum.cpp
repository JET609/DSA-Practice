#include <bits/stdc++.h>
using namespace std;

// twoSum function uses an unordered_map to store previously seen numbers and their indices.
// I first tried a brute-force O(n^2) approach, but switched to this O(n) hash map method after understanding the optimization.
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp; // maps number to its index
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        // check if the complement has been seen before
        if (mp.count(complement)) {
            // return indices of the two numbers that add up to target
            return {mp[complement], i};
        }
        // store the current number and its index
        mp[nums[i]] = i;
    }
    return {};
}

int main() {
    // Example usage with a simple test case
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    // print resulting indices
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;
    return 0;
}
