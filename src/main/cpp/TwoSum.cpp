#include<bits/stdc++.h>

using namespace std;

class TwoSum {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1, sum = 0;
        vector<int> v;
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            if (m[target - nums[i]] != 0) {
                v.push_back(i);
                v.push_back(m[target - nums[i]] - 1);
                break;
            }
            m[nums[i]] = i + 1;
        }
        return v;
    }
};