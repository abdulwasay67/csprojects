print("SHOPPING LIST")

item1 = input("ENTER ITEM: ").lower().strip()
item2 = input("ENTER ITEM: ").lower().strip()
item3 = input("ENTER ITEM: ").lower().strip()
item4 = input("ENTER ITEM: ").lower().strip()
item5 = input("ENTER ITEM: ").lower().strip()

shopping = [item1, item2, item3, item4, item5]

print(shopping)
print(len(shopping))
print("THIS IS HOW YOUR CURRENT LIST LOOKS LIKE")

user = input("DO YOU WANT TO ADD MORE ITEMS? (UPTO 3) CHOOSE: '3' '2' '1' 'no': ").lower().strip()

if user == "3":
    item6 = input("ENTER ITEM: ").lower().strip()
    item7 = input("ENTER ITEM: ").lower().strip()
    item8 = input("ENTER ITEM: ").lower().strip()
    shopping.extend([item6, item7, item8])
elif user == "2":
    item6 = input("ENTER ITEM: ").lower().strip()
    item7 = input("ENTER ITEM: ").lower().strip()
    shopping.extend([item6, item7])
elif user == "1":
    item6 = input("ENTER ITEM: ").lower().strip()
    shopping.append(item6)
elif user == "no":
    pass
else:
    print("INVALID CHOICE")

print(shopping)
print(len(shopping))

user2 = input("DO YOU WANT TO REMOVE ANYTHING?; 'yes' 'no': ").strip().lower()

if user2 == "no":
    user3 = input("Do you want to see your list?: 'y' 'n': ").strip().lower()
    if user3 == "y":
        print(shopping)
        print(len(shopping))
elif user2 == "yes":
    remove_count = int(input("HOW MANY?; '1', '2', '3': "))

    if remove_count == 1:
        index = int(input("ENTER INDEX TO REMOVE: "))
        if 0 <= index < len(shopping):
            shopping.pop(index)
        else:
            print("INVALID INDEX")
    elif remove_count == 2:
        for _ in range(2):
            index = int(input("ENTER INDEX TO REMOVE: "))
            if 0 <= index < len(shopping):
                shopping.pop(index)
            else:
                print("INVALID INDEX")
    elif remove_count == 3:
        for _ in range(3):
            index = int(input("ENTER INDEX TO REMOVE: "))
            if 0 <= index < len(shopping):
                shopping.pop(index)
            else:
                print("INVALID INDEX")
    else:
        print("INVALID CHOICE")

    user3 = input("Do you want to see your list?: 'y' 'n': ").strip().lower()
    if user3 == "y":
        shopping.sort()
        print(shopping)
        print(len(shopping))


