n = int(input())
a = list(map(int, input().split()))
s = set()
for i in range(n):
    s.add(a[i])
print(len(s))
