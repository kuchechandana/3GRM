
import random

def Roll_dice():
    return random.randint(1,6)
    
def setup_game():
    players=5
    while True:
        try:
            print("How many players are in the game?")
            players = int(input())
            if players > 4 or players < 2:
                print("Must be less than 5 and greater than 1")
            else:
                break
        except ValueError:
            print("Must be a number")

    global names
    names= {}
    for i in range(1,players+1):
        while True:
            global name
            name = input("What is the name of Player {}? ".format(i))
            if not name in names:
                names[name] = 0
                break
            else:
                print('Cannot have duplicate names')
    return names

def move_player(player, current_pos):
    snake_squares = {16: 4, 33: 20, 48: 24, 62: 56, 78: 69, 94: 16}
    ladder_squares = {3: 12, 7: 23, 20: 56, 47: 53, 60: 72, 80: 94}
    
    global throw
    throw=Roll_dice()
    if throw==6:
       throw=throw+Roll_dice()
    
    next_pos = current_pos + throw
    print("{0} rolled a {1} and is now on {2}".format(player, throw, next_pos))

    if next_pos in snake_squares:
        print("Player got bitten by a snake and is now on square {}".format(snake_squares[next_pos]))
        next_pos = snake_squares[next_pos]
    elif next_pos in ladder_squares:
        print("Player climbed a ladder and is now on square {}".format(ladder_squares[next_pos]))
        next_pos = ladder_squares[next_pos]
    return next_pos

def game(players):
    print("{}, Welcome To Snakes And Ladders".format(" ".join(players)))
    input("Press Enter")
    c=1
    while True:
        global player
        # Foreach player
        for player, current_pos in players.items():
            

            # Move player
            players[player] = move_player(player, current_pos)

            # Check win
            
            while players[player] >=100 and c==1 :
                if players[player]==100:
                   
                   return players[player]
                   
                else:
                    players[player]=players[player]-throw
                    current_pos=players[player]
                    
                break      
                
if __name__ == "__main__":
    players = setup_game()
    throw=Roll_dice()
    while throw==6:
          throw=Roll_dice()
          break  
    
    winner = game(players)
    print("Player {} won the game".format(winner))
    names.pop(player)  
    
    winner2=game(players)
    
    print("Player {} won2 the game2".format(winner2))
    names.pop(player)
    losser=game(players)
    print("Player {} loss the game3".format(losser))
    


