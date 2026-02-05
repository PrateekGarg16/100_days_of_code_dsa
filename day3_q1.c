/* Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

Input:
- First line: integer n (array size)
- Second line: n space-separated integers
- Third line: integer k (key to search) */

# Day3_q1

n = int(input())

arr = list(map(int, input().split()))

k = int(input())

comparisons = 0
found = False

for i in range(n):
    comparisons += 1
    if arr[i] == k:
        print("Key found at index", i)
        found = True
        break

if not found:
    print("Key not found")

print("Number of comparisons:", comparisons)
