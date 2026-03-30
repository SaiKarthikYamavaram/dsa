#include <climits>
#include <vector>

// boyer-moore voting algo
class MajorityElement2 {
public:
    std::vector<int> majorityElement(std::vector<int>& nums) {
        int a=INT_MAX,b=INT_MAX,c1=0,c2=0;
        for (auto i : nums) {
            if(i==a){
                c1++;
            } else if(i==b) {
                c2++;
            } else if(c1<=0) {
                a = i;
                c1 = 1;
            } else if(c2 <=0) {
                b =i;
                c2 = 1;
            } else {
                c2--;
                c1--;
            }
        }
        c1=c2=0;
        for(auto i: nums) {
            if(a == i) c1++;
            else if(b == i) c2++;
        }
        std::vector<int> v;
        int z = nums.size()/3;
        if(c1>z && a != INT_MAX) v.push_back(a);
        if(c2>z && b != INT_MAX) v.push_back(b);
        return v;
    }
};
