public class Solution {
    public bool hasDuplicate(int[] nums) {
        Dictionary<int, bool> map = new Dictionary<int, bool>();
        HashSet<int> set = new HashSet<int>();

        foreach(var num in nums){
            if(set.Contains(num)){
                return true;
            }
            set.Add(num);
        }

        return false;
    }
}