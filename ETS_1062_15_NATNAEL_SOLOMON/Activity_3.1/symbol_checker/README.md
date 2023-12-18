## Problem Analysis
  Input: A character to identify its identity
  Process: Identify if the character is an odd or even number, consonant or vowel, uppercase or lowercase alphabet, or a special case
  Output: Return the identity

## Pseudocode
```
1.Start
    a.Declare status as Integer
    b.Declare character as Character

    c.Do
        1.Display "Enter a single character: "
        2.Input character

        3.If isalpha(character) Then
            a.If isupper(character) Then
                Display character + " is an uppercase letter.\n\v"
            b.Else
                Display character + " is a lowercase letter.\n\v"
            c.End If

            d.Switch toupper(character)
                1.Case 'A', 'E', 'I', 'O', 'U':
                    Display character + " is a vowel letter.\n\v"
                2.Default:
                    Display character + " is a consonant letter.\n\v"
            e.End Switch
        4.Else If isdigit(character) Then
            a.Declare theActual_int as Integer
            b.Set theActual_int = character - 48
            c.If theActual_int % 2 == 0 Then
                Display character + " is an even number.\n\v"
            d.Else
                Display character + " is an odd number.\n\v"
            e.End If
        5.Else
            Display character + " is a special character.\n\v"
        End If

        6.Display "Enter 0 to exit or any other number to continue: "
        7.Input status
    d.While status

2.Return 0
3.End

```
## Flowchart
```mermaid
graph TB
  start(start) --> InputChar[/Receive the character x/]
  InputChar --> IsAlpha{"isalpha(x)"}
  IsAlpha -- True --> IsUpper{"isupper(x)"}
  IsUpper -- True --> IsVowel{"It is vowel"}
  IsVowel -- True --> UpperVowel[/Vowel, Uppercase, letter/]
  IsVowel -- False --> UpperConsonant[/Consonant, Uppercase, letter/]
  IsUpper -- False --> IsVowelLower{"It is vowel"}
  IsVowelLower -- True --> LowerVowel[/Vowel, Lowercase, letter/]
  IsVowelLower -- False --> LowerConsonant[/Consonant, Lowercase, letter/]
  IsAlpha -- False --> IsNum{"isdigit(x)"}
  IsNum -- True --> IsEven{"x % 2 == 0"}
  IsEven -- True --> EvenNum[/Even Number/]
  IsEven -- False --> OddNum[/Odd NUmber/]
  IsNum -- False --> Special[/Special Character/]
  UpperVowel --> End(End)
  UpperConsonant --> End
  LowerVowel --> End
  LowerConsonant --> End
  EvenNum --> End
  OddNum --> End
  Special --> End
