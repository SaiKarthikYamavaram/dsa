#include<string>
#include <unordered_map>

using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0,j=0,c=0,mc=0,n=s.size();
        if(n<2) return n;
        unordered_map<char,int> m;
        while(i<n && j <n) {
            if(m.count(s[j]) && m[s[j]] >= i) {
                i = m[s[j]] +1;
            }
            m[s[j]] = j;
            c = max(c,j-i+1);
            j++;
        }
        return c;
    }
};
