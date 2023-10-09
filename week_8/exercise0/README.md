# Instructions
**Objective:** Write a program that determines if a word is a palindrome 

## Background information 
The word palindrome derives from greek and means "running back". The definition of a palindrome is something that reads the same forwards and backwards. This can be a word, sentence, or number. `civic` is a palindrome, if you reverse the order of the letters, the word is the same. `noon` is another example


Note that in this program we will be looking at single words, not sentences or numbers

## Steps
1. Prompt the user for a word
2. Determine if it is a palindrome
3. Output `true` if the word is a palindrome, and `false` otherwise

## Test Cases
```
Test 1
Enter a word: hello
false
```

```
Test 2
Enter a word: civic
true
```

```
Test 3
Enter a word: noon
true
```

```
Test 4
Enter a word: racecas
false
```

## Challenge
Traditionally, when looking at palindromes, we will ignore spaces, capitalization, and punctuation. This means we could check if sentences are palindromes. For example, `Taco cat!` is a palindrome if you remove the spaces, capitalization, and punctuation. Doing this would result in `tacocat` which is a palindrome. Modify the program so that it works for cases like this. To make things simpler, assume valid inputs will only contain letters, spaces, and punctuation

```
Test 1
Enter a word: hello world
false
```

```
Test 2
Enter a word: Taco cat!
true
```