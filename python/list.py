#cloning :Modification in one list will not affect the other.
l1=[12,32,45,83,92]
l2=[]
# l2=l2+l1
l2[:]=l1
print(l2)
print(l1)
l1[2]=111

print(l2)
print(l1)
l1.clear()#it makes the list empty
print(l1)
# del(l1)
# print(l1) #after using del,it throws a name error 
#import copy
# deepcopy(c1=copy.deepcopy())is similar to cloning and shallowcopy(c2=copy.copy())[in shallow copy, change will be observed in both original and copied list] is similar to aliasing

#UNPACKING OF LIST
s="himanshu raj"
s1=[*s]
print(s1)

# LIST COMPREHENSION
print("\n*****LIST COMPREHENSION*********\n")
li1=[1,2,3,4,5,6,7]
li2=[i**2 for i in li1 if not(i%2==0)]
print(li1)
print(li2)
squares=[i**2 for i in range(5)]#start=1 is not to be used in inside range() function
print(squares)
names=['Himanshu','Ram','Krishna','Aman','Virat']
nam=['K','H',"V"]
name2=[x for x in names if x[0] in nam]
print(name2)
s4="Education"
li=['*' if letter in "aeiouAEIOU" else letter for letter in s4]
print(li)

print("\n******Comprehension with nested for\n")
li2=[[1,2,3],[5,7,9],[16,31,91]]
li3=[n for i in li2 for n in i]
print(li3)
li_p1=[i*j for i in range(1,5) for j in range(1,4)]
print(li_p1)
li_p2=[[i*j for i in range(1,5)] for j in range(1,5)]
print(li_p2)

print("\n*********ENTERING MULTIPLE INPUTS\n")
lip1=[names for names in input().split()]
print(lip1)
# print(sum(lip1))
lip2=[int(n) for n in input().split()] #taking multiple integer input using list comprehension
print(sum(lip2))
