#include <set>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    // TODO check last solution
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int a = 0;a<n ; a ++) {
            if( a > 0  && nums[a] == nums[a-1]) continue;

            for(int b= a+1 ; b <n;b++) {
                if (b > a+1 && nums[b] == nums[b-1]) continue;
                int i = b+1, j = n-1;
                long long c, sum = static_cast<long long>(target) - nums[a] -nums[b];
                while(i < j) {
                    c = static_cast<long long>(nums[i] + nums[j]);
                    if( c == sum) {
                        v.push_back(vector{nums[a], nums[b],nums[i], nums[j]});
                        i++;
                        j--;

                        while(i< j && nums[i]==nums[i-1]) i++;
                        while(i< j && nums[j]==nums[j+1]) j--;
                    } else if ( c < sum) {
                        i++;
                    } else {
                        j--;
                    }
                }
            }
        }

        return v;
    }
};;;