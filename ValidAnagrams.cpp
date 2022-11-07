class Solution {
    public boolean isAnagram(String s, String t) {
        char[] s_temp = s.toCharArray();
        char[] t_temp = t.toCharArray();
        Arrays.sort(s_temp);
        Arrays.sort(t_temp);
        s = new String(s_temp);
        t = new String(t_temp);
        if(s.equals(t)){
            return true;
        }else{
           return false;
        }
    }
}
