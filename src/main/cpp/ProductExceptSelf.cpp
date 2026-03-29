#include <vector>

using namespace std;

class ProductExceptSelf {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l=1,n=nums.size(),zero=0;
        vector<int> p(nums.size(), 1),s(nums.size(), 1);
        vector<int>op;
        for(int i =1;i<nums.size(); i++){
            p[i] = p[i-1] * nums[i-1];
            s[n-i-1] = s[n-i] * nums[n-i];
        }
        for (int i = 0; i<n;i++){
            op.push_back(s[i]* p[i]);
        }
        return op;
    }
};
