#include <climits>
#include <map>
#include <vector>

class LongestConsecutive {
public:
    int longestConsecutive(std::vector<int>& nums) {
        std::map<int,bool> m;
        int prev = INT_MIN,c=0,mc=0; 
        for(auto i:nums) {
            m[i] = true;
        }

        for(auto i:m) {
            if(i.first == prev +1) {
                c++;
            } else {
                c =1;
            }
            mc = max(mc,c);
            prev = i.first;
        }
        return mc;
    }
};
