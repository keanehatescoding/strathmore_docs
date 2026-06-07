def printall(arr):
    for i in range(4):
        for j in range(2):
            for k in range(3):
                print(arr[i, j, k])


def update(arr, i, j, k, a):
    arr[i, j, k] = a
