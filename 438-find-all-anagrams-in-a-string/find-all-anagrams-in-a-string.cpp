class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        if(s.size()<p.size()){
            return ans;
        }
         vector<int>target(26,0);
         vector<int>window(26,0);
         for(char ch : p){
            target[ch-'a']++;
         }
         int k=p.size();
         for(int i=0;i<k;i++){
            window[s[i] - 'a']++;
         }
        int left=0;
        for(int right=k;right<s.size();right++){
            if(window==target){
                ans.push_back(left);
                }
                window[s[left]-'a']--;
                window[s[right]-'a']++;
                left++;
            
        }
        if(window==target){
            ans.push_back(left);
        }
        return ans;
    }
};