#include <vector>
#include<iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& a, int k) {
        unordered_map<int,int> m;
        int n = a.size();
        for (int i = 0;i<n;i++) {
            if(m.find(a[i]) != m.end() && i-m[a[i]] <= k){
                return true;
            }
            m[a[i]] = i;
        }
        return false;
    }

    bool bruteForce(vector<int>& a, int k) {
        int i =0, n = a.size();
        for (int i = 0;i<n;i++) {
            for(int j = 1; j<=k && i+j<n; j++) {
                if(a[i]==a[i+j]){
                    cout<<" "<< i <<" "<< i+j;
                    return true;}
            }
        }
        return false;
    }
};
