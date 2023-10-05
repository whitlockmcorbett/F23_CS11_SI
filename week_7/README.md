# Computational Thinking
**Objective**: Be more aware about the problem solving method one might adopt, and utilize strategies to more easily solve algorithmic problems.
## What is computational thinking?
Computational thinking, as the name suggests, is essentially the process of thinking like a computer. Often times, we find it very easy to describe tasks we want to complete. For example, if you were to give me directions to your house, you would probably just tell me which streets to turn on. This is sufficient because humans are able to work with abstract steps.

Computers, however, cannot work that abstractly. Consider the same problem: how would you tell a computer to drive a car to your house? You could use the same instructions you gave me, but the computer would be confused: What is a left turn? Where are the streets? How do I go forward?

The issues mentioned above are that of *ambiguity*. Essentially, the steps you described were far too vague for the computer to operate with. When we design algorithms, we want to be as precise as possible, leaving no room for ambiguity.

## Steps to Designing an Algorithm
#### 1. Understand the Problem.
When you are presented with a problem, you should first work to *fully* understand the problem.
1. Thoroughly read any description's of the problem you have.
2. Trace out some examples by hand.
3. Think about special cases.
#### 2. Decide On Data Types
Think about the information in the problem which will vary from instance to instance. Decide on appropriate types to represent these variables. For example, the number of cows a farmer has can be an `int` and the speed of a car can be a `double`.
1. What information can vary from instance to instance?
2. Is that information numerical? If so how big? Do they have decimal components?
#### 3. Break down the problem into smaller parts
If you're given a big of challenging task, it can be daunting to start writing code. This is fine, and in fact you should always wait to start writing code until you have a clear idea of how you want to solve a problem.

The best way to tackle a large problem is to make it into multiple smaller steps. For example, it may sound difficult to write a program that searches your computer for a file, but it is far less daunting when you think about each of the steps: 

- Grab the names of the files from your desktop
- Check if a File has the name we want
- Print the contents of files with Matching names

Each of those smaller steps can then be broken up into even smaller steps, until you know what code you should start writing.

#### 4. Create a Flow Chart
Now that you've broken the problem into smaller steps, you can begin to formalize the logic a bit more. Create a flow chart showing any `if` statements, `else`, or other selection control statements that affect the flow of the program.

After drawing out the flow chart, ask yourself the following questions:

1. Will this logic work? Will tracing out test values through this provide good output?
2. Are there any obvious boundary* cases? If so how can you fix them?
3. Is anything in my program redundant? Can I achieve the same result with a smaller flow chart?

#### 5. Begin Writing Code
At this point, you should have a fairly clear idea of what your code should be doing, just make sure you use good practices. 

If your code isn't working, it is likely because you rushed one of the previous steps. Go through and make sure you understand the problem, you're keeping track of ALL relevant data properly, that you've broken down all the steps into sufficiently small pieces, and that your logic/flow is solid.