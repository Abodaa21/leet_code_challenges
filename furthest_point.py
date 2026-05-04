class Solution:
    def furthestDistanceFromOrigin(self, moves: str) -> int:
        count_l = 0
        count_r = 0
        is_R = 0
        is_L = 0
        idx = 0
        if ("R" and "L") not in moves:
            return len(moves)
        for i in range(len(moves)):
            if moves[i] == 'L':
                count_l += 1
                is_L += 1
            elif moves[i] == 'R':
                count_r += 1
                is_R += 1
            elif moves[i] == '_':
                idx += 1

        if count_r > count_l:
            count_r += idx
        else:
            count_l += idx
        return (abs(count_l - count_r))

print(Solution().furthestDistanceFromOrigin("L_RL__R"))
