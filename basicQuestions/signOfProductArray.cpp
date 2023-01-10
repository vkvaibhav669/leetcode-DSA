#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int result=1;
        for(auto j:nums){
            if(j==0) {
                return 0;
                break;
            }
            if (j<0){
                result = -result ;
            }
        }
        return result;
    }
};



int main()
{

Solution sp ;
//int signPA = sp.arraySign();
//cout<<signPA<<endl;


}