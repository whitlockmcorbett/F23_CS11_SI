# Instructions
**Objective:** Explore the differences between `if`, `if`, `if`... and `if`, `else if`, `else if`, `else if`, ... , `else` statements

## Background information 

  ![Graphics](https://i.imgur.com/T8ENf6I.png)

### Repeated if statements: Grocery list
- Think of a series of repeated `if` statements like a **grocery list**
- When you go to the store you look at the first item on your list. `if` it is in stock, you will buy it
- Then you go to the next item on your list, `if` they have that in stock, you will buy that as well
- For as many items as there are on your list, you will continue to check `if` they have the item, then if so you will buy it. Otherwise (else), if it is not in stock, you will move to the next item and check if they have it and repeat till the end of the list

### if, else if, else if, else if, ... ,else: Ordering dinner at a restaurant 
- Think of a series of `if`, `else if` `else if`, ... , `else` statements as **ordering from a restaurant** 
- You probably have a favorite food you are hoping on eating, you will first check `if` they have this. If they do you will order, otherwise onto the next choice
- Otherwise (`else`) `if` they do not have your first choice, you might have something else in mind. If you will ask if they have this, and if so will order, otherwise onto the next choice
- Otherwise (`else`) `if` they do not have your second choice, you might have another option in mind. If you will ask if they have this, and if so will order
- You may ask for a few other options but by this time you just want food. If all `else` fails, you ask what they actually have, then order that. This is your last resort

## Instructions
1. Use the provided random "grocery" booleans as conditionals for the `if` statements. Run the program and notice how it behaves. How many statement got executed?
    ```cpp
    // This is one of the random booleans, we will learn what 
    // it means later, ignore for now
    bool has_carrots = rand() % 2;
    ```
2. Use the provided random "dinner" booleans as conditionals for the `if` and `else if` statements. Run the program and notice how it behaves. How many statement got executed?
    ```cpp
    // This is one of the random booleans, we will learn what
    // the statements following it mean later. Ignore them for now
    bool has_pizza = false; 
    ```