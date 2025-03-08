# import my_module as mm
# courses=['math','physics','chemistry','compsci']
# index=mm.findindex(courses,'compsci')
# print(index)
# print(mm.test1)

# from my_module import *
# courses=['math','physics','chemistry','compsci']
# print(test1)
# index=findindex(courses,'physics')
# print(index)

from my_module import findindex,test1
import sys
courses=['math','physics','chemistry','compsci']
index=findindex(courses,'physics')
print(index)
print(test1)
print(sys.path)








