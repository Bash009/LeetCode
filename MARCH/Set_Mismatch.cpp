#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int N = nums.size(), sum = N * (N + 1) / 2;
        vector<int> ans(2);
        vector<bool> seen(N+1);
        for (int num : nums) {
            sum -= num;
            if (seen[num]) ans[0] = num;
            seen[num] = true;
        }
        ans[1] = sum + ans[0];
        return ans;
    }
};
int main(){
    Solution obj1;
    vector<int>::iterator ptr; 
    vector<int> g1={1,2,2,4};
    vector<int> n = obj1.findErrorNums(g1);
    for(auto i:n){
        cout<<i<<"  ";
    }
}