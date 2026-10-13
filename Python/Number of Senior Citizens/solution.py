class Solution:
    def countSeniors(self, details: List[str]) -> int:
        result = 0
        for s in details:
            if len(s) < 15:
                continue
            if (int(s[12]) + 10 * (int(s[11])) > 60):
                result +=1
        return result



