#include <bits//stdc++.h>

class Solution {
public:
    int removeElement(std::pmr::vector<int>& nums, int val) {
        for (auto i=nums.begin(); i!=nums.end();){
            if(*i == val ){
                nums.erase(i);
            }else {
                i++;
            }
        }
        return nums.size();
    }
};