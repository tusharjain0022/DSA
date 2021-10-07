n = int(input())
a = []
b = []
suma = 0
sumb = 0
for i in range(n, 0, -1):
    if suma <= sumb:
        a.append(i)
        suma += i
    else:
        b.append(i)
        sumb += i
if suma == sumb:
    print('YES')
    print(len(a))
    for i in range(len(a) - 1, -1, -1):
        print(a[i], end=' ')
    print('')
    print(len(b))
    for i in range(len(b) - 1, -1, -1):
        print(b[i], end=' ')
else:
    print('NO')
