class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
        int ans = strs[0].length();
        int i=1;
        //string at ="";
        for(;i<len;i++){
            int j=0;
        while(j<strs[i].length() && strs[i][j]==strs[0][j])    j++;
        ans = min(j,ans);
        }
        return strs[0].substr(0,ans);  
        }
};