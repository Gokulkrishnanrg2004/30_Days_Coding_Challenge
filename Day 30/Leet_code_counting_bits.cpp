/* Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i. */

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++){
            int j=i,c=0;
            while(j>0){
                if(j%2 == 1){
                    c++;
                }
                j=j/2;
            }
            v.push_back(c);
        }
        return v;
    }
    };
