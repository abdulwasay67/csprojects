print("Largest numbers")

number = int
a = int(input("Enter value for a: "))
b = int(input("Enter value for b: "))
c = int(input("Enter value for c: "))
d = int(input("Enter value for d: "))
e = int(input("Enter value for e: "))

def find_largest(number):
    largest = number[0]
    for numbers in number:
     if numbers > largest:
        largest = numbers
    return largest
number = [a,b,c,d,e]
result = find_largest(number)
print(f"The largest number is {result}")