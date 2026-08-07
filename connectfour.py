#use conditional statement to check if 4 pieces are in a row, column, or two diagonal
#enable gravity to make the pieces fall down to the lowest available space in the column
#def check_winner(player):
board=[['-|','A','B','C','D','E','F','G','H','|-'],
        ['-|','_','_','_','_','_','_','_','_','|-'],
        ['-|','_','_','_','_','_','_','_','_','|-'],
        ['-|','_','_','_','_','_','_','_','_','|-'],
        ['-|','_','_','_','_','_','_','_','_','|-'],
        ['-|','_','_','_','_','_','_','_','_','|-'],
        ['-|','_','_','_','_','_','_','_','_','|-'],
        ['-|','_','_','_','_','_','_','_','_','|-'],
        ['-|','_','_','_','_','_','_','_','_','|-'],
        ['-|','A','B','C','D','E','F','G','H','|-']
]
for row in board:
    for cell in row:
        print(cell, end=" ")
    print()
while True:
    countx = 0
    counto = 0

    cell = input("Enter column (A-H): ").upper()
    col = ord(cell) - 64

    placed = False

    for r in range(9, 0, -1):
        if board[r][col] == '_':
            for line in board:
                for c in line:
                    if c == 'X':
                        countx += 1
                    elif c == 'O':
                        counto += 1

            if countx > counto:
                board[r][col] = 'O'
            else:
                board[r][col] = 'X'

            placed = True
            break
#practically checking if placed is false
    if not placed:
        print("Column is full. Please choose another column.")
        continue

    for line in board:
        for c in line:
            print(c, end=" ")
        print()