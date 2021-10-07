n = int(input())
a = []
b = []
for i in range(n):
    x, y = map(int, input().split())
    a.append(x)
    a.append(y)
    b.append(y)
a.sort()
b.sort()
count = 0
ans = 0
j = 0
for i in a:
    # print(i, j)
    if i == b[j]:

        count -= 1
        j += 1
    else:
        count += 1
        ans = max(ans, count)

print(ans)
