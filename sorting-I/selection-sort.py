def selection_sort(arr):
    n = len(arr)

    for i in range(n-1):
        # assume first index as minimum
        min = i 

        for j in range(i+1,n):
            # find min in remaining array
            if arr[j] < arr[min]:
                min = j
        #swap the found min with assumed min
        arr[i],arr[min] = arr[min], arr[i]

    print(*arr)

arr = [3,6,2,1,8,9]
print(*arr) #before
selection_sort(arr) #after sorting

# Time Complexity:O(N^2)
# Space Complexity: O(1)