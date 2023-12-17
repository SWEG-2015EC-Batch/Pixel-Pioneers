#include <iostream>
using namespace std;

int main()
{
    int choice1, choice2, choice3, status;
    int startingpoint1 = 'a', startingpoint2 = 1;
    do
    {
        cout << "___________________________________________________________\v" << endl;
        cout << "*************** P A T T E R N   M E N U *******************" << endl;
        cout << "___________________________________________________________\v\v" << endl;

        cout << "1.  A S T E R I S K   P A T T E R N S\n\v"
             << "2.  N U M E R I C  A N D  A L P H A B E T I C  P A T T E R N S\n\v"
             << "3.  E X I T\n\v\v";

        cout << "Enter the number of your choice: ";
        cin >> choice1;

        if (choice1 == 1)
        {
            cout << "\vA S T E R I S K   P A T T E R N S\n";
            cout << "_________________________________\n\v";
            cout << "1. Rectangle\n"
                 << "2. Hollow rectangle\n"
                 << "3. Full pyramid\n"
                 << "4. Inverted full pyramid\n"
                 << "5. Half full pyramid\n"
                 << "6. Inverted half pyramid\n"
                 << "7. Hollow full pyramid\n"
                 << "8. Inverted hollow half pyramid\n\v";

            cout << "Enter the number of your choice: ";
            cin >> choice3;

            int row, column;
            cout << "\vEnter the number of rows : ";
            cin >> row;
            cout << endl;

            switch (choice3)
            {
            case 1:

                cout << "Enter the number of columns: ";
                cin >> column;
                cout << endl;

                for (int i = 0; i < row; i++)
                {
                    for (int i = 0; i < column; i++)
                    {
                        cout << "* ";
                    }
                    cout << endl;
                }
                cout << endl;
                break;

            case 2:

                cout << "Enter the number of columns (greater than 2): ";
                cin >> column;
                cout << endl;
                for (int i = 1; i <= row; i++)
                {
                    for (int j = 1; j <= column; j++)
                    {
                        if (i == 1 || i == row || j == 1 || j == column)
                        {
                            cout << " "
                                 << "* ";
                        }
                        else
                        {
                            cout << "   ";
                        }
                    }
                    cout << endl;
                }
                break;

            case 3:

                for (int i = 1; i <= row; i++)
                {
                    for (int j = i; j < row; j++)
                    {
                        cout << " ";
                    }

                    for (int k = 1; k <= (2 * i - 1); k++)
                    {
                        cout << "*";
                    }

                    cout << "\n";
                }
                break;

            case 4:

                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < 2 * row - 1; j++)
                    {
                        if (j >= i && j < 2 * row - i - 1)
                        {
                            cout << "* ";
                        }
                        else
                        {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;

            case 5:

                for (int i = 1; i <= row; i++)
                {
                    for (int j = 1; j <= i; j++)
                    {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;

            case 6:

                for (int i = row; i >= 1; i--)
                {
                    for (int j = i; j > 0; j--)
                    {
                        cout << "* ";
                    }
                    cout << endl;
                }
                break;

            case 7:

                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < 2 * row - 1; j++)
                    {
                        if (j == row - i - 1 || j == row + i - 1 || i == row - 1)
                        {
                            cout << " *";
                        }
                        else
                        {
                            cout << "  ";
                        }
                    }
                    cout << endl;
                }
                break;
            case 8:

                for (int i = 0; i < row; i++)
                {
                    for (int j = row; j > i; j--)
                    {
                        if (i == 0 || j == row || i == row - 1 || j == i + 1)
                        {
                            cout << "*";
                        }
                        else
                        {
                            cout << " ";
                        }
                        cout << " ";
                    }
                    cout << endl;
                }
                break;
            default:
                cout << "\vInvalid choice! Try again.\n\v";
                break;
            }
        }

        else if (choice1 == 2)
        {

            cout << "\vN U M E R I C  A N D  A L P H A B E T I C  P A T T E R N S\n";
            cout << "__________________________________________________________\n\v";
            cout << "1. Square (Numbers)\n"
                 << "2. Right angled triangle (Numbers)\n"
                 << "3. Square (Alphabets)\n"
                 << "4. Right angled triangle (Alphabets)\n"
                 << "5. Reversed right angled triangle (Numbers)\n"
                 << "6. Square (a-x) (SPECIAL) \n\v";

            cout << "Enter the number of your choice: ";
            cin >> choice2;

            int row;
            cout << "Enter the number of rows: ";
            cin >> row;
            cout << "\n";

            switch (choice2)
            {
            case 1:

                for (int i = 1; i <= row; i++)
                {
                    for (int j = 1; j <= row; j++)
                    {
                        cout << j << "  ";
                    }
                    cout << "\n";
                }
                break;

            case 2:

                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j <= i; j++)
                    {
                        cout << startingpoint2 << " ";
                        startingpoint2++;
                    }
                    startingpoint2 = 1;
                    cout << "\n";
                }
                break;

            case 3:

                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j < row; j++)
                    {
                        cout << (char)startingpoint1 << "  ";
                        startingpoint1++;
                    }
                    startingpoint1 = 'a';
                    cout << "\n";
                }
                break;

            case 4:

                for (int i = 0; i < row; i++)
                {
                    for (int j = 0; j <= i; j++)
                    {
                        cout << (char)startingpoint1 << " ";
                        startingpoint1++;
                    }
                    startingpoint1 = 'a';
                    cout << "\n";
                }
                break;

            case 5:

                for (int i = 1; i <= row; i++)
                {
                    for (int j = row; j >= 1; j--)
                    {
                        if (j <= i)
                        {
                            cout << j << " ";
                        }
                        else
                        {
                            cout << "  ";
                        }
                    }
                    cout << "\n";
                }
                break;

            case 6:

                cout << "The number of row you inputted has no use here since it's a fixed square (a-x)\n\v";

                for (int i = 0; i < 4; i++)
                {
                    for (int j = 0; j < 6; j++)
                    {
                        if (startingpoint1 <= 'x')
                        {
                            cout << (char)startingpoint1 << " ";
                            startingpoint1++;
                        }
                    }
                    cout << "\n";
                }
                cout << "\v";
                break;

            default:
                cout << "Invalid choice! Try again.\n\v";
                break;
            }
        }

        else if (choice1 == 3)
        {
            cout << "\vHave a nice day!\v" << endl;
            return 0;
        }

        cout << "Enter 0 to leave or enter any other (single) digit to go back to the main menu: ";
        cin >> status;
    } while (status);

    return 0;
}

