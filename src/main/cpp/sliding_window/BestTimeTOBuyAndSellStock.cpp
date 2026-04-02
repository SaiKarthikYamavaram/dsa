#include <math.h>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(const vector<int>& prices) {
        int m=INT_MAX,p =0, n = prices.size();
        for(int i = 0 ; i < n ; i++) {
            p = max(prices[i] - m, p);
            if(m > prices[i]){
                m = prices[i];
            };
        }
        return p ;
    }
};
