class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        int ans=0;
        unordered_map<char,int> m;
        while(j<s.length()){
            if(m.find(s[j])==m.end() || m[s[j]]<i){
                ans=max(ans,j-i+1);
                

            }
            else{
                i=m[s[j]]+1;
            }
            m[s[j]]=j;
            j++;
        }
        return ans;
    }
};