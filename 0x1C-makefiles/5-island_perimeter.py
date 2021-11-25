#!/usr/bin/python3

""" Interview preparation question """


def island_perimeter(grid):
    """ returns the perimeter of an island """
    perimeter = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if grid[i][j] == 1:
                if j + 1 == len(grid[i]) or grid[i][j + 1] == 0:
                    perimeter += 1
                if j - 1 == -1 or grid[i][j - 1] == 0:
                    perimeter += 1
                if i - 1 == -1 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i + 1 == len(grid) or grid[i + 1][j] == 0:
                    perimeter += 1
    return perimeter
