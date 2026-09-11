print("---KEYS2---")
key = {
    "university": "SSUET",
    "2university": "NED",
    "3university": "FAST-NUCES",
    "4university": "LUMS"
}
try: 
    del_key = input("ENTER WHICH KEY U WANNA DELETE?: ").lower()
    del key[del_key] 
    print(key)
except KeyError:
    print("NOT A KEY!")

id = {
    "name": "john doe",
    "age": 19,
    "height": 5.4,
    "blood type": 'A'
}
print(id.keys())
print(id.items())
print(id.values())
execute = list(id.keys())
print(execute)
for id, value in id.items():
    print(id, value)