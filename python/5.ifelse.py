# Comparisons:
# Equal:            ==
# Not Equal:        !=
# Greater Than:     >
# Less Than:        <
# Greater or Equal: >=
# Less or Equal:    <=
# Object Identity:  is

#Out of two conditions, When 'or' is used between two and if first condition is true then it doesn't check the second condition what is written in that
lang='java'
if lang=='python':
    print('Language is python')
elif lang=='java':
    print('language is java')
else:
    print('no match')


user='admin 23' #space-sensitive in the quotes 
logged_in=True # or false
if user=='admin 23' and logged_in:
    print('admin page')
elif user=='admin' or logged_in:
    print("Still in admin page")
else:
    print('Bad Creds')


loggedin=False
if not loggedin:
    print('please log in')
else :
    print("welcome to page")


# difference between '==' and 'is'
a=[1,2,3]
b=[1,2,3] # not same id in case of list but in case of normal variable,id depends on value and remains same
# b=a (id becomes same)
print(a==b)
print(a is b)# eqivalent to id(a)==id(b)
print(id(a))
print(id(b))
print(id(a)==id(b))


# False Values:
    # False
    # None
    # Zero of any numeric type
    # Any empty sequence. For example, '', (), [].
    # Any empty mapping. For example, {}.
condition=None
if condition:
    print('true condi')
else:
    print('false condition')

print("***************")
mystring = "hello"
myfloat = 10.0
myint = 20

# testing code
if mystring == "hello":
    print("String: %s" % mystring)
if isinstance(myfloat, float) and myfloat == 10.0:#The isinstance() function returns True if the specified object is of the specified type, otherwise False .
    print("Float: %f" % myfloat)
if isinstance(myint, int) and myint == 20:
    print("Integer: %d" % myint)


# all(multiple and) and any(multiple or in one tuple)// both all and any takes only one arguements
a=45
b=55
c="fh"
if (all((a>0,b>0,a+b==100,type(c)==str))):
    print("true")
if (any((a<0,b>0,a+b==9))):
    print("{}, {}".format("also ","true"))

#single line if-else:
temp=int(input("Enter Temperature: "))
status="hot" if temp>45 else "cold" if temp<10  else "Normal"
print("%s" %(status))
