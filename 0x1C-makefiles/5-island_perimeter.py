#!/usr/bin/python3
"""A MODULE THAT COMPUTES THE PERIMETER OF AN ISLAND"""


def island_perimeter(grid):
    """calculates the perimeter of the island
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
        Args:
            grid - a list is list of integers
    """
    width = len(grid[0])
    height = len(grid)
    size = 0
    edges = 0
    for i in range(height):
        for x in range(width):
            if grid[i][x] == 1:
                size += 1
                if (x > 0 and grid[i][x - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][x] == 1):
                    edges += 1
    perimeter = (4 * size) - (2 * edges)
    return perimeter
