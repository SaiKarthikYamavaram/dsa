#include <vector>

class MaxProfit {
public:
    int maxProfit(const std::vector<int>& prices) {
        int c = prices[0],profit =0,cp;

        for(int i=1; i< prices.size();i++){
            cp =prices[i]-c;
            if(cp > 0){ 
                profit +=cp;
                c = prices[i];
            } else {
                c = std::min(c, prices[i]);
            }
        }
        return profit;

    }
};
