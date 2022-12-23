//#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    double average(vector<int>& salary) {
        int ln = salary.size();
        sort(salary.begin(),salary.end());
        int sum=0,c=0;
        for(auto i=salary.begin()+1;i<salary.end();i++){
            sum+=*i;c++;
        }
        double rt =  sum/c;
        return rt;
    }
};



int main(){


    Solution sp;
    vector<int> salary = {12,23,45,677,4};
    double kpauto = sp.average(salary);
    cout<<kpauto;

}