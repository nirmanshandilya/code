#Strings
name = "Nirman Shandilya "
print(name[3:6])
print(name.upper())
print(name.lower())
print(name.strip())
print(name.replace("I", "i"))
print(name.split(" "))
print(name.center(1))
print(name.casefold())
print(name.partition(" S"))
print(name.count("a"))

#StringConcatenation
txt = "Heylo! I'm " + name
print(txt)

#LoopingThroughStrings
name = "Alice"
for ch in name:
    print(ch)


#IdentityOperator
a=3
b=3
print(b is a)


#Lists
lst = [1,2,3,4,5]
lst1 = lst
lst[0] = 100
print(lst1)

fruits = ["apple", "lichi", "orange"]
newlist = []
for x in fruits:
    if "i" in x:
        newlist.append(x)
print(newlist)


#Dictionary
thisdict = {
    "brand" : "Ford",
    "model" : "Mustang",
    "year" : "1969"
}
print(thisdict.items())

#accessItems
x = thisdict["year"]
print(x)

#addItem
thisdict["colour"] = "black"
print(thisdict.get("colour"))

x = 'abcd'
for i in range(len(x)):
    print(x[i])



class Normal:
    def __init__(self, x, y):
        self.x = x
        self.y = y

class Slotted:
    __slots__ = ['x', 'y']
    def __init__(self, x, y):
        self.x = x
        self.y = y

n = Normal(1,2)
s = Slotted(1,2)

import sys
print(sys.getsizeof(n.__dict__))  # more memory
print(sys.getsizeof(s))           # less memory



num1 = 30
num2 = 50
print("num1 = ", num1, "\nnum2 = ", num2)

num1 = num1+num2
num2 = num1 - num2
num1 = num1 - num2

print("num1 = ", num1, "\nnum2 = ", num2)