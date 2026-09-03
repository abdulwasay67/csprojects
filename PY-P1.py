print("python exercise")

questions = [
    "What is the value of pi (up to 3 decimals)?",
    "What is another name for the moon?",
    "Who discovered the theory of relativity?",
    "The father of modern computer science is?",
    "AES stands for?",
]
answers = [
    "3.14",
    "luna",
    "albert einstein",
    "alan turing",
    "advanced encryption standard",
]

user_input = input("WHAT DO U WANNA DO? ('quiz', 'see result', 'quit'): ").strip().lower()

if user_input == "quiz":
    score = 0
    for question, answer in zip(questions, answers):
        print(question)
        user_answer = input("ANSWER: ").strip().lower()
        if user_answer == answer:
            score += 1
            print("Correct!")
        else:
            print(f"Incorrect. The answer is {answer}.")
    print(f"Your score is {score}/{len(questions)}.")
elif user_input == "see result":
    print("No quiz result is available yet.")
elif user_input == "quit":
    print("Goodbye!")
else:
    print("Invalid option.")