s = input()
max = -999999999
cnt = 1
for i in range(len(s)-1):
    if(s[i] == s[i+1]):
        cnt += 1
    else:
        cnt = 1
    if(cnt > max):
        max = cnt
if(max>cnt):
    print(max)
else:
    print(cnt)