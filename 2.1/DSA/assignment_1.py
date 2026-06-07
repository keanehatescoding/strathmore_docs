# Exercise one: List Operations (Warm-up)
# Task Create a list of fruits

fruits = ["apple", "banana", "mango", "banana", "orange"]
print(fruits)
# a) Print the first and list fruit
print(f"The first fruit is {fruits[0]} and the last fruit is {fruits[-1]}")
# b) Add "grape" to the list
print("Appending grape to fruits")
fruits.append("grape")
print(fruits)
# c) Remove "banana"
print("Trying to remove banana from the fruits")
try:
    fruits.remove("banana")
    print("Succesffully removed banana from the list of fruits")
    print(fruits)
except ValueError as e:
    print(f"Cannot remove banana because {e}")
# d) Check if "apple" is in list
if "apple" in fruits:
    print("apple is in fruits")
else:
    print("apple is not in fruits")
# e) Print the length of the list
print(f"The length of fruits is {len(fruits)}")

# Exercise 2: Set Operations
# Task: Crate a set of programming languages
print("Creating a set of programming languages")
languages = {"Python", "Java", "C++", "Python", "Ruby"}
print(languages)
# a) Add "Go" to the set
print("Appending Go to list of programming languages")
print(f"Programming languages before: {languages}")
languages.add("Go")
print(f"Programming languages after: {languages}")
# b) Remove "Java"
print("Removing Java from the lset of programming la")
try:
    languages.remove("Java")
    print("Succesffully removed java form set of programmming languages")
    print(languages)
except KeyError as e:
    print(f"Cannot remove Java because {e}")
# c) Check if "C++" is in the set
if "C++" in languages:
    print("C++ is in programming languages")
else:
    print("C++ is not in list of programming languages")
# d) Try to add "Python" agian and observe the result
print("Appending Python to programming list")
if "Python" not in languages:
    print(f"Programming languages before: {languages}")
    languages.add("Python")
    print(f"Programming languages after: {languages}")
else:
    print("Python is already in the set")
# e) Print the set
print(f"The programming languages are {languages}")

# Exercise 3: Convert List to Set
# Task Remove duplicates from a list using a set
numbers = [2, 3, 5, 2, 3, 7, 11, 7]
print(numbers)
# a) Convert to a set
print("Converting numbers to a set")
numbers = set(numbers)
print(f"{numbers} is of type: {type(numbers)}")
# b) Convert back to a list
print("Converting back to list")
number = list(numbers)
print(f"{numbers} is of type: {type(numbers)}")
# c) Print the list of unique numbers
print(f"Printing out unique numbers: {numbers}")

# Exercise 4: Set Operations - Union, Intersection, Difference
# Task: Work with two sets of students
math_students = {"Alice", "Bob", "Charlie", "David"}
print(f"Math students are: {math_students}")
cs_students = {"Charlie", "Eve", "Frank", "Alice"}
print(f"CS students are: {cs_students}")
# a) Students taking both Math and CS (Intersection)
print(f"The students taking both are {math_students.intersection(cs_students)}")
# b) Students taking either Math or CS (union)
print(f"The students taking either are {math_students.union(cs_students)}")
# c) Students taking Math but not in CS (difference)
print(f"The students taking math only are {math_students.difference(cs_students)}")
# d) Students in one course (symmetric difference)
print(
    f"The students taking either Math or CS but not both are {cs_students.symmetric_difference(math_students)}"
)

# Exercise 5: Challenge - Unique Words in a Sentence
# Task: Ask user to enter a sentence and return a list of unique words
sentence = input("Enter a sentence: ")
# a) Split the sentence into words
sentence.split(" ")
print(f"The splitted sentence is {sentence}")
# b) Convert to a set to remove duplicates
sentence = set(sentence)
print(f"The sentence without the duplicates is {sentence}")
# c) Convert back to a sorted list
print("Converting set back to a sorted list")
sentence = list(sorted(sentence))
# d) Print the list of unique words
print(f"The sorted sentence is {sentence}")

# 1. Create a basic hashtable in python(dict)
hashtable = dict(Names=["Keane", "Pius", "Pritpal"])

# 2. Store a few common phrases as keys
hashtable["Places"] = ["Nairobi", "Kigali", "New Delhi"]
hashtable["Currency"] = ["Ksh", "Ugsh", "Rupees"]


# Write a simple program that:
# 1. Takes user input
# 2. Matches and suggests possible completions from the hashtable
print('Do you want to get suggestions for "Places, Currency or Names"')
while True:
    try:
        word = input("I want suggestions for: ").capitalize()
        if word not in hashtable:
            raise KeyError('We only offer suggestions for "Places, Currency and Names"')
        print(hashtable[word])
        break
    except KeyError as e:
        print(e)


a = [[[i for i in range(0, 5)] for j in range(0, 3)] for k in range(0, 4)]
print(a)


def printall(arr):
    for i in range(4):
        for j in range(2):
            for k in range(3):
                print(arr[i, j, k])
    print()


def update(arr, i, j, k, a):
    arr[i, j, k] = a


math_students = {"Alice", "Bob", "Charlie", "David"}
# arr = [[[i for i in range(0, 3)]for i+1 in range(0,3)]for i in range(i+2)]
