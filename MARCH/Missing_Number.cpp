#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        return nums.size() * (nums.size() + 1) / 2 - accumulate(nums.begin(), nums.end(), 0);
    }
};
int main(){
    Solution obj1;
    
    vector<int> g1={3,0,1};
    int n = obj1.missingNumber(g1);
    
}