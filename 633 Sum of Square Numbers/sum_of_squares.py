class Solution(object):
    def judgeSquareSum(self, c):
        squares = {0}
        i = 1
        while i * i <= c:
            squares.add(i*i)
            i += 1
        
        for square in squares:
            if c - square in squares:
                return True
        
        return False

print(Solution().judgeSquareSum(5))  # True, because 1^2 + 2^2 = 5
print(Solution().judgeSquareSum(2147483647))  # False, because there are no two squares that sum to 2147483647