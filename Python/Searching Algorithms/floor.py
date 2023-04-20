def floor_num(a,x):
    if (x>a[len(a)-1]):
        return a[len(a)-1]
    elif (x<a[0]):
        return -1
    s=0
    f=len(a)
    ans=-1
    while(s<=f):
        mid=(s+f)//2
        if(a[mid]==x):
            return mid
        elif(x>a[mid]):
            s=mid+1
        elif(x<a[mid]):
            f=mid-1
            ans=mid
    return ans-1

l = [3,1,5,7,9,8,10,2,23,22]
target = 0
l.sort()
print(l)
print(floor_num(l,target))