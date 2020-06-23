# cook your dish here
s=input()
count=0
for i in range(len(s)):
    if s[i] == 'x':
        count=count+1
if count>=1:
    print("Not Safe")
else:
    print("Safe")
