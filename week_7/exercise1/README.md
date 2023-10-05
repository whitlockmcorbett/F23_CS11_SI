# Instructions
**Objective:** 

## Background information 
Imagine a sports league. In this sports league, to qualify for the playoffs you must earn a certain number of points during the season. A team is awarded 3 points for winning a game, 1 point for tieing a game, and 0 points for losing a game. 

Write a program which when given a score (A:B, where home team scored A and away team scored B), will calculate how many playoff points home/A team won. Afterwards, print out the total number of goals they scored during the season.

**Note**: all games will have scores in single digits

## Steps
1. From the console, read in an arbitrary number of strings showing the scores. Ex: 4:6
2. Compute the number of playoff points Team A scored.
3. Compute the number of total goals Team A scored.
4. Output the previous two numbers

## Test Cases
```
Test 1
8:0
5:5
1:6
6:4
6:2
Playoff points: 10
Total goals: 26
```
```
Test 2
0:0
7:3
5:0
6:3
6:4
Playoff points: 13
Total goals: 24
```
```
Test 3
7:1
7:9
9:9
8:2
6:5
Playoff points: 10
Total goals: 37
```

```
Test 4
9:8
9:4
2:4
1:0
5:7
Playoff points: 9
Total goals: 26
```

## Challenge
Rewrite program to work with inputs of arbitrary digits