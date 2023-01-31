#include<iostream>
#include<string>
using namespace std;


class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        int lenT = t.length();
        int lenS =s.length();
        while(i<lenS && j<lenT)
            if(s[i]==t[j]){
                i++;j++;
            }else{
                j++;
            }
        
        bool result =  (i==lenS)? true : false;
        return result ;
    }
};