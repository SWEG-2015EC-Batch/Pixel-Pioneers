## Problem Analysis

### Input 
The program takes the following inputs:
1. **weeklyhours**: The number of hours worked in a week.
2. **gross_salary**: The gross salary earned.
3. **overtimebonusrate_perhour**: The overtime bonus rate per hour, if applicable.

### Process 
1. The program calculates the overtime payment if the weekly hours worked exceed 40 hours.
2. It then calculates the income tax based on the gross salary using a series of conditional statements to determine the tax rate.
3. The program also calculates the pension deduction based on a fixed rate of 7% of the gross salary.
4. Finally, it computes the net pay by subtracting the pension, income tax, and adding the overtime payment from the gross salary.

### Output 
The program outputs the following:
- The pension deducted from the salary.
- The income tax deducted from the salary.
- The overtime payment, if applicable.
- The net take-home pay after deductions and overtime payment.

## Pseudocode

1.Start
```
a.Declare weeklyhours, gross_salary, overtimebonusrate_perhour as Double
    
b.Declare pensionrate, overtime_payment, income_tax as Double
    
c.Set pensionrate = 0.07
    
d.Set overtime_payment = 0.0
    
e.Set income_tax = 0.0

    1.Display "Enter weekly working hours: "
    Input weeklyhours

    2.Display "Enter gross salary: "
    Input gross_salary

    3.If weeklyhours > 40 Then
        Display "Enter over-time bonus rate: "
        Input overtimebonusrate_perhour
        Set overtime_payment = ((weeklyhours - 40) * overtimebonusrate_perhour)
    4.Else
        Set overtime_payment = 0
    5.End If

         1.If 3500 <= gross_salary Then
        Set income_tax = gross_salary * 0.30
         2.Else If 3500 > gross_salary And 2000 <= gross_salary Then
        Set income_tax = gross_salary * 0.25
         3.Else If 2000 > gross_salary And 1200 <= gross_salary Then
        Set income_tax = gross_salary * 0.20
         4.Else If 1200 > gross_salary And 600 <= gross_salary Then
        Set income_tax = gross_salary * 0.15
         5.Else If 600 > gross_salary And 200 <= gross_salary Then
        Set income_tax = gross_salary * 0.10
         6.Else
        Set income_tax = gross_salary * 0.00
         7.End If

        8.Set pension = pensionrate * gross_salary
  
        9.Set netpay = (gross_salary - pension - income_tax) + overtime_payment

    a.Display pension + " is the pension deducted from your salary."
    b.Display income_tax + " is the income tax deducted from your salary."
    c.Display overtime_payment + " is your over-time payment."
    d.Display netpay + " is your net take-home pay.\v"

  4.Return 0
  
5.End
```
## Flowchart
```mermaid

