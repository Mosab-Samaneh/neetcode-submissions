class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> a;
        for(int num : nums){
            if(!a.count(num)){
                a.insert(num);
            }
            else{
                return true;
            }
        }
        return false;
    }
};