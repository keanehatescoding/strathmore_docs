import random
import time

# Comb Sort implementation
def comb_sort(arr: list[int]):
    gap = len(arr)
    shrink = 1.3
    swapped = True

    while gap > 1 or swapped:
        gap = int(gap / shrink)
        if gap < 1:
            gap = 1

        swapped = False
        for i in range(len(arr) - gap):
            if arr[i] > arr[i + gap]:
                arr[i], arr[i + gap] = arr[i + gap], arr[i]
                swapped = True

# Bubble Sort implementation
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        swapped = False  # Optional optimization
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
        if not swapped:
            break

# Benchmarking function
def compare_sorts(size=1000):
    print(f"\nComparing on list size: {size}")

    # Generate a random list
    base_list = [random.randint(0, 10000) for _ in range(size)]

    # Bubble Sort
    bubble_list = base_list.copy()
    start = time.perf_counter()
    bubble_sort(bubble_list)
    end = time.perf_counter()
    print(f"Bubble Sort time: {end - start:.6f} seconds")

    # Comb Sort
    comb_list = base_list.copy()
    start = time.perf_counter()
    comb_sort(comb_list)
    end = time.perf_counter()
    print(f"Comb Sort time:   {end - start:.6f} seconds")

# Run comparison
if __name__ == "__main__":
    compare_sorts(1000)   # You can increase size for a more noticeable difference
