class Solution {
public:
    
    string encode(vector<string>& strs) {
        string res;
        for(string &s: strs){
            res.append(to_string(s.size()));
            res.push_back('#');
            res.append(s);
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[i] != '#') i++;
            int l = stoi(s.substr(j, i - j));
            res.push_back(s.substr(i + 1, l));
            i = i + l + 1;
        }
        return res;
    }


};
