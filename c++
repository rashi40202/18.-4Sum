Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

*************************************************************************************************************************************

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>v;
        set<vector<int>>st;
        int n=nums.size();
        long int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int s=j+1;
                int e=n-1;
                while(s<e){
                  sum=nums[i];
                  sum+= nums[j];
                  sum+=nums[s];
                  sum+=nums[e];
                  if(sum==target)
                  {
                      st.insert({nums[i],nums[j],nums[s],nums[e]});
                  }
                  if(sum<target)
                      s++;
                  else
                    e--;
                }
                }
            }
        for(auto x:st){
            v.emplace_back(x);}
        return v;
    }
};
