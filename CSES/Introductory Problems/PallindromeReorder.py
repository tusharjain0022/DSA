s = input()
d = dict()
for i in s:
    if i in d:
        d[i] += 1
    else:
        d[i] = 1
odd = 0
ans = []
oddValue = 0
for key in d:
    if d[key] % 2 != 0:
        odd += 1
        oddValue = key
    else:
        for i in range(int(d[key]/2)):
            ans.append(key)

if odd > 1:
    print('NO SOLUTION')
else:
    for i in ans:
        print(i, end='')
    if oddValue != 0:
        for i in range(int(d[oddValue])):
            print(oddValue, end='')
    for i in range(len(ans)-1, -1, -1):
        print(ans[i], end='')
        # print('hee')

    print('')
