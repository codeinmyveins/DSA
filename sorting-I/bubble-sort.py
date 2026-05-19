def bubble_sort(arr):
   
    n = len(arr)
    
    for i in range(n-1,0,-1):
        didSwap = 0
        
        for j in range(0,i):
            if arr[j]>arr[j+1]:
                arr[j],arr[j+1] = arr[j+1],arr[j]
                didSwap = 1
        
        if didSwap == 0:
            break

    print(*arr)


arr = [13, 46, 24, 52, 20, 9]
bubble_sort(arr)

# Time Complexity:O(N2) 
# Space Complexity:O(1)