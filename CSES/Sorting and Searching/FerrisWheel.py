n, x = map(int, input().split())
p = list(map(int, input().split()))
ans = 0
i = 0
j = n - 1
p.sort()
while i <= j:
    if p[i] + p[j] <= x:
        ans += 1
        i += 1
        j -= 1
    else:
        ans += 1
        j -= 1
print(ans)
