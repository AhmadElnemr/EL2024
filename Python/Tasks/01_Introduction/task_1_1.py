#Write a Python program to count the number 4 in a given list.

myList=[1,4,6,7,4]
i=0
count=0

for i in range(len(myList)):
    if myList[i] == 4:
        count+=1
else:
    print("\nSearch finished\n")

print(str(4) + " exists in he given list " + str(count) + " times\n")