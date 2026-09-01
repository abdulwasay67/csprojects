print("----ATM----")

Balance = 1000

while True:
    user = input("WELCOME TO ATM PLEASE PRESS ONE OF THE FOLLOWING OPTIONS \n'1';CHECK BALANCE \n'2':WITHDARW \n'3';DEPOSIT \n'4';EXIT \nCHOOSE: ")
    if user == "1":
        print(f" Your balance is {Balance}")
    elif user == "2":
        userW = int(input("HOW MUCH WOULD YOU LIKE TO WITHDRAW:  "))
        if userW <= 0:
            print("ERROR")
        elif userW > 0: 
            if userW > Balance:
                print("INSUFFICINET FUNDS!")
            else:
                Balance = Balance - userW
                print(f"Your balance is {Balance}")
    elif user == "3":
        userD = int(input("HOW MUCH WOULD YOU LIKE TO DEPOSIT?:  "))
        if userD > 0:
         Balance = Balance + userD
         print(f"Your balance is {Balance}")
        elif userD == 0:
            print("ERROR")
        elif userD < 0:
            print("ERROR")
        
    elif user == "4":
        print("THANK YOU FOR USING OUR SERVICE!")
        break 
    else:
        print("PLEASE CHOOSE FROM ABOVE OPTIONS ONLY")
