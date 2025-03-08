#addition,subtraction,multiplication,division,floor division,exponent
#follows BodMAS
num1=7
num2=3.14
#a=78 ,b=27
a,b,c=34,23,72
print(a,b)
print(a,b,c)
print(type(num1))
print(type(num2))
print(3+2)
print(3-2.2)
print(3*2.2)
print(2**5)#Exponent
print(5/2)#division, which gives exact value
print(5//2)#floor division
print(10%3)#modulus
#arithmetic operation
print(2*3+1)
print(2*(3+1))
num3=-18
#abs is an inbuilt function, which print absolute vlue of a number
print(abs(num3))
num3*=3
print(num3)
num3=num3+1
print(num3)
#num3++ ,this method of incrementing nuumber does not work
# round is another built-in function in which either 1 or 2 arguements passed
print(round(3.781,2))
print(round(3.5))

#COMPARISON

# #it returns boolean value
# num1=7
# num2=2
# print(num2==num1)
# print(num2>num1)
# print(num2<num1)
# print(num2>=num1)
# print(num2!=num1)
# print(num2 is num1)


# CASTING
num4='100'
num5='200'
print(num4+num5)
print(int(num4)+int(num5))# different from cpp
ch='k'
# print(int(ch))#it doesn't print ascii value of character
one=1
two=2
hello="hello"
# print(one+two+hello)it gives typeError 
print(str(one)+str(two)+hello)

age=input()
print(age.isdigit())
print(type(age))