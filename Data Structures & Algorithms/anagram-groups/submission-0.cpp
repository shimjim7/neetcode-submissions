class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>temp;
        for (const auto& s : strs){
            string sortS = s;
            sort(sortS.begin(), sortS.end());
            temp[sortS].push_back(s);
        }
        vector<vector<string>> res;
        for(auto& st : temp){
            res.push_back(st.second);
        }
        return res;
    }
};
