""" 
should not calculate at mines
number themselves will be used to count mines in mini 3x3 grid 
try to make board itself an input method
mines should not be revealed at the start
give user a flag option and make sure flag doesnt explod the mine
use ! for flaged 
need to solve problem with number that display as refence also need to open a pact before hand"""
import random
ground=[['-','A','B','C','D','E','F','G','H','-'],
        ['1','_','_','_','_','_','_','_','_','1'],
        ['2','_','_','_','_','_','_','_','_','2'],
        ['3','_','_','_','_','_','_','_','_','3'],
        ['4','_','_','_','_','_','_','_','_','4'],
        ['5','_','_','_','_','_','_','_','_','5'],
        ['6','_','_','_','_','_','_','_','_','6'],
        ['7','_','_','_','_','_','_','_','_','7'],
        ['8','_','_','_','_','_','_','_','_','8'],
        ['-','A','B','C','D','E','F','G','H','-']
]
board=[['-','A','B','C','D','E','F','G','H','-'],
        ['1','_','_','_','_','_','_','_','_','1'],
        ['2','_','_','_','_','_','_','_','_','2'],
        ['3','_','_','_','_','_','_','_','_','3'],
        ['4','_','_','_','_','_','_','_','_','4'],
        ['5','_','_','_','_','_','_','_','_','5'],
        ['6','_','_','_','_','_','_','_','_','6'],
        ['7','_','_','_','_','_','_','_','_','7'],
        ['8','_','_','_','_','_','_','_','_','8'],
        ['-','A','B','C','D','E','F','G','H','-']
]
for row in board:
    for cell in row:
        print(cell, end=" ")
    print()
mines_placed=0
while mines_placed < 8:
    row = random.randint(1,8)
    col = random.randint(1,8)

    if ground[row][col]=='_':
        ground[row][col]='*'
        mines_placed += 1
#add numbers to the ground
#for row in ground:
# for cell in row: 
#while all mines not flaged and no mines exploded and places still left to open
for row in range(1,9):
    for col in range(1,9):
        if ground[row][col]=='_':
            count=0
            for i in range(-1,2):
                for j in range(-1,2):
                    if ground[row+i][col+j]=='*':
                        count+=1
            ground[row][col]=str(count)  
for row in ground:
    for cell in row:
        print(cell, end=" ")
    print()
while True:
    work=input("open or flag(O/F):").upper()
    cell=input("enter the cell number(For eg: Z9)").upper()
    row=int(cell[1])
    col=ord(cell[0])-64
    if work=="O":
        if ground[row][col]=='*':
            print("Game Over")
            break
        else:
            board[row][col]=ground[row][col]
            for row in board:
                for cell in row:
                    print(cell, end=" ")
                print()
    elif work=="F":
        board[row][col]='!'
        for row in board:
            for cell in row:
                print(cell, end=" ")
            print()
    else:
        print("Invalid input") 

