#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (mp.count(complement)) {
            return {mp[complement], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}

int main() {
    // Example usage
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;
    return 0;
}
