def hello_func():
    pass #it means the function is empty
print(hello_func)# it prints id of the func
print(hello_func())

def hello_func2():
    print("inside func2")
    return 5
print(hello_func2())

def func3():
    return "it is function 3"
print(func3())
print(func3().upper())

def func4(greet):
    #return '{} from func4.'.format(greet)
    return f'{greet} from func4.'
print(func4('hii'))

def func5(greet,name='Himan'):
    return f'{greet} from func5 by {name}. '
    #return '{} ,{} from func5.'.format(greet,name)
print(func5('hiii','himanshu'))

def student_info(*args,**kwargs):#args gives tupples and kwargs gives dictionary
    print(args)
    print(kwargs)
print(student_info('Math','Arts',name='johns',age=22))

course=['Hindi','English']
student={'name':'Johnn','age':63}
print(student_info(course,student))
print(student_info(*course,**student))#by this method we pass unpacked list or dictionary


month_days=[0,31,28,31,30,31,30,31,31,30,31,30,31]

def is_leap(year):
    return year%4==0 and (year%100!=0 or year%400==0)
def days_in_months(year,month):
    if not 1<=month<=12:
        return 'invalid month'
    elif month==2 and is_leap(year):
        return 29
    else:
        return month_days[month]
    
print(days_in_months(2017,2))
print(days_in_months(2020,2))
print(days_in_months(2100,2))
