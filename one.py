t= int(input())
while t!=0:
    n=int(input())
    l =list(map(int,input().split()))
    q = int(input())
    while q!=0:
        num =-1
        a = int(input())
        for i in range(0,len(l)):
            if l[i]==a:
                num =i
        print(num)
        q-=1
    t-=1