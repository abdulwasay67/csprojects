import sys
import time

sentences = [
    ("By the way, the party is December 18", 0.08),
    ("Alright, let's waltz this out, kid", 0.07),
    ("Cause when you know, you know", 0.07),
    ("And when you're old, you're old", 0.08),
    ("Like Hollywood and me", 0.07),
    ("That diamond on your ring", 0.06),
    ("The soul that you bring to the table", 0.08),
    ("The one that makes me sing", 0.08),
    ("singgggggg", 0.1),
    ("aint am i lucky", 0.08)
]

pause_between_sentences = 0.3  

for sentence, typing_speed in sentences:
    for char in sentence:
        sys.stdout.write(char)
        sys.stdout.flush()
        time.sleep(typing_speed)
    
    
    time.sleep(pause_between_sentences)
    print()  

print()