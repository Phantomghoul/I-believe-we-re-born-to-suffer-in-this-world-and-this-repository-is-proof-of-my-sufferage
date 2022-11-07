class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> SortedAnagrams = new ArrayList<>();
        HashMap<String, List<String>> map = new HashMap<>();
        for(String current : strs){
            char[] characters = current.toCharArray();
            Arrays.sort(characters);
            String sorted = new String(characters);
            if(!map.containsKey(sorted)){
                map.put(sorted,new ArrayList<>());
            }
            
            map.get(sorted).add(current);
        }
        SortedAnagrams.addAll(map.values());
        return SortedAnagrams;
    }
}
