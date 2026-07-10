'''create a random 4 digits in a specific order and ask the user to guess it. used '''
import random
digits = [0,1,2,3,4,5,6,7,8,9]
random.shuffle(digits)
secret = digits[:4]
while True:
    guess = [int(d) for d in input("Enter your 4-digit guess: ")]
    if len(guess) == 4:
        if guess == secret:
            print("Congratulations! You guessed the number.")
            break
        else:
            for i in range(4):
                for j in range(4):
                    if guess[i] == secret[j] and i == j:
                        print("Correct number in correct position:", guess[i])
                    elif guess[i] == secret[j] and i != j:
                        print("Correct number in wrong position:", guess[i])
    else:
        print("Invalid input. Please enter exactly 4 digits between 0 and 9.")


