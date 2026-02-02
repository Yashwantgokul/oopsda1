# Question 4 - Copy Last n Characters and Convert to Uppercase in C

## Problem Statement

Write a program to copy the last n characters of a character array into another array.
While copying, convert all lowercase letters into uppercase letters.

---

## Approach

- The length of the string is found using strlen()
- The program starts copying from the last n characters
- Each character is checked:
  - If it is lowercase, it is converted to uppercase
  - Otherwise copied as it is
- The result string is properly terminated with '\0'

---

## Program File

solution.c

---

## Sample Input

Enter the string: programming  
Enter n: 4  

---

## Sample Output

Result: MING  

---

## How to Compile and Run

gcc solution.c -o solution  
./solution  

---

## Concepts Used

- Character arrays  
- Strings and strlen()  
- Functions  
- ASCII value manipulation  
- Conditional statements  

---

## Author

Yashwant Gokul P
