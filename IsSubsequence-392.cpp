class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length();
        int m = t.length();
        int index = 0;
        
    	for(int i = 0; i < m; i++){
    		if(t[i] == s[index]){
    			index++;
			}
		}
		return (index == n)? true : false;
    }
};