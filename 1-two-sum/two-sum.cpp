class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Unordered Map 
        unordered_map<int,int> mp;
        
        //Iterate till The size of array
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i]) == mp.end()){  //find will locate key value pair if 
                mp[nums[i]] = i;                      // not present it points to end
            }
            else{
                return {mp[target-nums[i]],i};
            }
        }

        return {-1,-1};
    }
};