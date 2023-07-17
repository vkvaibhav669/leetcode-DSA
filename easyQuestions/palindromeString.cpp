#include<cstring>
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