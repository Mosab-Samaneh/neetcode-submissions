class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> a;
        vector<vector<string>> r;
        for(auto & s : strs) {
            string c = "00000000000000000000000000";
            for(int j = 0; j < s.size(); j++){
                c[s[j] - 97] ++;
            }
            a[c].push_back(s);
        }
        for(auto & pair:a){
            r.push_back(pair.second);
        }

        return r;
    }
};
