class Solution {
public:
    string frequencySort(string s) {
         unordered_map<char,int>map;
       
         for(char x : s){
            map[x]++;
         }
    vector<pair<char,int>> v;
    for(auto x : map){
        v.push_back({x.first,x.second});
    }

    sort(v.begin(),v.end() ,[](auto &a,auto &b){
        return a.second>b.second;
    });
    string ans;
    for(auto x : v){
        ans.append(x.second,x.first);
    }
return ans;
    }
};