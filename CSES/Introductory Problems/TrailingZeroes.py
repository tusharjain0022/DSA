n = int(input())
ans = 0
for i in range(1, 13):
    ans += int(n / pow(5, i))
print(ans)
