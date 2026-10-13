class Solution:
    def stringMatching(self, words: list[str]) -> list[str]:
        result = set()
        for word in words:
            for nword in words:
                if word in nword and word != nword:
                    result.add(word)
        return list(result)

#it will prefer if i sorted this from the shortest to the bigger
#and break with the first match cause we found a match