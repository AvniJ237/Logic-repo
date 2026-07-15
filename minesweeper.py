""" 
should not calculate at mines
replace _ with alphabet so that user can enter the input
number themselves will be used to count mines in mini 3x3 grid 
try to make board itself an input method
mines should not be revealed at the start
give user a flag option and make sure flag doesnt explod the mine """
import random
ground=[['_','_','_','_','_','_','_','_'],
        ['_','_','_','_','_','_','_','_'],
        ['_','_','_','_','_','_','_','_'],
        ['_','_','_','_','_','_','_','_'],
        ['_','_','_','_','_','_','_','_'],
        ['_','_','_','_','_','_','_','_'],
        ['_','_','_','_','_','_','_','_'],
        ['_','_','_','_','_','_','_','_']
        ]
for row in ground:
    for cell in row:
        print(cell, end=" ")
    print()
mines_placed=0
while mines_placed < 8:
    row = random.randint(0, 7)
    col = random.randint(0, 7)

    if ground[row][col]=='_':
        ground[row][col]='*'
        mines_placed += 1
for row in ground:
    for cell in row:
        print(cell, end=" ")
    print()