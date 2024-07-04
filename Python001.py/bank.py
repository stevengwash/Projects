balance = 0


def main():
    print("Balance:", balance)
    deposit(100)
    widthraw(20)
    print("balance:",balance)


def deposit(n):
    global balance
    balance =+ n

def widthraw(n):
    global balance
    balance -= n

if __name__=="__main__":
    main()