import random 
print("---NUMBER GAME---")

difficulty = ""
number = 0
guess = 0
n = 0
x = 0
difficulty = input("CHOOSE A MODE OF DIFFICULTY 'easy' 'medium' 'hard': ")
n = int(n)
if difficulty == "easy":
    n = 10
elif difficulty == "medium":
    n = 50
elif difficulty == "hard":
    n = 100
else:
    print("INVALID ANSWER! CHOOSE FROM THE GIVEN OPTIONS ABOVE\n")

while True:
    
    number = int(random.randint(0,n))
    x = x + 1
    guess = int(input("GUESS THE NUMBER: "))
    if guess == number:
        print("CONGRATS! U GUESSED IT!")
        print(f"YOU GUESSED IT IN {x} TRIES! \n")
        break
    elif guess > number:
        print("TOO HIGH!")
        continue
    else:
        print("TOO LOW")
        continue
                




    