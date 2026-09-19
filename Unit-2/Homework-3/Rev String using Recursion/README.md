# String Reverse

A simple C program that reads a sentence and prints it reversed, using a
recursive function.

## What it does

- Reads a line of text from the user
- Reverses it character by character into a second array
- Prints the original and the reversed string

The reversal is done recursively: each call copies one character from the end
of the input to the front of the output, passing the source and destination
positions along as parameters (no global state).

## Example

```
Please enter a sentence:
hello world
The entered string is: hello world
The reverse of entered sentence is: dlrow olleh
```

## Notes

- The input can contain spaces (a full sentence).
- Reversal uses two indices carried as parameters: one counting down from the
  end of the input, one counting up from the start of the output.
- Everything is in a single file.

## Author

Beshoy
