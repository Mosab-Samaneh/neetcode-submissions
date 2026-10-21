class Solution {
public:

    string encode(vector<string>& strs) {
        int c = 0;
        for(auto & s : strs){
            c += s.length();
        }

        string r;
        r.reserve(c*2);

        for(auto & s : strs){
            r += s + '\n';
        }

        return r;
    }

    vector<string> decode(string s) {
        vector<string> r;
        stringstream ss(s);
        string token;

        while(getline(ss, token, '\n')){
            r.push_back(token);
        }
        return r;
    }
};
