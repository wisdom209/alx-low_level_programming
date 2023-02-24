#!/usr/bin/python3
"""Calculate the island perimeter"""

def island_perimeter(grid):
    """function that calculates perimeter"""
    width=0
    height=0
    width_len = 0
    water_start = 1
    temp_width = 0

    #get the width
    height_boxes = len(grid)
    
    if height_boxes == 0:
        return 0

    for i in grid:
        width_len = len(i)
        temp_flag = 0;
        temp_start = 0;

        if width_len == 0:
            break;

        for x in range(len(i)):
            if i[x] == 1:
                temp_flag = 1;
                temp_start = x;

        if temp_flag == 1:
            temp_width = 0
            for x in i[temp_start:]:
                if x == 0:
                    break;
                temp_width += 1
                print('temp_width', temp_width)

        if temp_width >= width:
            width = temp_width

        temp_flag = 0

    return width

if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [1, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
