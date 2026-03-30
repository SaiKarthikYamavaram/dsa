#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,n=nums.size(),j=i+1;
        while(i<n&& j<n) {
            if(nums[i] ==nums[j]){
                f = true;
                j++;
            }
            else{
                i++;
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return i+1;
    }
};