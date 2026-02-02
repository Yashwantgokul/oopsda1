# Question 5 - Text Modification Program in C

## Problem Statement

Write a program to:

- Read a text string
- Delete all the semicolons ( ; )
- Replace all full stops ( . ) with commas ( , )

---

## Approach

- The input string is read using fgets()
- The length of the string is calculated using strlen()
- A function processes each character:
  - Semicolons are skipped
  - Periods are replaced with commas
  - Other characters are copied as they are
- The output string is properly terminated with '\0'

---

## Program File

solution.c

---

## Sample Input

Hello; this is a test. Remove; semicolons.

---

## Sample Output

Hello this is a test, Remove semicolons,

---

## How to Compile and Run

gcc solution.c -o solution  
./solution  

---

## Concepts Used

- Strings and character arrays  
- Functions  
- Conditional statements  
- fgets() and strlen()  

---

## Author

Yashwant Gokul P
