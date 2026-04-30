def findOccurences(arr):
    d={}
    for i in arr:
        if i not in d:
            d[i] = 1
        else: d[i] += 1
    return d

arr = [1,2,2,3,4,7,5,5,5,8]

print(findOccurences(arr))

# using collections

from collections import defaultdict

class Solution:
    def Frequency(self, arr, n):
        freq_map = defaultdict(int)

        for i in range(n):
            freq_map[arr[i]] += 1

        for key, value in freq_map.items():
            print(key, value)


freq_map = Solution()
arr = [1,2,2,3,4,7,5,5,5,8]
freq_map.Frequency(arr,len(arr))