class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        arr = {}
        for word in strs:
            key = ''.join(sorted(word))
            if key not in arr:
                arr[key] = []
            arr[key].append(word)
        return list(arr.values())