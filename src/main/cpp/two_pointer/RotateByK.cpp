#include <algorithm>
#include <vector>

using namespace std;

class RotateByK {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.begin()+k);  
    }

    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        std:: rotate(nums.begin(), nums.end()- k, nums.end());
    }
}; 