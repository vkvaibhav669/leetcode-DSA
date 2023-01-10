class Solution {
public:
    int subtractProductAndSum(int n) {
        int Dprod=1;
        int Sprod = 0;
        int Tprod;
        while(n>0){
            Tprod=n%10;
            Sprod+=Tprod;
            Dprod*=Tprod;
            n=n/10;
        }
        return Dprod-Sprod;
        
    }
};


int main(){


    int n = 4567;
    Solution sp ;
    sp.subtractProductAndSum(n);

    return 0;
}