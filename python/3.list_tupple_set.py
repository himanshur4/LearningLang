#list
courses=['physics','math','cs']
print(courses)
print([1,2,3] * 3)#Just as in strings, Python supports forming new lists with a repeating sequence using the multiplication operator
print(len(courses))
print(courses[0])
print(courses[-1])# -1 indicates the last item and -2,-3, etc. indicates the second and third items from the last
print(courses[0:2])
courses.append('geography')#append function adds element to the list in the end 
print(courses)
courses.insert(0,'arts')#insert function used to add element at desired index, 1st arguement takes index and second element
print(courses)
courses_2=['history','economics']
courses.insert(0,courses_2)
print(courses)#the whole list gets added if we uses insert or append function,not the individual element of the list that we want
print(courses[0])
courses.remove(courses_2)
print(courses)
courses.remove('geography')#method to remove the element in the list
print(courses)
courses.remove(courses[-2])
print(courses)
courses.extend(courses_2)# add the elements of courses_2 in courses at the end(not the list)
print(courses)
courses.reverse()
print(courses)
popped=courses.pop()# removes the last element of the list
print(courses)
print(popped)
courses.sort()# sorts the list in alphabetical order
print(courses)
list=[1,21,31,72]
print(list)
print("%s" %list)#Any object which is not a string can be formatted using the %s operator as well
mqq=19
print("%s"%mqq)
print("%.7f"%mqq)#it works only with %f
nums=[7,5,2,9,1,6,3,4,8]
#nums.sort()#another method of sorting without altering is by using 'sorted' function print(sorted(nums))
print(sorted(nums))
print(nums)
print(min(nums))
print(sum(nums))
print(courses.index('history')) #method to find the first occurring index of a particular value
#SORTing in descending order can be done by sorting in ascending nd then reversing it but their is an easier method available
nums2=[8,7,4,9,1,64,28,91]
nums2.sort(reverse=True)
print(nums2)#sorting in descending order
#how to find whether certain element is present in the list or not? (using 'in'), it returns a boolean value
a=['hsjh','dgh','abac']
a.sort(key=len)
print(a)
print('math' in courses)
print('history' in courses)
#another method to access the elements of the courses using loop
for index,course in enumerate(courses,start=1):
    print(index,course)
#Method of changing list into string
new_courses=', '.join(courses)# it is string (changing elements of list into string)
print(new_courses)
new_courses2='-'.join(courses)
print(new_courses2)
#changing the string into the list by splitting method
new_list=new_courses2.split('-')#splitted through that point which contains -
print(new_list)
even_numbers = [2,4,6,8]#Lists can be joined with the addition operators
odd_numbers = [1,3,5,7]
all_numbers = odd_numbers + even_numbers
print(all_numbers)

#TUPLES: it is similar to the list but it can't be modified(called as immutable) whereas lists are mutable
#mutable
list_1=['history','math','science','economics']
list_2=list_1
print(list_1)
print(list_2)
#since lists are mutable,therefore the value of list_2 also gets updated if we updates the value in list_1 and this is important property for modification
list_1[0]='arts'
print(list_1)
print(list_2)

#immutable

tuple_1=('civics','computer','geography')
tuple_2=tuple_1

# tuple_1[0]='english'
#since tuples are immutable, so its value can't be updated or modified but we can access or traverse its elements just like lists
#() in all the method that we used in the list we requires mutation, so we caan't use all those methods of list in tuple,however printing or looping,etc. works even in tuple as it doesn't require mutation
print(tuple_1)
#sometimes we need such kind of list in which we don't want any modification then use tuple instead of list in that case
tuple1=('m1','m2','m3')
for i,course in enumerate(tuple1):
    print(i,course)


#SETS
# it contains values that are unordered and contains no duplicates and it tests the presence of any elements more efficiently than lists and tupples

cs_courses={'civics','computer','geography','math','civics'}
art_courses={'civics','art','geography','design'}
print(cs_courses)
print('math' in cs_courses)
print(cs_courses.intersection(art_courses))
print(cs_courses.union(art_courses))
print(cs_courses.difference(art_courses))
#sets are very useful in these operations and is more optimised than lists and tuples

#Empty lists,tuples and sets

#Empty list(created by 2 methods)
empty_list=[]
empty_list=list()

#Empty tuple(created by 2 methods)
empty_tuple=()
empty_tuple=tuple()

#Empty set(1 method)
empty_set={}#This isn't right, it is a dictionary
empty_set=set()


l1=[1,'2h',18,'gsg']
l2=l1*3
print(l2)