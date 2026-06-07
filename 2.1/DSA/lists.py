# Exercise one
fruits = ["apple", "banana", "mango", "banana", "orange"]
print(f"first fruits is {fruits[0]} and the last fruit is {fruits[-1]}")
fruits.append("grape")
fruits.remove("banana")
if "apple" in fruits:
    print("apple is in fruits")
else:
    print("apple is not in fruits")
print(f"The length of fruits is {len(fruits)}")

# Exercise two
languages = {"Python", "Java", "C++", "Python", "Ruby"}
languages.add("Go")
languages.remove("Java")
if "C++" in languages:
    print("C++ is in languages")
else:
    print("C++ is not in languages")
try:
    languages.add("Python")
except TypeError as e:
    print(e)
print(f"The languages are {languages}")

# Exercise three
numbers = [2, 3, 5, 2, 3, 7, 11, 7]
numbers = set(numbers)
number = list(numbers)
print(numbers)

# Exercise four
math_students = {"Alice", "Bob", "Charlie", "David"}
cs_students = {"Charlie", "Eve", "Frank", "Alice"}
print(f"The students taking both are {math_students.intersection(cs_students)}")
print(f"The students taking either are {math_students.union(cs_students)}")
print(f"The students taking math only are {math_students.difference(cs_students)}")
print(f"The students taking cs only are {cs_students.difference(math_students)}")
print(
    f"The students taking either but not both are {cs_students.symmetric_difference(math_students)}"
)

# Exercise five
sentence = input("Enter a sentence: ")
# Split the sentence
print(f"The sentence is splitted is {sentence.split()}")
# Convert the sentence to a set to remove duplicates
print(f"The sentence is converted to a set  is {set(sentence.split())}")
# The sorted sentence is
print(f"The sorted sentence is {sorted(sentence.split())}")
