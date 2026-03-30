#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,n=word1.size(),m=word2.size();
        string s = "";
        while(i<n && i< m ){
            s+=word1[i] ;
            s+= word2[i];
            i++;
        } 

        while(i<n ){
            s+=(word1[i]);
            i++;
        } 

        while(i<m ){
            s+=(word2[i]);
            i++;
        } 

        return s;
    }
};