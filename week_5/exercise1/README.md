# Instructions
**Objective:** Write a phone number formatter.

## Background information 
We typically write out phone numbers with special formatting, for example: (123) 456-7890, however it takes time to have to do that special formatting. However, we're programmers and programmers refuse to do any task that could be automated. Instead, write a program that takes in a unformatted phone number [1234567890] and prints a formatted phone number [(123) 456-7890]

## Hints
1. Use a whiteboard to draw out the flow of the program. What are the possible calculations we want to do based on the variables provided. Which variables "tell us" which calculation we want to do?
2. How can we use a comparison operator on one of our variables to figure out which calculation we should compute?


## Test Cases
```
Test 1:
Enter the first number: 35
Which operation? (* / + -): +
Enter the second number: 35
Result is: 70
```
```
Test 2:
Enter the first number: 89
Which operation? (* / + -): -
Enter the second number: 27
Result is: 62
```
```
Test 3:
Enter the first number: 3.14159
Which operation? (* / + -): *
Enter the second number: 1.41421
Result is: 4.44287
```
```
Test 4:
Enter the first number: 24
Which operation? (* / + -): /
Enter the second number: 7
Result is: 3.42857
```