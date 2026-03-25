#include <vector>

class Solution {
public:
    int majorityElement(std::pmr::vector<int>& nums) {
        int op,count=0;
        for (auto i: nums){
            if(count ==0){
                op = i;
                count =1;
            }
            else if(op == i) {
                count ++;
            } else {
                count--;

            }
        }
        return op;
    }
};
