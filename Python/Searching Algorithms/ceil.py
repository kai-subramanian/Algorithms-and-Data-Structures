# find the ceiling of a number, basically, the 
# first number greater than or equal to the target.

def ceiling(arr,t):
    if (t>arr[len(arr)-1]):
        return -1
    elif (t<arr[0]):
        return arr[0]
    s=0
    f=len(arr)-1
    ans=-1
    while(s<=f):
        m=s+(f-s)//2
        if(arr[m]>t):
            f=m-1
        elif(arr[m]<t):
            ans=m
            s=m+1
        else:
            return m
    return ans+1
l = [1, 2, 3, 5, 7, 8, 9, 10, 22, 23]
target = 11
print(ceiling(l,target))