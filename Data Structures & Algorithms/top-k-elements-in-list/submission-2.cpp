class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> h;
        vector<vector<int>> a(n + 1);
        vector<int> r;
        r.reserve(k);
        int c = 0;
        for(auto & num : nums){
            h[num]++;
        }

        for(auto & pair : h){
            a[pair.second].push_back(pair.first);
        }

        for(int i = n; i >= 0; i--){
            for(auto & v : a[i]){
                if(c == k)
                    break;
                r.push_back(v);
                c++;
            }
            if(c == k)
                break;
        }

        return r;
    }
};