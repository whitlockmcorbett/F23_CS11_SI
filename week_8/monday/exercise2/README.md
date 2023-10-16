# Instructions
**Objective:** Write a program that finds the greatest common devisor (GCD) of two integers

## Background information 
The greatest common divisor of two numbers is the largest number that divides evenly into both. The Euclidean Algorithm is a technique for finding the GCD of two numbers.

Euclid'a algorithm for GCD works on this relation:

$$GCD(m,n) = GCD(n, m % n)$$


## Steps
1. Ask the user to enter two positive integers
2. Output the greatest common divisor of both numbers


## Test Cases
```
Test 1
Enter a number a: 24
Enter a number b: 12
The GCD of 24 and 12 is 12
```

```
Test 2
Enter a number a: 770 
Enter a number b: 900
The GCD of 770 and 900 is 10
```

```
Test 3
Enter a number a: 288
Enter a number b: 160
The GCD of 288 and 160 is 32
```