# Array Insertion

A simple C program that inserts an element into an array at a position chosen
by the user, shifting the other elements over to make room.

## What it does

- Asks for the array size and reads the elements
- Asks for the value to insert and the position (1-based)
- Shifts the elements to the right and places the new value
- Prints the array after insertion

The array size comes from your input at runtime (using a variable-length
array), with one extra slot for the inserted element.

## Example

```
Array insertion
###############
Enter the array size: 4
Enter the elements of the Array
Element 1:10
Element 2:20
Element 3:30
Element 4:40
10 20 30 40
Enter the element to be inserted
99
Enter the location of element
2
Array after insertion:
10 99 20 30 40
```

## Notes

- Positions are 1-based (1 = first element).
- Invalid sizes or positions are rejected and asked again.
- Everything is in a single file.

## Author

Beshoy
