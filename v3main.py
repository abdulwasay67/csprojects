print("---NUMBERS---")
num1 = int(input("Enter 1st number: "))
num2 = int(input("Enter 2nd number: "))

#Operations

sum = num1 + num2
difference = num1 - num2
product = num1 * num2 
division = num1 / num2 

user_input = input("which do u want?, sum, difference, product or division: ").lower().strip()
if user_input == 'sum':
    print(f"the sum is {sum}")
elif user_input == 'difference':
    print(f"the difference is {difference}")
elif user_input == 'product':
    print(f"The product is {product}")
elif user_input == 'division':
    print(f"The divison is {division}")
