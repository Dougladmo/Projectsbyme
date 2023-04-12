def main():
    greet = input("Hello!\n").upper().strip()
    if ( greet == 'HELLO'):
        print("$0")
    elif ((greet[0] + greet[1] + greet[2] + greet[3] + greet[4]) == 'HELLO'):
        print("$0")
    elif ( greet[0] == 'H'):
        print("$20")
    else:
        print("$100")
main()



