
answer = input("What is the answer to the Great Question Of Life, The Universe and Everything? ")
answer = answer.strip()
answer = answer.upper()
if (answer == '42'):
    print("Yes")
elif(answer == 'FORTY-TWO'):
    print("Yes")
elif(answer == 'FORTY TWO'):
    print("Yes")
else:
    print("No")
