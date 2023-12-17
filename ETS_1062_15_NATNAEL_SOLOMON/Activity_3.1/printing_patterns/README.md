## Problem Analysis

### Input
The program takes user input to select the type of pattern to be displayed.
Additional inputs for the number of rows and columns are required based on the selected pattern type.

### Output
The program displays various patterns based on the user's choice, such as asterisk patterns, numeric patterns, and alphabetic patterns.
The patterns are displayed in the console based on the user's input and the selected pattern type.

### Process
The program uses a do-while loop to continuously display the main menu and prompt the user for input until the user chooses to exit.
Based on the user's choice, the program uses switch-case statements to execute the corresponding pattern generation code.
The program uses nested loops to generate the patterns based on the user's input for the number of rows and columns.

## Pseudocode

1, Declare variables choice1, choice2, choice3, status, startingpoint1, startingpoint2 as integers
Set startingpoint1 to 'a' and startingpoint2 to 1

2, Start a do-while loop
    Display the pattern menu options
    ask the user to enter the number of their choice
    store the input into choice1

    a, If choice1 is 1
        Display the options for asterisk patterns
        ask the user to enter the number of their choice
        Read the input into choice3
        ask the user to enter the number of rows
        Read the input into row

       - Based on choice3, execute the corresponding pattern code using switch-case
          
    b, Else if choice1 is 2
        Display the options for numeric and alphabetic patterns
        ask the user to enter the number of their choice
        store the input into choice2
        ask the user to enter the number of rows
        store the input into row

       - Based on choice2, execute the corresponding pattern code using switch-case
           
    c, Else if choice1 is 3
        exit the program

    d, Else
        Display an error message for an invalid choice
        
7,  Prompt the user to enter 0 to leave or any other single digit to go back to the main menu
    Read the input into status
    
8, End the do-while loop

9, End the main function

## Flowchart
``` mermaid
graph TD
A((Start)) -->|Choice 1| B{Choice 1}
B -->|1| C[Rectangle]
B -->|2| D[Hollow Rectangle]
B -->|3| E[Full Pyramid]
B -->|4| F[Inverted Full Pyramid]
B -->|5| G[Half Full Pyramid]
B -->|6| H[Inverted Half Pyramid]
B -->|7| I[Hollow Full Pyramid]
B -->|8| J[Inverted Hollow Half Pyramid]
C -->K((End))
D -->K
E -->K
F -->K
G -->K
H -->K
I -->K
J -->K
K((End)) -->|Status| L{Status}
L -->|0| A
L -->|Any other digit| B
B -->|Choice 2| M{Choice 2}
M -->|1| N[Square (Numbers)]
M -->|2| O[Right Angled Triangle (Numbers)]
M -->|3| P[Square (Alphabets)]
M -->|4| Q[Right Angled Triangle (Alphabets)]
M -->|5| R[Reversed Right Angled Triangle (Numbers)]
M -->|6| S[Square (a-x) (SPECIAL)]
N -->T((End))
O -->T
P -->T
Q -->T
R -->T
S -->T
T((End)) -->|Status| U{Status}
U -->|0| A
U -->|Any other digit| B
B -->|Choice 3| V{Choice 3}
V -->|1| W[Have a nice day!]
V -->|2| A
W -->X((End))
X -->Y{Status}
Y -->|0| Z((End))
Y -->|Any other digit| B


