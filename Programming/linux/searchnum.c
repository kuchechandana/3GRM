

__init__="__main__"
print("user search num:")
n=int(input())

a=[1]
for i in range(1,50,2):
    i=i+2
    a.append(i)
print(a)

b=[2]
for i in range(2,50,2):

    i=i+2
    b.append(i)
print(b)

c=[3]
for i in range(3,50,2):
    
    i=i+2
    c.append(i)
print(c)

if n in a:
   print("num in list a:",n)
if n in b:
   print("num in list b:",n)

if n in c:
   print("num in list c:",n)



