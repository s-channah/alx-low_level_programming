#!/usr/bin/python3
""" This module calculates the perimeter of an island on a grid """


def island_perimeter(grid):
    """
    grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally).
    Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, there is one island (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t
        connected to the water around the island).
    """
    if type(grid) is not list:
        return

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4

                """checking for land (index with value 1)above current cell"""
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                """checking for land (index with 1)below current cell"""
                if i < (rows - 1) and grid[i + 1][j] == 1:
                    perimeter -= 1
                """checking for land(index with 1) left side of current cell"""
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                """checking for land(index with 1)right side of current cell"""
                if j < (cols - 1) and grid[i][j + 1] == 1:
                    perimeter -= 1

    return (perimeter)
