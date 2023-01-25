#include<cstring>
#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int i ,j;
        int stl=str.length();

        for(i=0,j=stl-1;i<stl/2;i++,j--){
            if(str[i]!=str[j]){
                return false;
            }

        }
        return true;

    }
};


int main(){
    int trp=121;
    Solution sp;
    bool trpRest = sp.isPalindrome(trp);

    trpRest ? cout<<"Palindrome" : cout<<"Not Palindrome ";

    return 0;
}