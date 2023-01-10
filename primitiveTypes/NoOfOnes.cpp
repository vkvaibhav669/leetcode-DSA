#include<iostream>
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count =0;
        while(n){
        n&=n-1;
        count++;
    }
    return count;
    }

    short countBits(uint32_t n1){

        short num_bits =0;
        while(n1){
            num_bits += n1&1;
            n1>>=1;

        }
            return num_bits;
    }
};





int main(){

    Solution sp ;
    int c = sp.hammingWeight(10001111);

    cout<<c<<"HammingWeight"<<endl;

    short cs = sp.countBits(10001111);
    cout<<cs<<"Count Bits"<<endl;

    return 0;
}

