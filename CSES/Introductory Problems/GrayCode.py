n = int(input())
ans = 0
l = pow(2, n)
for i in range(l):
    for j in range(n - len(str(ans))):
        print('0', end='')
    print(str(ans))
    ans = int(str(ans), 2)+1
    ans = int(bin(ans).replace('0b', ''))
    # print('$', ans)
