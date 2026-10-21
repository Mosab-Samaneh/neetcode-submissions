class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> twoS(2);
        unordered_map<int, int> m;
        int f = 0;
        for(auto num : nums){
            m[num] ++;
        }
        for(int i = 0; i < nums.size(); i++){
            int sub = target - nums[i];
            if(m.count(sub)){
                if(sub == nums[i] && m[sub] < 2){
                    continue;
                }
                if(!f){
                    twoS[f++] = i;
                }
                else{
                    twoS[f] = i;
                    break;
                }
            }
        }
        return twoS;
    }
};
