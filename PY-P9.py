print("NEW STUFF")
person = {
    "name": input("ENTER YOUR NAME: "),
    "age": (input("ENTER YOUR AGE: ")),
    "city": input("ENTER YOUR CITY: "),
    "university": input("ENTER YOUR UNIVERSITY: "),
    "course" : input("ENTER YOUR COURSE: ")
}
user_input = input("DO U WANNA REMOVE SOMETHING?;'y','n': ").lower()

if user_input == "y":
    key = input("ENTER KEY: ")
    person[key] = input(f"ENTER NEW {key}: ")
    print(person)
elif user_input == "n":
    print(person)
else:
    print("CHOOSE EITHER Y OR N")