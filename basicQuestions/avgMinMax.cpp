#include<iostream>
#include<vector>
#include<climits>

using namespace std;
class Solution {
public:
    double average(vector<int>& salary) {
        int mina=INT_MAX,maxa=INT_MIN;
        double avg=0;
        int len = salary.size();
        for(int i=0;i<len;i++){
            avg+=salary[i];
            mina=min(mina,salary[i]);
            maxa=max(maxa,salary[i]);
        }
        len-=2;
        avg =avg- (mina+maxa);
        avg= avg/len;
    return avg;

        
        
        

    }
};


