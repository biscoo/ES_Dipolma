# Power Calculator

A simple C program that raises a number to a given power using recursion.

## What it does

- Asks the user for a base number
- Asks for an exponent (must be positive; negative values are rejected)
- Computes base raised to that power recursively
- Prints the result

## Example

```
Please enter a number:
2
Please enter a power(positive):
3
The Number 2 to the power 3 is: 8
```

## Notes

- Uses recursion: power(n, m) = n * power(n, m - 1), with power(n, 0) = 1.
- Any number to the power 0 gives 1.
- Negative exponents are rejected and re-prompted.
- Results are stored in an int, so large bases/exponents can overflow.
- Everything is in a single file.

## Author

Beshoy
