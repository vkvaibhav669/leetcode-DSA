#include<iostream>
#include<vector>
#include<climits>
using namespace std;


class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int manh ,d=INT_MAX,ans=-1;
        int l = points.size();
        for(int i=0;i<l;i++){
            if(points[i][0]==x || points[i][1]==y){
                manh = abs(x-points[i][0])+abs(y-points[i][1]); 
            
            if(manh<d){
                d=manh;
                ans=i;
            }
            }
        }
        return ans;
        
    }
};



int main(){

    Solution sp;
   //  int ansCoord =   sp.nearestValidPoint();
   // cout<<ansCoord<<" "<<endl;



    return 0;
}