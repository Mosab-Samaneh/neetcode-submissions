class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int c = 1;
        int max = 1;
        int n = nums.size();
        int m, b;
        unordered_set<int> a;

        a.reserve(n);

        if(nums.empty())
        return 0;

        for(auto &v : nums){
            a.insert(v);
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(i == 0){
                m = nums[i];
                b = nums[i];
            }
            else if(a.count(b + 1) || a.count(m - 1)){
                if(a.count(m - 1)){
                    c++;
                    m--;
                }
                if(a.count(b + 1)){
                    c++;
                    b++;
                }
            }
            else{
                m = nums[i];
                b = nums[i];
                if(c > max)
                    max = c;
                c = 1;
            }
        }
        if(c > max)
            max = c;
        return max;
    }
};
