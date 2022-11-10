#!/usr/bin/python3
"""
    This is a preparation for an interview 
"""

def island_perimeter(grid):
    length = 0
    width = 0
    z_p = 0
    max = 0

    for i in grid:
        if 1 in i:
            length += 1
        for num in i:
            if num == 1:
                max += 1
        if max > width:
            width = max
        if max < width:
            z_p = 1
        max = 0

    if z_p == 1:
        length += 1
    
    
    return (length * width)
    