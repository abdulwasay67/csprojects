a = input("ENTER FIRST TUPLE: ")
b = input("ENTER SECOND TUPLE: ")
c = input("ENTER THRID TUPLE: ")
d = input("ENTER FOURTH TUPLE: ")

category = [a, b, c, d]

def get_category(category, index):
    return category[index]
user_input = int(input("WHICH ONE DO U WANT TO SEE?: "))

result = get_category(category, user_input)
print(result)