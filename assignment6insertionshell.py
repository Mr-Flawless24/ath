percentage = []
n = int(input("Enter the number of students in class: "))
for i in range(n):
    k = float(input(f"Enter the percentage of student {i + 1}: "))
    percentage.append(k)

# Insertion sort
def insertionsort(percentage):
    for i in range(1, len(percentage)):
        key = percentage[i]
        j = i - 1

        while j >= 0 and key < percentage[j]:
            percentage[j + 1] = percentage[j]
            j -= 1
        percentage[j + 1] = key

    return percentage

print("Insertion sorted array:", insertionsort(percentage))

# Shell sort
def shellsort(percentage):
    gap = len(percentage) // 2

    while gap > 0:
        for j in range(gap, len(percentage)):
            temp = percentage[j]
            i = j

            while i >= gap and percentage[i - gap] > temp:
                percentage[i] = percentage[i - gap]
                i -= gap

            percentage[i] = temp

        gap //= 2

    return percentage

print("Shell sorted array:", shellsort(percentage))
