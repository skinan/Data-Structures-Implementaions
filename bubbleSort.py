
#bubble sort
#Getting Inputs
x = input("Enter Elements: ").split(" ")

#start of for loop to compare and interchange elements 

for i in range(0, len(x)):
    for j in range(0, len(x) - (i + int(1))):
        y = x[j+1]
        if int(x[j]) > int(x[j+1]):
            x[j+1] = x[j]
            x[j] = y

#printing the list after sorting it in ascending order
print("After Sorting : ",".join(x))
