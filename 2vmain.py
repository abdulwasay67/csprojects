import pandas as pd
from tabulate import tabulate

def main():
    raw_data = { 
        "Employee ID": [101, 102, 103, 104, 105],
        "Name": ["Alice Jujube", "Muhammad Salah", "Chu-chu zedong", "Robert Oppenheimer", "Lateef latex"],
        "Department" : ["HR", "Engineering", "Tech", "Manufacturing", "Finance"],
        "Salary" : [67000, 100000, 125000, 55000, 125000]
 }
    df = pd.DataFrame(raw_data)
    print("---ORIGNAL DATA TABLE---")
    print(tabulate(df, headers='keys', tablefmt='grid', showindex=False))
    print("\n")

    df["Salary"] = df["Salary"] - 5000
    high_earners = df[(df)["Salary"] > 100000]s

    print("--- FILTERED DATA ---")
    print(tabulate(high_earners, headers='keys', tablefmt='grid', showindex=False))
    print("\n")

    avg_salary = df["Salary"].mean()
    total_spend = df["Salary"].sum()

    print("---SUMMARY---")
    print(f"Total Company payroll: ${total_spend:,}")
    print(f"Average Employee Salary: ${avg_salary:,.2f}")

if __name__ == "__main__":
    main()

