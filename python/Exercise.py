# 1. The target of this exercise is to create two lists called x_list and y_list, which contain 10 instances of the variables x and y, respectively. You are also required to create a list called big_list, which contains the variables x and y, 10 times each, by concatenating the two lists you have created.
x = object()
y = object()

x_list = [x]*10
y_list = [y]*10
big_list = x_list+y_list

print("x_list contains %d objects" % len(x_list))
print("y_list contains %d objects" % len(y_list))
print("big_list contains %d objects" % len(big_list))

# testing code
if x_list.count(x) == 10 and y_list.count(y) == 10:
    print("Almost there...")
if big_list.count(x) == 10 and big_list.count(y) == 10:
    print("Great!")

#2.You will need to write a format string which prints out the data using the following syntax: Hello John Doe. Your current balance is $53.44.
data = ("John", "Doe", 53.44)
format_string = "Hello %s %s. Your current balance is $%s."
print(format_string % data)

#3.In this exercise you'll use an existing function, and while adding your own to create a fully functional program.

def list_benefits():
    return ["More organized code", "More readable code", "Easier code reuse", "Allowing programmers to share and connect code together"

]

# Modify this function to concatenate to each benefit - " is a benefit of functions!"
def build_sentence(benefit):
    return "%s is a benefit of functions!"%benefit

def name_the_benefits_of_functions():
    list_of_benefits = list_benefits()
    for benefit in list_of_benefits:
        print(build_sentence(benefit))