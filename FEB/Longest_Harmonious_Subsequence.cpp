class Solution {
public:
    int findLHS(vector<int>& nums) {
        
   unordered_map<int,int> arr;
        for(auto x:nums)
        {
            arr[x]++;
        }
        int max1=0;
        for(auto [p,q]:arr)
        {
            if(arr.find(p+1)!=arr.end())
            {
                max1 = max(max1, q + arr[p+1]);
                
            }
        }
 
        
        
return max1;
        
        
    }
};