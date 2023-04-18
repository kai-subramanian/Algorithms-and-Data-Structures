def bubble_sort(arr):
    # Takes an array of integers as input,
    # and returns a sorted array.
    temp=0
    for i in range (0,len(arr)):
        for j in range (i,len(arr)):
            if arr[i]>arr[j]:
                temp=arr[i]
                arr[i]=arr[j]
                arr[j]=temp
    return arr
l = [3,1,5,7,9,8,10,2,23,22]
print(bubble_sort(l))