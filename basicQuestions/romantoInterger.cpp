//#include<unordered_map>
#include<map>
#include<iostream>
using namespace std;

class Solution {
public:

    int romanToInt(string str) {
        map<char,int> umap;
        umap.insert({'I',1});
        umap.insert({'V',5});
        umap.insert({'X',10});
        umap.insert({'L',50});
        umap.insert({'C' , 100});
        umap.insert({'D',500});
        umap.insert({'M', 1000});
        int sum=0;
        for(int i=0;i<str.length();i++){
            if(umap[str[i]]<umap[str[i+1]]){
                sum+=umap[str[i+1]]-umap[str[i]];
                i++;
                continue;
            }
            sum+=umap[str[i]];

        }  
        return sum;    
    }
};