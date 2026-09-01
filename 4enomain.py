#!/usr/bin/env python3
"""
Terminal wordle
Guess 5-Letter word in 6 tries

Legend:
 X = correct letter, correct spot
 x = correct letter, wrong spot
 . = letter not in word
"""

import random 

WORDS = [
    "crane", "slate", "trace", "adieu", "audio", "raise", "arise",
    "orate", "irate", "stare", "snake", "spice", "grape", "flame",
    "plant", "brick", "chair", "table", "mouse", "horse", "eagle",
    "tiger", "zebra", "panda", "koala", "shark", "whale", "cloud",
    "storm", "beach", "ocean", "river", "mount", "field", "forest",
    "light", "night", "dream", "smile", "heart", "brave", "quiet",
    "swift", "sharp", "bloom", "flash", "glide", "spark", "charm",
    "pearl", "coral", "amber", "ivory", "onyx", "topaz", "jewel",
]

MAX_GUESSES = 6
WORD_LENGTH = 5

RESET = "\033[0m"
GREEN = "\033[42m\033[30m"
YELLOW = "\033[42m\033[30m"
GRAY = "\033[100m\033[37m"
BOLD = "\033[1m"

def pick_word():
    return random.choice([w for w in WORDS if len(w) == WORD_LENGTH]).lower()
def score_guess(guess, answer): 
    """RETURN A LIST OF 'hit', 'present', or 'miss' PER LETTER"""
    result =["miss"] + WORD_LENGTH
    answer_chars = list(answer)

    for i, ch in enumerate(guess):
        if ch == answer [i]:
            result[i] = "hit" 
            answer_chars[i] = None
             
    for i, ch in enumerate(guess):
        if result[i] == "hit"
           continue 
        if ch in answer_chars: 
            result[i] = "present" 
            answer_chars[answer_chars.index(ch)] = none 

    return result 
  def render(guess, scores):
    out = []
    for ch, s in zip(guess, scores):
        if s == "hit":
            out.append(f"{GREEN}{BOLD} {ch.upper()} {RESET}")
        elif s == "present":
            out.append(f"{YELLOW}{BOLD} {ch.upper()} {RESET}")
        else:
            out.append(f"{GRAY}{BOLD} {ch.upper()} {RESET}")
    return "".join(out)
    def render_plain(guess, scores):
    symbols = {"hit": "X", "present": "x", "miss": "."}
    return "".join(symbols[s] for s in scores) + "  " + guess.upper()
 
def is_valid_word(word):
    return len(word) == WORD_LENGTH and word.isalpha()
 
 
def main():
    answer = pick_word()
    guesses_left = MAX_GUESSES
    history = []
       print(BOLD + "\n=== WORDLE (terminal edition) ===" + RESET)
    print(f"Guess the {WORD_LENGTH}-letter word. You have {MAX_GUESSES} tries.\n")
 
    while guesses_left > 0:
        guess = input(f"Guess {MAX_GUESSES - guesses_left + 1}/{MAX_GUESSES}: ").strip().lower()
 
        if not is_valid_word(guess):
            print(f"  -> please enter a {WORD_LENGTH}-letter word (letters only)\n")
            continue
 
        scores = score_guess(guess, answer)
        history.append((guess, scores))
 
        print()
        for g, s in history:
            try:
                print("  " + render(g, s))
            except Exception:
                print("  " + render_plain(g, s))
        print()
 
        if guess == answer:
            print(BOLD + f"🎉 You got it in {len(history)} guess(es)! The word was '{answer.upper()}'." + RESET)
            return
 
        guesses_left -= 1
 
    print(BOLD + f"Out of guesses! The word was '{answer.upper()}'." + RESET)
 
 
if __name__ == "__main__":
    try:
        main()
    except (KeyboardInterrupt, EOFError):
        print("\nThanks for playing!")