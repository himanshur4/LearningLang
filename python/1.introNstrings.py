# message1='Him\'s World'
# message2="Him' WORLD"
message3='"Hello World"'
message4='''This is the method of creating string of
newline in python
instead of using single quote thrice,we could also have used double quotes thrice'''
print("this is method of adding bckslash\' \ in the string")
print(1+1\
      +2\
        +6)
lost=['aaa','ah',
'ahh','c' ]
print(lost)

print(message3)
print(message4)
print(len(message3))
print(message3.upper())
print(message3.lower())
print(message3.find('World'))
print(message3.find('l'))#it returns the starting index of l
print(message3.count('l'))#counts the total number of l inside the quote
print(message3[0])
print(message3[:4])#starting index by default and index 4 is exclusive
print(message3[4:])#goes until the end and here index 4 is inclusive
print(message3[2:9])#index 2 is inclusive whereas index 9 is exclusive(2-8)
message3=message3.replace('Worl','gol')
print(message3)
str1='Himanshu'
str2="Raj"
str3=str1+" "+str2 #it's not a good method of concatenation for more number of strings 
print(str3)
lotsofhellos = "hello " * 10
print(lotsofhellos)
str3=f'{str1}, {str2}. Kashyap' #f stands for formatting, useful in concatention of two or more string
print(str3)
name = "John"
age = 23
print("%s is %d years old." % (name, age))#To use two or more argument specifiers, use a tuple (parentheses):
astring = "Hello world!"
print(astring[1:8:2])#This is extended slice syntax. The general form is [start:stop:step].This prints the characters of string from 3 to 7 skipping one character.
print(astring[1:8:1])#it is continuous
print(astring[::-1])#this method for in-place reversal in python
print(astring[-1:-6:-2])
print(astring[-1:-6:2])#it doesn't work
#astring[1::2] character with odd indexing
#astring[0::2] character with even indexing



































print(dir(message3))
print(help(str.format))
print(help(str))#it gives all function of string and its functionality that can be used in python
