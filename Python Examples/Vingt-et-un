
# Bently Metayer

# Prompts user for there name displays options to play or see vingt-et-un rules or quit

#     Input: Player's name
# Process:
#   1. Display menu options.
#   2. Based on user's choice:
#     a. Display rules.
#     b. Play Vingt-et-un.
#     c. Quit.
#   3. If playing:
#     a. Implement rounds of the game.
#     b. Allow player and house turns.
#     c. Check for busts, ties, and determine the winner.
# Output:
#   - Display rules.
#   - Display game results.
#   - Display goodbye message on quitting.

import random

# Display Rules

def display_rules():
    print("\nVingt-et-un Rules:")
    print("1. The game is played with a standard deck of 52 cards.")
    print("2. The cards are dealt out in a round of 26 cards.")
    print("3. The player's goal is to get a hand value of 2.")
    print("4. The house's goal is to get a hand value of 1.")
    print("5. The player's turn consists of drawing one card and placing it on the table.")
    print("6. The house's turn consists of drawing one card and placing it onthe table.")
    print("7. If the player's hand value is 2, they win the game.")
    print("8. If the house's hand value is 1, they win the game.")
    print("9. If neither player wins, the game continues until one player reaches a hand value of 2 or 1.")
    print("10. The player with the higher hand value wins the game.")


# use random lib to generate dice selection 
def roll_dice(num_dice):
    return random.randint(1, 6) * num_dice

# prompt user decision
def player_turn(total):
    roll = input("Roll the dice? (y/n): ").lower()
    if roll == 'y':
        num_dice = 2 if total < 14 else 1
        return total + roll_dice(num_dice)
    elif roll == 'n':
        return total
    else:
        print("Invalid input. Please enter 'y' or 'n'.")
        return player_turn(total)

# generate house turn
def house_turn(total):
    if total < 17:
        house_roll = roll_dice(2)
        print(f"House rolls: {house_roll}")
        return total + house_roll
    else:
        print("House stays.")
        return total

# keeps score of rounds
def play_round(player_name):
    player_total = 0
    house_total = 0

    while True:
        print(f"\n{player_name}'s turn:")
        player_total = player_turn(player_total)
        print(f"{player_name}'s total: {player_total}")

        if player_total > 21:
            print(f"{player_name} busts! House wins.")
            return "House"

        print("\nHouse's turn:")
        house_total = house_turn(house_total)
        print(f"House's total: {house_total}")

        if house_total > 21:
            print("House busts! Player wins.")
            return player_name

        if player_total == house_total and player_total >= 17:
            print("It's a tie!")
            return "Tie"

        if player_total >= 17 and house_total >= 17:
            if player_total > house_total:
                print(f"{player_name} wins!")
                return player_name
            elif player_total < house_total:
                print("House wins.")
                return "House"
            else:
                print("It's a tie!")
                return "Tie"

# main displays result and prompts for name and choices
def main():
    print("Welcome to Vingt-et-un!")
    player_name = input("Enter your name: ")

    while True:
        print("\nMenu:")
        print("1. See the Rules.")
        print("2. Play Vingt-et-un.")
        print("3. Quit.")

        choice = input("Enter your choice (1-3): ")

        if choice == '1':
            display_rules()
        elif choice == '2':
            result = play_round(player_name)
            print(f"\n{result} wins this round!")
        elif choice == '3':
            print(f"Goodbye, {player_name}!")
            break
        else:
            print("Invalid input. Please enter a number between 1 and 3.")

if __name__ == "__main__":
    main()
