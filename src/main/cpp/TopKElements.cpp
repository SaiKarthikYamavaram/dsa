#include <algorithm>
#include <map>
#include <queue>
#include <vector>


using namespace std;

class TopKElements {
public:
    std::vector<int> topKFrequent(vector<int>& nums, int k) {
        std::map<int, int> m;
        std::vector<int> v;

        for(auto i: nums){
            m[i]++;
        }
        
        for(auto i: m){
            v.push_back(i.first);
        }
        sort(v.begin(),v.end(),[&](int a, int b){
            return m[a] > m[b];
        });
        vector<int> op(v.begin(),v.begin()+k);
        return op;
    }

    vector<int> topKFrequentHeap(vector<int>& nums, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> p;
        map<int,int>m;
        vector<int> v;

        for(auto i: nums){
            m[i]++;
        }

        for(auto i: m){
            p.push({i.second,i.first});
            if(p.size()> k) p.pop();
        }
        vector<int> op;
        for (int i = 0; i<k;i++){
            op.push_back(p.top().second);
            p.pop();
        }
        return op;
    }
};
