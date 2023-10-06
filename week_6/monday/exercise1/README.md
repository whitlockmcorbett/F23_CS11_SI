# Instructions
**Objective:** Write a program that takes input for a DNA string and computes the GC content. Adapted from [Rosalind.info](https://rosalind.info/problems/gc/)

## Background information 
DNA is comprised of building blocks called nucleotides: adenine(A), thymine(T), guanine(G), and cytosine(C). The nucleotides pair together to create a strand of DNA. It is useful to know the GC (guanine cytosine) content for a string of DNA. The GC content is defined as "...the percentage of nitrogenous bases (GC) in a DNA"

## Steps
1. From the console, take input for a DNA string with no spaces
2. Compute the total number of valid nucleotides (how many of the characters were A, C, G, or T)
3. Compute the number of characters which were G and C
4. Output the GC content which is defied as the percent of valid nucleotides which are guanine or cytosine

## Test Cases
```
Test 1
GCTGACGTTAGGATGAAAGTGGGCA
Percentage of Gs and Cs: 52
```

```
Test 2
TTATTCGCTGGGTCGGAGAATAGGACAACC
Percentage of Gs and Cs: 50
```

```
Test 3
CACcTgAgTtGTAgTTgTAACCTGgGgAAAaTC
Percentage of Gs and Cs: 33
```

```
Test 4
IYTC@#YDV!P@E&DG!*E@DG!P12eidg1i23E(D*G)*#EGDB*!#H_D(&!G#)D$E*&@
Percentage of Gs and Cs: 86
```

## Challenge
Use input redirection to read one line of DNA from a file
```
Challenge test 1: challenge_test_1.txt
Percentage of Gs and Cs: 52
```

```
Challenge test 2: challenge_test_2.txt
Percentage of Gs and Cs: 49
```

```
Challenge test 3: challenge_test_3.txt
Percentage of Gs and Cs: 50
```

```
Challenge test 4: challenge_test_4.txt
Percentage of Gs and Cs: 68
```

## Challenge challenge
Use input redirection to read **any** number of lines of DNA from a file
```
Challenge test 1: challenge_challenge_test_1.txt
Percentage of Gs and Cs: 52
```

```
Challenge test 2: challenge_challenge_test_2.txt
Percentage of Gs and Cs: 50
```

```
Challenge test 3: challenge_challenge_test_3.txt
Percentage of Gs and Cs: 50
```

```
Challenge test 4: challenge_challenge_test_4.txt
Percentage of Gs and Cs: 67
```