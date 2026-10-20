# EX2: Add Two Distances (inch-feet) Using Structures

## Description
A structure `SDistance` holds `feet` and `inch`. Two distances are read from the user and added. Every 12 inches are converted into 1 foot, so the result is always normalized.

## Concepts
- Structure as a function return type (`Read_Distance`)
- Unit normalization (inch → feet)

## Sample Output
```
Enter information for 1st distance
Enter feet: 12
Enter inch: 3.45

Enter information for 2nd distance
Enter feet: 12
Enter inch: 9.2

Sum of distances=25'-0.6"
```

## Note
12'3.45" + 12'9.2" = 24'12.65" → **25'0.65"**. The `-` is just the feet-inch separator, not a negative sign.
