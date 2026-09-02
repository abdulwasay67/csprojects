print("vowel counter")

user_input = input("ENTER A WORD: ").strip()

vowels ="aeiou"

def word(user_input):
    count = 0
    word = user_input[0]
    for word in user_input:
        if word in vowels:
            count = count + 1
    return count
result = word(user_input)
print(f"There are {result} vowels in your word")