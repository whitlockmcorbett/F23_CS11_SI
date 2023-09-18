# Instructions
**Objective:** Test if an integer falls in between two other integers.

## Background information 
If statements are great for a single "branch" of a control flow tree, but sometimes we want to deal with cases where each branch splits off into more branches.

In this program, you'll be trying to see if a target number (`target`) falls between two other numbers (`bound1` and `bound2`). The bounds are not given in any particular order, that is, `bound1` can be *either* less than (<), greater than (>), or equal to (=) `bound2`.

We are also considering that a target number equaling one of the bounds does not lie in that range. For example, we would say that 10 is not in between 1 and 10.
$$target \in (bound1, bound2) \text{ such that } bound1 < bound2$$


## Hints
1. Use a whiteboard to draw out the flow of the program. What decisions do we need to make to figure out if `target` lies in between the bounds?
2. How can we use if statements with comparison operators to determine if `bound1` is greater than, less than, or equal to `bound2`?
3. Once we know how `bound1` compares to `bound2`, how can we use comparison operators to determine if `target` lies between them?


## Test Cases
```
Test 1:
Enter the first bound: 100
Enter the second bound: 0
Enter the target integer: 50
50 falls between 100 and 0
```
```
Test 2:
Enter the first bound: 100
Enter the second bound: 0
Enter the target integer: 50
50 falls between 100 and 0
```
```
Test 3:
Enter the first bound: 0
Enter the second bound: 0
Enter the target integer: 0
0 does not fall between 0 and 0
```
```
Test 4:
Enter the first bound: 20
Enter the second bound: 40
Enter the target integer: -30
-30 does not fall between 20 and 40
```
```
Test 5:
Enter the first bound: -1000000
Enter the second bound: 1000000
Enter the target integer: 0
0 falls between -1000000 and 1000000
```