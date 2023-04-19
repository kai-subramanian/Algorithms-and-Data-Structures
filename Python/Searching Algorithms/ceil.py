# find the ceiling of a number, basically, the 
# first number greater than or equal to the target.


def ceil_find(arr,t,s,f):
    # condition - greater than previous num, 
    # lesser than next num
    if (t>arr[len(arr)-1]):
        return -1
    elif (t<arr[0]):
        return arr[0]
    m = (s+f)//2
    while(s<=f):
        if (arr[m]<=t and arr[m+1]>t):
            return arr[m+1]
        elif (arr[m]>=t):
            m-=1
        else:
            m+=1
    return arr[m]

l = [1, 2, 3, 5, 7, 8, 9, 10, 22, 23]
target = 9
print(ceil_find(l,target,0,len(l)))