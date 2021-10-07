n, m, k = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
a.sort()
b.sort()
i = 0
j = 0
ans = 0
while i < n and j < m:
    # print('#', a[i], b[j])
    if b[j] < (a[i] - k):
        j += 1
    elif b[j] > (a[i] + k):
        i += 1
    else:
        i += 1
        j += 1
        ans += 1
    # print(i, j)
print(ans)
