print("CONTACT BOOK")
contacts = {}
user = int(input("HOW MANY CONTACTS DO U WANT TO ADD?: "))
for i in range(user):
    print(f"--contact {i+1}--")
    key = input("ENTER CONTACT NAME: ").lower().strip()
    value = int(input("ENTER NUMBER: "))
print(contacts.items())
try: 
    del_contacts = input("WHICH CONTACT DO U WANT TO DELETE?: ").lower()
    del contacts[del_contacts]
    print(contacts)
except KeyError:
    print("NOT A CONTACT!")
ask_user = input("SEARCH A CONTACT: ").lower()
search = contacts.get(contacts, "contact not found")
print(search)
