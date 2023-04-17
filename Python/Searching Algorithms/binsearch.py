def binary_search(a,x):
    s=0
    f=len(a)
    while(s<=f):
        mid=(s+f)//2
        if(a[mid]==x):
            return mid
        elif(x>a[mid]):
            s=mid+1
        elif(x<a[mid]):
            f=mid-1
    return -1

l = [3,1,5,7,9,8,10,2,23,22]
target = 23
l.sort()
print(l)
print(binary_search(l,target))