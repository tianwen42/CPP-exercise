nums = [1, 2, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 10, 11, 11, 11,
11, 12, 13, 13, 15, 16, 16, 20, 21, 21, 23, 24, 26,
26, 27, 28, 28, 31, 33, 33, 34, 35, 38, 38, 39, 40,
42, 43, 45, 45, 46, 46, 47, 47, 51, 52, 52, 53, 53,
55, 55, 56, 56, 57, 57, 57, 58, 59, 61, 62, 64, 66,
66, 67, 68, 69, 69, 71, 72, 72, 74, 74, 75, 76, 78,
78, 79, 79, 79, 79, 80, 82, 85, 88, 89, 90, 90, 91,
91, 91, 94, 99, 99]
def find(num,nums):
    mid = len(nums) // 2
    if nums[mid] > num:
        nums = nums[0:mid]
        print(nums)
        find(num, nums)
    elif nums[mid] < num:
        nums = nums[mid+1:]
        print(nums)
        find(num, nums)
    else:
        print('找到了')
        print(nums[mid])
        return nums[mid]
find(40,nums)