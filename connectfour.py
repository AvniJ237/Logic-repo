
#use conditional statement to check if 4 pieces are in a row, column, or two diagonal
#inable gravity to make the pieces fall down to the lowest available space in the column
board=[['-|','A','B','C','D','E','F','G','H','|-'],
        ['1|','_','_','_','_','_','_','_','_','|1'],
        ['2|','_','_','_','_','_','_','_','_','|2'],
        ['3|','_','_','_','_','_','_','_','_','|3'],
        ['4|','_','_','_','_','_','_','_','_','|4'],
        ['5|','_','_','_','_','_','_','_','_','|5'],
        ['6|','_','_','_','_','_','_','_','_','|6'],
        ['7|','_','_','_','_','_','_','_','_','|7'],
        ['8|','_','_','_','_','_','_','_','_','|8'],
        ['-|','A','B','C','D','E','F','G','H','|-']
]
cell=input("enter the cell number(For eg: Z9)").upper()
row=int(cell[1])
col=ord(cell[0])-64
