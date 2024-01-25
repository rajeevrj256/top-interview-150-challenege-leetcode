class Solution:
    def romanToInt(self, s: str) -> int:
        roman_values = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        sum = 0
        i = 0
        while i < len(s):
            if i + 1 < len(s) and roman_values[s[i]] < roman_values[s[i + 1]]:
                sum += roman_values[s[i + 1]] - roman_values[s[i]]
                i += 2
            else:
                sum += roman_values[s[i]]
                i += 1
        return sum