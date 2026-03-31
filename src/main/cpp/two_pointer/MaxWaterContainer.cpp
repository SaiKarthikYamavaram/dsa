#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

class MaxWaterContainer {
public:
    int maxArea(vector<int>& heights) {
        int op=0, n = heights.size();
        int i = 0, j = n-1;

        while(i<j) {
            op= max(op, min(heights[i], heights[j]) * abs(j-i));
            if(heights[i]<heights[j]) i++;
            else j--;

        }
        return op;
    }

    int bruteForce(vector<int>& heights) {
        int op=0;
        const int n = heights.size();
        for (int i = 0 ; i< n;i++) {
            for (int j = i+1;j<n;j++) {
            op= max(op, min(heights[i], heights[j]) * abs(j-i));
            }
        }
        return  op;
    }
};
