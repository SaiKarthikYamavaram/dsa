#include <vector>
#include <algorithm>

using namespace std;

class NoOfRescueBoats {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i = 0, j = people.size() - 1,c=0; 
        while(i<=j) {
            if((people[i]+people[j])<= limit){  i++;j--;}
            else if(people[i]> people[j]) i++;
            else j--;
            c++;
        }
        return c;
    }
};