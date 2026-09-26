public class Solution {
    public bool hasDuplicate(int[] nums) {
        Dictionary<int, bool> map = new Dictionary<int, bool>();

        foreach(var num in nums){
            if(map.ContainsKey(num)){
                return true;
            }
            map[num] = true;
        }

        return false;
    }
}