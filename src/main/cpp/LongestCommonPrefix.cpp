#include <bits/stdc++.h>
using namespace std;

class LongestCommonPrefix {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "", c;
        char prev;
        int n = strs.size(),j;
        if(n == 0) return s;
        else if (n==1) return strs[0];
        int m= strs[0].size();
        for(int i=0; i<m ; i++){
            prev = strs[0][i];
            j=1;
            while(j <n) {
                c = strs[j];
                if(i>=c.size()){
                    return s;
                } else if (c[i]!=prev) {
                    return s;
                }
                j++;
            }
            s+=prev;
        }
        return s;
    }
};