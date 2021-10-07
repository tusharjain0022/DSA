n = int(input())
for i in range(1, n + 1):
    size = i*i
    ans = int((size*(size-1))/2) - 4*(i-1)*(i-2)
    print(ans)
