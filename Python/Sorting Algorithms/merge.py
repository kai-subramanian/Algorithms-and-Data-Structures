def mergeSort(arr):
    if len(arr) > 1:
        m = len(arr)//2
        l = arr[:m]
        r = arr[m:]
        
        mergeSort(l)
        mergeSort(r)
 
        i=j=k=0

        while i<len(l) and j<len(r):
            if l[i]<=r[j]:
                arr[k]=l[i]
                i+=1
            else:
                arr[k]=r[j]
                j+=1
            k+=1
        
        while i<len(l):
            arr[k]=l[i]
            i+=1
            k+=1
 
        while j<len(r):
            arr[k]=r[j]
            j+=1
            k+=1
    return arr


arr = [3,1,5,7,9,8,10,2,23,22]
print(mergeSort(arr))