print("HELLO WORLD!")
print("TO-DO LIST MANAGER")

def main():
    todo_list = []

    print("Welcome to python to-do list manager")

    while True:
        print("\nOptions")
        print("1. View tasks")
        print("2. Add tasks")
        print("3. Delete tasks")
        print("4. Exit")

        choice = input("Enter your choice (1-4): ").strip()

        if choice == "1":
            if not todo_list:
                print("\nYour to-do list is empty!")
            else:
                print("\nYour current tasks:")
                for index, task in enumerate(todo_list, start=1):
                    print(f"{index}. {task}")

        elif choice == "2":
            new_task = input("\nEnter the task description: ").strip()
            if new_task:
                todo_list.append(new_task)
                print(f"Added: {new_task}")
            else:
                print("Task description can not be empty!")

        elif choice == "3":
            if not todo_list:
                print("There are no tasks to delete")
            else:
                print("\nYour current tasks:")
                for index, task in enumerate(todo_list, start=1):
                    print(f"{index}. {task}")
                
                try:
                    # Convert input to integer and adjust for 0-based indexing
                    task_num = int(input("\nEnter the number of the task to delete: "))
                    if 1 <= task_num <= len(todo_list):
                        removed_task = todo_list.pop(task_num - 1)
                        print(f"Successfully deleted: '{removed_task}'")
                    else:
                        print("Invalid number. Please choose a number from the list.")
                except ValueError:
                    print("Error: Please enter a valid number.")

        elif choice == "4":
            print("\nGOODBYE HAVE A GREAT DAY")
            break

        else:
            print("Invalid option. Choose between 1-4")


if __name__ == "__main__":
    main()