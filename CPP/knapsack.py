capacity=int(input("Enter Capacity of Bag: "))

profit=[int(x) for x in input("Enter profit: ").split()]
weight=[int(x) for x in input("Enter Weight: ").split()]
n=len(weight)
pbyw=[profit[i]/weight[i] for i in range(n)]
gain=list(zip(weight,pbyw,profit))
gain.sort(key=lambda x:x[1],reverse=True)
overall=0
for i in range(n):
    if capacity == 0:
        break

    if gain[i][0] <= capacity:  # If the whole item can be taken
        overall += gain[i][2]  # Add full profit
        capacity -= gain[i][0]  # Reduce capacity
    else:  # Take fraction of the item
        overall += gain[i][2] * (capacity / gain[i][0])
        capacity = 0  # Bag is full

print("Maximum Profit:", overall)