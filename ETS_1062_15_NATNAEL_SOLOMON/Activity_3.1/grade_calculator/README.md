## Problem Analysis
                                  
### Input 
The program takes the following input:
- **rusult**: The total result in percentage (out of 100).

### Process 
The program uses a do-while loop to repeatedly prompt the user for input and process the result until the user decides to leave the program.

It evaluates the result and assigns a grade based on the following criteria:
   - If the result is greater than or equal to 90, the grade is A+.
   - If the result is between 80 and 89, the grade is A.
   - If the result is between 75 and 79, the grade is B+.
   - If the result is between 60 and 74, the grade is B.
   - If the result is between 55 and 59, the grade is C+.
   - If the result is between 45 and 54, the grade is C.
   - If the result is between 30 and 45, the grade is D.
   - If the result is below 30, the grade is F.

After evaluating the result, the program prompts the user to enter 0 to leave or any other number to continue.

### Output 
The program outputs the following:
- The corresponding grade based on the input result.
- A prompt to leave the program or continue.

The program provides a simple and effective way to evaluate a grade based on the input result and allows the user to continue or leave based on their choice.

## Pseudocode
```
1.Start
    a.Declare status as Integer

    b.Do
        1.Declare result as Double
        2.Display "Enter your total result (100%): "
        3.Input result

        4.Display "____________________________\n\v"
        5.If result >= 90 Then
            Display "Your grade is : A+"
        6.Else If result >= 80 Then
            Display "Your grade is : A"
        7.Else If result >= 75 Then
            Display "Your grade is : B+"
        8.Else If result >= 60 Then
            Display "Your grade is : B"
        9.Else If result >= 55 Then
            Display "Your grade is : C+"
        10.Else If result >= 45 Then
            Display "Your grade is : C"
        11.Else If result >= 30 And result <= 45 Then
            Display "Your grade is : D"
        12.Else
            Display "Your grade is : F"
        13.End If
        14.Display "____________________________\n\v"

  c.Display "Enter 0 to leave or any other number to continue: "
  d.Input status
  e.While status

2. Return 0
3. End
```
