class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        matches = [sub for sub in words if any(sub in main for main in words if sub != main)]
        return matches