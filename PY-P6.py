print("New projext")

numbers = [1,34,719,6834,96325]
def largest_number():
    largest = numbers[0]
    for num in numbers:
        if num > largest:
            largest = num
    return largest
result = largest_number()
print(result)