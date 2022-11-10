#!/usr/bin/python3
"""
    This is a preparation for an interview
"""


def island_perimeter(grid):
    """This finds the perimeter of the island"""
    length = 0
    width = 0
    z_p = 0
    max = 0
    height = len(grid)
    width = len(grid[0])

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                max += 1
            if (j != 0 and grid[i][j - 1] == 1):
                z_p += 1
            if (i != 0 and grid[i-1][j] == 1):
                z_p += 1
    return max*4 - z_p*2
