#Name:Jose Cruz
#Date:04/03/2024
#Description:


#Import any libraries needed here
import math
import time
import string



#Return: 1 string with three foods separated by a space
#Parameters: 1 string for name
#Purpose: To prompt user for 3 favorite food items and store in a single variable
def FavFoods(firstname , lastname):
    #Declare and initialize a string variable foods to store 3 fav foods
    Foods = ""
    #Prompt use for 3 favorite foods separated by a space

    
    Foods=input(f"Hi {firstname} {lastname} please enter your 3 favorite foods by a space:").strip().lower()

        
    #ex: Hi name, please enter your 3 favorite foods separated by a space (like this: pizza salad brownies)   
    #return foods

    return Foods

#Return: 1 string with 3 numbers separated by commas
#Parameters: 1 string for name
#Purpose: To prompt user for 3 favorite numbers and store in a single variable
def FavNums(fistname , lastname):
    #Declare and initialize a string variable numbers to store 3 fav numbers
    FaveNums=""
    #Prompt use for 3 favorite numbers separated by a comma
    FaveNums= input(f"Hi  {fistname} {lastname}, please enter your 3 favorite numbers separated by a comma:").split()
    #ex: Hi name, please enter your 3 favorite numbers separated by a comma (like this: 5,8,7)
    #Return the numbers variable
    return FaveNums

def main():
    #Declare and intialize string variables fullname, firstname, lastname, foods, newFood, newNum, play again and nums
    fullname=firstname=lastname="" 
    foods=nums=newNum=newFood=""
    play_again=""
    

    #Create an empty list to store favorite foods
    favorite_foods=[]
    #Create an empty list to store favorite numbers
    favorite_numbers=[]
    
    #Display intro
    print("Welcome to my program!!")
    #Prompt user for full name and store (remove extra spaces and make first and last name cap before storing)
    fullname=input("Enter your fullname: \n").title().strip(" ")

    #Split up the name into 2 variables firstname and lastname

    firstname=fullname.split()
    lastname= fullname.split()

    #Loop the game below as long as the player wants to play
    
    #Display "Let's get started.." then pause for 1.5 seconds
    print("Let's get started...")
    time.sleep(1.5)
    
    #Call the FavFoods function and store returned value locally in foods variable
    foods=FavFoods(firstname , lastname)
    
    #Pause for 1 second
    
    time.sleep(1)
    
    #Separate the foods into your foods list
    favorite_foods=[].sort(foods)
    

    #Display each food from the list with all capital letters sorted in ascending order
    for i in favorite_foods:
        [x.upper() for x in favorite_foods[i]]
        print(favorite_foods[i])
        

    #Pause for 1 second
    time.sleep(1)
    #Call the FavNums function and store returned value locally in nums variable
    nums = FavNums(firstname , lastname)
    
    #Separate the numbers into your numbers list stored as a float

    #Display "Let's have some fun with our data and methods.."
    print("Let's have some fun with our data and methods...")
    
    #Pause for 2 seconds
    time.sleep(2)
    
    #Use join to combine the food list with the nums list and display them all separated by commas (make output friendly)
          
    
    #Use methods to do the below fun things and display output to user:
    
    #Use swapcase in a display (any way you want)
    
    #Use find or rfind in a display (any way you want)
    
    #Use len to display number of items in foods list vs num characters in the foods string)
    
    #Prompt user for another food and use isalpha to confirm they typed only letters or ask them to try again
    
    #Show user a funny output by replacing the letter a in whatever they entered with an u
    
    #Prompt the user for another number and use isdigit to confirm the entered a number or ask again
    
    #Show user the square root of the number they entered
    
    #Display the largest number from the list of numbers
    
    #Display the smallest number from the list of numbers





