#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int distributeCandies(vector<int>& C) {
        unordered_set<int> cset(begin(C), end(C));
        return min(cset.size(), C.size() / 2);
    }
};
int main(){
    Solution obj1;
    vector<int> g1={1,1,2,2,3,3};
    int n = obj1.distributeCandies(g1);
    cout<<n;
}