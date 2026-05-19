def insertion_sort(arr):
    n = len(arr)
    
    for i in range(1 ,n):
        key = arr[i]
        j = i-1
        while j >= 0 and arr[j] > key:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key
    
    print(*arr)

# arr = [3,6,2,1,8,9]
arr = [7,6,4,2,3,5,1]
print(*arr) #before
insertion_sort(arr) #after sorting

# Time Complexity:O(N^2)
# Space Complexity: O(1)