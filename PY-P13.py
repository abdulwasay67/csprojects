import random
print("ROCK-PAPER-SCISSORS")


def choices_RPS():
    player = input("Enter a choice 'rock' 'paper' 'scissors': ").strip().lower()
    options = ['rock', 'paper', 'scissors']
    computer = random.choice(options)
    choices = {"player_choice": player, "computer_choice": computer}
    return choices

player_win = 0
draw = 0
computer_win = 0

def comparison(player_choice: str, computer_choice: str):
    global player_win, draw, computer_win

    if player_choice == computer_choice:
        draw += 1
        print("ITS A DRAW!")
    elif (player_choice == "rock" and computer_choice == "scissors") or \
         (player_choice == "paper" and computer_choice == "rock") or \
         (player_choice == "scissors" and computer_choice == "paper"):
        player_win += 1
        print("PLAYER WINS")
    else:
        computer_win += 1
        print("COMPUTER WON!")

    return {
        "player_choice": player_choice,
        "computer_choice": computer_choice,
        "player_win": player_win,
        "draw": draw,
        "computer_win": computer_win,
    }


choices = choices_RPS()
result = comparison(choices["player_choice"], choices["computer_choice"])
print(result)
  
