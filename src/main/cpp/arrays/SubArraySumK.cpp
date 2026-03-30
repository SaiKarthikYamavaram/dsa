#include <unordered_map>
#include <vector>

using namespace std;

class SubarraySumK {
public:

    int bruteForce(std::vector<int>& nums, int k) {
            int c = 0, n = nums.size(), sum = 0;

            for (int i=0;i<n;i++) {
                sum = 0;
                for (int j = i; j<n;j++) {
                    sum +=nums[j];
                    if(sum==k) c++;
                }
            }
            return c;
    }

    int subarraySum(const vector<int>& nums, int k) {
        int c = 0, n = nums.size(), sum = 0;
        unordered_map<int, int> m;
        int diff;
        m[0] =1;
        for (int i=0;i<n;i++) {
            sum +=nums[i];
            diff = sum -k;
            c+=m[diff];
            m[sum] ++;
        }
        return c;
    }
};