# Instructions
**Objective:** Write a program to find the roots of a quadratic equation

## Background information 
A quadratic is a polynomial raised to the power of 2 in the form ax2+bx+cax^2 + bx + c where xx is the variable and aa, bb, and cc are constant coefficients. When graphed on a coordinate plane, a quadratic equation results in a parabola, aka a "U shape". 

![Graph of a quadratic](https://i.imgur.com/PDrwGZU.png)
The points at which the graph intersects the x-axis are called roots or zeros of the quadratic.

![Quadratic with x intercepts](https://i.imgur.com/f38Ph7l.png)
The roots are found by setting the given equation equal to zero and solving using the quadratic formula.
x=−b±√b2−4ac2ax = \frac{-b \pm \sqrt{b^2-4ac}}{2a}
A quadratic may have 0, 1, or 2 roots depending on the nature of the equation.


## Steps
1. Write a program which takes inputs for the coefficients of a quadratic: `a`, `b`, and `c`
2. Using those inputs, use the quadratic formula to calculate the roots of the equation. Hint use:
    ```cpp
    #include <cmath>
    ```
3. Output your calculations to 3 decimal places


## Test Cases
```
Test 1:
Enter a value for a: 0.6
Enter a value for b: -9
Enter a value for c: 7

x = 14.177 or 0.823
```
```
Test 2:
Enter a value for a: 2
Enter a value for b: 9
Enter a value for c: 7

x = -1.000 or -3.500
```
```
Test 3:
Enter a value for a: 8
Enter a value for b: 0
Enter a value for c: 0

x = 0.000 or -0.000
```
```
Test 4:
Enter a value for a: 1
Enter a value for b: 2
Enter a value for c: 9

x = nan or nan
```
