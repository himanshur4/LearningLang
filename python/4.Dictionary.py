student={'name':'Himanshu','age':19,'courses':['physics','math','compSci'],3:567,'height':'162 cm'}
#key may be of any immutable data type, not only string
print(student)
print(len(student))
print(student.keys())


print(student['courses'])
print(student['name'])
print(student[3])


print(student.get('name'))
student['phone']='Rohit'#gets added in back
# print(student.get('phone','phone found'))#by default,it was none but we can pass another value to it
print(student)


#student.update({'name':'Rohit','age':38,'phone':'388-3393'})
#deletion of key 

del student['age']
print(student)
cour=student.pop('courses')
print(student)
print(cour)

#looping in dictionary
for key,val in student.items():
    print(key,val)


print(student.get('phone2'))#it doesn't throw error, it gives none
print(student['phone2']) #it gives key error as it doesn't exist
