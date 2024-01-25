class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        k %= n  # Reducing k to the effective number of rotations within the length of the array
        
        if n <= 1 or k == 0:
            return
        
        # Reverse the entire list
        def reverse(arr, start, end):
            while start < end:
                arr[start], arr[end] = arr[end], arr[start]
                start += 1
                end -= 1
        
        reverse(nums, 0, n - 1)  # Reverse the entire list
        reverse(nums, 0, k - 1)  # Reverse the first k elements
        reverse(nums, k, n - 1)  # Reverse the remaining elements
        
        # The array 'nums' is now rotated k steps to the right in-place