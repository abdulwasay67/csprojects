print("Today we have a Madlib generator")

noun1 = input(" Enter a noun ")
verb1 = input(" Enter a verb ")
adjective1 = input(" Enter a adjective ")
place1 = input(" Enter a place ")

story1 = (f" The {adjective1} {noun1} {verb1} to the {place1}")
story2 = (f" The {adjective1} {noun1} is {verb1} at the {place1}")
story3 = (f" {noun1} is {verb1} {adjective1} at {place1}")
choice = input(f"Which story do you want? (1 ,2 or 3)")
if choice == "1":
    print(story1)
elif choice == "2":
    print(story2)
else:
    print(story3)



