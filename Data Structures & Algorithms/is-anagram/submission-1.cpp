class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> ms;
        unordered_map<char, int> mt;

        if(s.size() != t.size())
        return false;
        
        for(char c : s){
            ms[c]++;
        }
        for(char c : t){
            mt[c]++;
        }
        for(char c : s){
            if(mt[c] != ms[c]){
                return false;
            }
        }
        return true;
    }
};
