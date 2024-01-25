class Solution:
    def reverseWords(self, s: str) -> str:
        lis=s.split()
        lis2=lis[::-1]
        
        st= ' '.join(lis2)  
        return st
