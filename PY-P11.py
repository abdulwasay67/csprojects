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