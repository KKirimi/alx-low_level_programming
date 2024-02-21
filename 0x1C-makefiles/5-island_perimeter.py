#!/usr/bin/python3
"""Defines an island perimeter measuring function"""


def island_perimeter(grid):
    """
    Return the perimeter of an island described in grid
    args: grid(list) - a list of lists of integers
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for k in range(height):
        for m in range(width):
            if grid[k][m] == 1:
                size += 1
                if (m > 0 and grid[k][m - 1] == 1):
                    edges += 1
                if (k > 0 and grid[k - 1][m] == 1):
                    edges += 1
    return size * 4 - edges * 2
