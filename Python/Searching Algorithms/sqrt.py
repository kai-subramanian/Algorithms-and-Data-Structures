# find sqaure root for floating point numbers
def find_sqrt(num):
    s=0
    f=num
    acc=0.01
    ans=1
    while(s<=f):
        m = (s+f)//2
        if m*m==num:
            ans=m
            break
        elif m*m<num:
            s=m+1
            ans=m
        else:
            f=m-1
    for i in range(0,3):
        while (ans*ans<=num):
            ans+=acc
        ans=ans-acc
        acc=acc/10
    return ans

n=42.25
print(find_sqrt(n))
