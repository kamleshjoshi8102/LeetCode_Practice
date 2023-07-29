class Solution(object):
    def __init__(self):
        self.mp = {}

    def recur(self, a, b):
        if a <= 0 and b <= 0:
            return 0.5
        if a <= 0 and b > 0:
            return 1
        if a > 0 and b <= 0:
            return 0
        if (a, b) in self.mp:
            return self.mp[(a, b)]

        op1 = self.recur(a - 100, b)
        op2 = self.recur(a - 75, b - 25)
        op3 = self.recur(a - 50, b - 50)
        op4 = self.recur(a - 25, b - 75)

        self.mp[(a, b)] = 0.25 * (op1 + op2 + op3 + op4)
        return self.mp[(a, b)]

    def soupServings(self, n):
        if n >= 4800:
            return 1
        ans = self.recur(n, n)
        return ans