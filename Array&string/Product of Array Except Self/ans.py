class Solution:
    def productExceptSelf(self, nums):
        n = len(nums)
        ans = [1] * n

        # Calculating products to the left of each element
        for i in range(1, n):
            ans[i] = ans[i - 1] * nums[i - 1]

        product_right = nums[n - 1]

        # Multiplying by products to the right and updating product_right
        for i in range(n - 2, -1, -1):
            ans[i] *= product_right
            product_right *= nums[i]

        return ans