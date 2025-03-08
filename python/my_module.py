print("inside my module...")
test1='Inside test 1 string'
test2='Inside test 2 string'
def findindex(courses,target):
    for i,course in enumerate(courses):
        if course==target:
            return i
    return -1