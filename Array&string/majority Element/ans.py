class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        dictt=Counter(nums)
        for num,value in dictt.items():
            if value>len(nums)/2:
                return num