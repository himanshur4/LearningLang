nums=[1,2,3,4,5]
for num in nums:
    if num==4:
        print('found')
        break
        #continue
    print(num)

print("***************")
nums2=[1,2,3,4]
for n in nums2:
    for char in 'abc':
        print(n,char)
print("***************")

for i in range(10):
    print(i)


print("***************")
for j in range(1,11):
    print(j)
for k in range(1,10,2): #prints odd integers from 1 to 10
    print(k)


print("***************")


x=0
while x<10:
    print(x)
    x+=1

print("***************")

y=0
while y<7:
    
    if y==5:
        y+=1 #it was important to write it here separately
        continue 
    print(y)
    y+=1
# If a break statement is executed inside the for loop then the "else" part is skipped. Note that the "else" part is executed even if there is a continue statement


l1=[1,'2h',18,'gsg']
for index,i in enumerate(l1,start=1):
    print(index,i)
    
for i in enumerate(l1):
    print(i)