# Instructions
**Objective:** Write a program that validates user input

## Background information 
Validating user input is a common task in programming. We will want to ask a user for input, and continue asking them for input until their input is what we want to accept. We can use a `while` loop to do this.

When you log into a website, it asks you to enter your a user name and password as the graphic shows below. While this is much more complicated in real programs (hashing is used for security purposes), it is still a form a user input validation. We will code a simple version of this.
![Login graphic](https://i.imgur.com/HGk2MxD.png)


## Steps
1. Predetermine a username and a password using `const`
2. Ask the user to enter their username and password
3. Continue asking them to enter their information until both the username **and** password match the predetermined username and a password

## Test Cases
```
Test values
EMAIL = "stlheure@cabrillo.edu";
PASSWORD = "password123";
```

```
Test 1
Email: hello@gmail.com
Password: verysecurepassword
Incorrect email or password

Email: hello@gmail.com
Password: password123
Incorrect email or password

Email: stlheure@cabrillo.edu
Password: password123
Logged in successfully, welcome stlheure@cabrillo.edu
```

```
Test 2
Email: stlheure@cabrillo.edu
Password: password123
Logged in successfully. Welcome stlheure@cabrillo.edu
```

## Challenge
Oftentimes, websites have a limit on the number of times you can enter your information in incorrectly. Have the program quit after 5 incorrect entries
```
Test 1
Email: hello@gmail.me
Password: h@<k3rm@n123 
Incorrect email or password

Email: SI@gmail.net  
Password: Theres10typesOfPeoplewhoUnderStandBinary
Incorrect email or password

Email: liam123@email.com       
Password: computergenius-mike_2023       
Incorrect email or password

Email: steph@gmail.org 
Password: imtired999
Incorrect email or password

Email: another_email@yahoo.gov 
Password: p@$$w0rD
You exceeded the max incorrect login amount. Try again later.
```
---
```
Test 2 values
EMAIL = "stlheure@cabrillo.edu";
PASSWORD = "password123";
```
```
Test 2
Email: stlheure@cabrillo.edu
Password: password123
Logged in successfully. Welcome stlheure@cabrillo.edu
```

## Challenge challenge
Add a hashing algorithm. We do not know how to do this so good luck have fun