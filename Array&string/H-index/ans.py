class Solution:
    def hIndex(self, citations: List[int]) -> int:
        h_index=0
        citations.sort(reverse=True)
        for i in range(len(citations)):
            if citations[i]>=i+1:
                h_index=i+1

        return h_index