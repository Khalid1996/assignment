x=21
era=True
#player_1=input("player_1 >> Enter your name: ")
#player_2=input("player_2 >> Enter your name: ")
while era:
    print("player_1 >> you can chose: 1 or 2 or 3")
    player_1=int(input("Enter your choise: "))
    if player_1==1 or player_1==2 or player_1==3:
        x=x-player_1
        print(" ")
        print(x)
        print(" ")
    else:
        print("your choise is out of the range")
        print("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-")
        break
    if x==0:
        print("player_1: you lost")
        break    
    if x<=1:
        print("player_1: you won the game")
        break
    print("player_2 >> you can chose: 1 or 2 or 3")
    player_2=int(input("player_2 >> Enter your choise: "))
    if player_2==1 or player_2==2 or player_2==3:
        x=x-player_2
        print(" ")
        print(x)
        print(" ")
    else:
        print("your choise is out of the range")
        print("_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-")
        break
    if x==0:
        print("player_2: you lost")
        break
    if x<=1:
        print("player_2: you won the game")
        break
    
