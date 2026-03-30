#include<vector>
#include <math.h>

using namespace std;

class FirstMissingPositive {
public:
    int firstMissingPositive(vector<int> &nums) {
        int n = nums.size();
        // -INT_MAX to INT_MAX
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) nums[i] = 0;
        }
        // 0 to INT_MAX;
        for (int i = 0; i < n; i++) {
            int k = abs(nums[i]);
            if (k >= 1 && k <= n) {
                if (nums[k - 1] > 0) {
                    nums[k - 1] *= -1;
                } else if (nums[k - 1] == 0) {
                    nums[k - 1] = -(n + 1);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0) return i + 1;
        }
        return n + 1;
    }

    int cyclicSort(vector<int> &nums) {
        int n = nums.size();
        int i = 0;
        while (i < n) {
            int v = nums[i];
            if (v <= 0 || v > n) {
                i++;
                continue;
            }
            int index = v - 1;
            if (v != nums[index]) {
                swap(nums[i], nums[index]);
            } else {
                i++;
            }
        }
        for (i = 0; i < n; i++) {
            if (nums[i] != i + 1) return i + 1;
        }
        return n + 1;
    }
};
