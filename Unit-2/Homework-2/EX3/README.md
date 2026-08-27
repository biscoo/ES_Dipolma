# Matrix Transpose Calculator

A simple C program that reads a matrix of any size from the user and prints
its transpose.

## What it does

- Asks for the matrix dimensions (rows and columns)
- Reads all the elements
- Prints the original matrix
- Prints the transpose (rows and columns swapped)

The matrix size comes from your input at runtime (using a variable-length
array), and the values are stored as `float`, so decimals work too.

## Example

```
Matrix Transpose Calculator
###########################
Enter the Matrix dimensions: 2 3
Enter the elements of the Matrix
Element a11: 1
Element a12: 2
Element a13: 3
Element a21: 4
Element a22: 5
Element a23: 6
The Entered Matrix is:
1.000   2.000   3.000
4.000   5.000   6.000
The Transpose Matrix is:
1.000   4.000
2.000   5.000
3.000   6.000
```

## Notes

- Dimensions are entered first as: rows columns
- The program rejects sizes that are 0 or negative and asks again.
- Everything is in a single file.

## Author

Beshoy
