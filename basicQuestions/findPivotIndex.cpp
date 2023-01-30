#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum,rsum,n=nums.size();
        int i,j;
        for(i=0;i<n;i++){
            lsum=0;
            for(j=0;j<i;j++){
                lsum+=nums[j];
            }rsum=0;
            for(j=i+1;j<n;j++){
                rsum+=nums[j];
            }
            if(lsum==rsum){
                return i;
            }
        }
        return -1;
    }
};