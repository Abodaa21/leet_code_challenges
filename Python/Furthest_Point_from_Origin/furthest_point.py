class Solution:
    def furthestDistanceFromOrigin(self: "Solution", moves: str) -> int:
        count_l = 0
        count_r = 0
        idx = 0
        if ("R" and "L") not in moves:
            return len(moves)
        for i in range(len(moves)):
            if moves[i] == 'L':
                count_l += 1
            elif moves[i] == 'R':
                count_r += 1
            elif moves[i] == '_':
                idx += 1
        return (abs(count_l - count_r) + idx)

