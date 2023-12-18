## Problem Analysis

### Input
The program takes the following inputs:
1. **num1**: The first number for the operation.
2. **operator1**: The operator to be used for the calculation (+, -, /, *).
3. **num2**: The second number for the operation.
4. **status**: A number to determine whether to continue or terminate the program.

### Process
1. The program uses a do-while loop to continuously prompt the user for input and perform calculations until the user decides to terminate the program.
2. It uses a switch statement to perform the appropriate arithmetic operation based on the provided operator.
3. If the operator is division (/) and the second number is 0, it outputs an error message for division by zero.
4. The program prompts the user to enter 0 to terminate the program or any other number to continue.

### Output 
The program outputs the following:
- The result of the arithmetic operation based on the input numbers and operator.
- Error messages for division by zero and invalid operators.
- A prompt to terminate the program or continue.

## Pseudocode

1. Start
    a. Declare operator1 as Character
    b. Declare num1, num2 as Double
    c. Declare status as Integer

2. Do
        a. Display "Enter the first number: "
        Input num1

        b. Display "Enter an operator: "
        Input operator1

        c. Display "Enter the second number: "
        Input num2

        d. Switch (operator1)
            1. Case '+':
                Display num1 + " + " + num2 + " = " + (num1 + num2)
                Break
            2. Case '-':
                Display num1 + " - " + num2 + " = " + (num1 - num2)
                Break
            3. Case '/':
                If num2 == 0
                    Display "Error! undefined."
                Else
                    Display num1 + " / " + num2 + " = " + (num1 / num2)
                End If
                Break
             4. Case '*':
                Display num1 + " * " + num2 + " = " + (num1 * num2)
                Break
             5. Default:
                Display "Error! invalid operator."
                Break
        e. End Switch

   3. Display "Enter 0 if you want to terminate the program or enter any other number to continue: "
   4. Input status

   5. While (status)

   6. Return 0
7. End

