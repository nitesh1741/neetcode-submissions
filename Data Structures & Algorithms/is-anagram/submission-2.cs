public class Solution {
    public bool IsAnagram(string s, string t) {
        if(s.Length != t.Length){
            return false;
        }

        int[] freq = new int[26];
        foreach(var ch in s){
            freq[ch - 'a']++;
        }

        foreach(var ch in t){
            freq[ch - 'a']--;
            if(freq[ch - 'a'] < 0){
                return false;
            }
        }

        return true;
    }
}
