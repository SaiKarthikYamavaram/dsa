#include <vector>
#include <algorithm>
#include <set>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> v;
        sort(nums.begin(),nums.end());
        for(int k = 0; k <n;k++) {
            if(nums[k]> 0) break;
            const int sum = -nums[k];
            int i=k+1,j=n -1, c =0;
            while( i <n&& i < j) {
                c = (nums[i]+nums[j]);
                if( c == sum) {
                    v.insert(vector{nums[k],nums[i], nums[j]});
                    i++;
                    j--;
                } else if ( c < sum) {
                    i++;
                } else {
                    j--;
                }
            }
        }
        return vector (v.begin(),v.end());
    }
};
