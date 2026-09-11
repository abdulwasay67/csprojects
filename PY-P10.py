print("--KEYS---")
keys = {
    "first": "key",
    "second": "2ndkey"
}
key = input("ENTER WHICH KEY: ").lower()
print(keys.get(key, "key not found"))

secondkey = {
    "first": "one",
    "second": "two",
    "third": "three"
}
key2 = input("ENTER WHICH KEY: ").lower()
print(f"Result: {secondkey.get(key2, "NOT FOUND")}")

fruits = ["APPLE", "BANANA", "ORANGE", "DRAGONFRUIT", "APPLE", "APPLE", "BANANA"]
count = {}
for fruit in fruits:
    count[fruit] = (count.get(fruit, 0) + 1)
    result = count
    print(result)