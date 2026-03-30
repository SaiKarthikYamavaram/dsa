#include <vector>

// Dutch National flag algorithm
class SortColors {
public:
    void sortColors(std::vector<int>& nums) {
        if(nums.size() <1) return;
        int i=0, j= nums.size()-1;
        int m = 0;
        while(m<=j){
            if (nums[m] == 0) {
                swap(nums[i], nums[m]);
                i++;
                m++;
            } else if (nums[m] == 1){
                m++;
            } else {
                swap(nums[j], nums[m]);
                j--;
            }

        }
    }
};
