# Write a function that uses a stack to reverse a string
def reverse(arr: str):
    stack = []
    for c in arr:
        stack.push(c)
    return stack
