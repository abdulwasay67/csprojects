
print ("Welcome to the password generator!")
import random 
lowercase = "abcdefghijklmnopqrstuvwxyz"
uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
symbols = "!@#$%^&*()_+-=[]{}|;:',.<>?/"
numbers = "0123456789"
letterandsymbols = "abcdefghijklmnopqrstuvwxyABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()_+-=[]{}|;:',.<>?/"
user_input = input("What tyype of password do you want? (lowercase, uppercase, symbols, numbers, letter and symbols or all):")
user_input2 = input("What length of password do you want? (Enter a number):")
if user_input == "lowercase":
    pool = lowercase
elif user_input == "uppercase":
    pool = uppercase
elif user_input == "symbols":
    pool = symbols
elif user_input = "numbers":
    pool = numbers
elif user_input == "letter and symbols":
    pool = letterandsymbols
elif user_input == "all":
    pool = lowercase + uppercase + symbols + numbers

length = int(user_input2)
password = ''.join(random.choice(pool) for i in range(length)) 
print ("Your generated password is: " + password) 