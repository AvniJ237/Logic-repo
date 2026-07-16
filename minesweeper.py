""" 
should not calculate at mines
number themselves will be used to count mines in mini 3x3 grid 
try to make board itself an input method
mines should not be revealed at the start
give user a flag option and make sure flag doesnt explod the mine
use ! for flaged """
import random
ground=[['-','A','B','C','D','E','F','G','H'],
        ['1','_','_','_','_','_','_','_','_'],
        ['2','_','_','_','_','_','_','_','_'],
        ['3','_','_','_','_','_','_','_','_'],
        ['4','_','_','_','_','_','_','_','_'],
        ['5','_','_','_','_','_','_','_','_'],
        ['6','_','_','_','_','_','_','_','_'],
        ['7','_','_','_','_','_','_','_','_'],
        ['8','_','_','_','_','_','_','_','_']
]
board=ground
for row in ground:
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

for row in ground:
    for cell in row:
        print(cell, end=" ")
    print()
#while all mines not flaged and no mines exploded and places still left to open
work=input("open or flag(O/F):")
cell=input("enter the cell number(For eg: Z9)")
