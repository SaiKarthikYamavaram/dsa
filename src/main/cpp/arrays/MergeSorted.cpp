#include <iostream>
#include <vector>

using namespace std;

class MergeSorted {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l = m+n-1;
        m--;
        n--;

        while(m>=0 && n>=0 ){
            if(nums1[m]> nums2[n]){
                nums1[l--] = nums1[m--];
            } else {
                nums1[l--] = nums2[n--];
            }
        }
        while(n>=0) {
            nums1[l--] = nums2[n--];

        }

    void bruteForce(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,temp;
        int extra = nums1.size() - m;

        while(extra--) nums1.pop_back();

        while(i<m && nums2.size() > 0){
            if(nums1[i]>nums2[0]) {
                cout<<nums1[i]<< " "<< nums2[0]<<'\n';
                nums1.insert(nums1.begin()+i,nums2[0] );
                nums2.erase(nums2.begin());
                m++;
                i--;
            }
            i++;
        }
        cout<<" i "<< i <<' '<< nums2.size()<<" \n";
        while(nums2.size()>0) {
            nums1.push_back(nums2[0]);
            nums2.erase(nums2.begin());
        }

    }
};