n = int(input())
ans = 1
mod = 1000000007
for i in range(n):
    ans = (ans * 2) % mod
print(ans)
