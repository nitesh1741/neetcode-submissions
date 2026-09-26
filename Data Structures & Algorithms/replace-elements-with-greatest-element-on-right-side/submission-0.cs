public class Solution {
    public int[] ReplaceElements(int[] arr) {
        int i = arr.Length - 1;
        int max = -1;
        while(i >= 0){
            int curr = arr[i];
            arr[i] = max;
            max = Math.Max(max, curr);
            i--;
        }
        return arr;
    }
}