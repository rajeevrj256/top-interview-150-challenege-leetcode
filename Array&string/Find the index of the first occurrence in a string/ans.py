class Solution:
    def strStr(self, haystack, needle):
        if len(needle) > len(haystack):
            return -1
        if not needle:
            return 0

        for i in range(len(haystack) - len(needle) + 1):
            j = 0
            while j < len(needle) and haystack[i + j] == needle[j]:
                j += 1
            if j == len(needle):
                return i
        return -1