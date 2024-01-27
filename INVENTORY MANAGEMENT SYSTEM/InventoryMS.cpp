// Implements an inventory management system

#include <iomanip>

#include <iostream>

#define DAYS 30
#define width 18
using namespace std;

int main() {

        const int numOfwarehouses = 4; // constant for the number of warehouses
        const int numOfproducts = 5; // constant for the number of products

        int warehouse[numOfwarehouses][DAYS] = {
                0
        }, products[numOfproducts][DAYS] = {
                0
        }, table[numOfproducts][numOfwarehouses] = {
                0
        };

        char choice2;
        int quantity, warehousenum, producttype, choice, choice3;
        int numofDAYS = 0, total_product = 0, total_invtry = 0, finalsum = 0, counter = 0;
        float bonus[4];

        cout << "\v\v\v<==============================================================================>\n";
        cout << "           I N V E N T O R Y     M A N A G E M E N T     S Y S T E M             \n";
        cout << "<==============================================================================>\n\v";

        menu1:
                cout << "\v  \t\t\t----------------------------\n";
        cout << "\v \t\t\tA.....START \n\v";
        cout << " \t\t\tB.....ABOUT\n\v";
        cout << " \t\t\tC.....QUIT THE PROGRAM\n\v";
        cout << "  \t\t\t----------------------------\n\v";
        cout << "ENTER YOUR CHOICE: ";
        cin >> choice2;

        switch (toupper(choice2)) {

        case 'A':
                for (int i = 0; i < DAYS; i++) {

                        cout << "\n | DAY " << (i + 1) << " |" << endl << endl; // Prints the day

                        // Iterates 20 times since there are 20 possible products
                        for (int j = 0; j < 20; j++) {

                                // Input - the warehouse where the product was stored at
                                do {
                                        cout << "Please enter the warehouse number (1-" << numOfwarehouses << "): ";
                                        if (!(cin >> warehousenum)) {
                                                cout << "Invalid Input\n";
                                                return 1;
                                        }
                                } while ((warehousenum > numOfwarehouses) || (0 >= warehousenum));

                                // Input - the product stored
                                do {
                                        cout << "Please enter the product type received (1-" << numOfproducts << "): ";
                                        if (!(cin >> producttype)) {
                                                cout << "Invalid Input\n";
                                                return 1;
                                        }
                                } while ((producttype > numOfproducts) || (0 >= producttype));

                                // Input - the product amount
                                cout << "Please enter the quantity of the products recieved: ";
                                if (!(cin >> quantity)) {
                                        cout << "Invalid Input\n";
                                        return 1;
                                }
                                do {
                                        cout << "\n\vWarehouse " << warehousenum << " has received and stored " << quantity << " unit/s of product " << producttype << ", Press 1 to Confirm or 0 to Deny: ";
                                        if (!(cin >> choice)) {
                                                cout << "Invalid Input\n";
                                                return 1;
                                        }

                                        if (choice == 0) {
                                                j--;
                                                warehousenum = 0;
                                                producttype = 0;
                                                quantity = 0;
                                                cout << " \nSUCCESSFULLY ERASED!\n";
                                                continue;
                                        }
                                } while (choice < 0 || choice > 1);

                                cout << "_______________________________________________________________________\n\v";

                                //storing the quantity of the product on each iteration
                                warehouse[warehousenum - 1][i] += quantity;
                                products[producttype - 1][i] += quantity;
                                table[producttype - 1][warehousenum - 1] += quantity;

                                if ((j + 1) % 2 == 0 && (j + 1) != 0 && (j + 1) != 2) {

                                        cout << "Finished today's report? If so Press 1, if not 0: ";
                                        if (!(cin >> choice3)) {
                                                cout << "Invalid Input\n";
                                                return 1;
                                        }
                                        cout << "\n_______________________________________________________________________\n\v";
                                        if (choice3 == 1) {
                                                break;
                                        }

                                }

                        }
                        //counts the number of days passed
                        numofDAYS++;
                        do {
                                //If the user wants to check the report before a month
                                cout << "\vEnter " << (i + 2) << " to proceed to DAY " << (i + 2) << ", 0 to STARTOVER, or 1 to go to MENU-2: ";
                                if (!(cin >> choice)) {
                                        cout << "Invalid Input\n";
                                        return 1;
                                }

                                if (choice == 1) {
                                        goto menu2;
                                } else if (choice == 0) {
                                        goto menu1;
                                } else if (choice == (i + 2)) {
                                        cout << endl;
                                }
                        } while (choice < 0 || (choice > (i + 2)));
                }

                menu2:
                        cout << endl;

                cout << "\v\v===================> M E N U 2 <===================\n\v";
                if ((numofDAYS) == DAYS) {
                        cout << "\t1.....Tabular summary of a Month's Inventory.\n";
                } else { //updates the menu since It's not the monthly report
                        cout << "\t1.....Tabular summary of the Inventory.\n";
                }

                cout << "\t2.....Products (1-" << numOfproducts << ") record.\n";
                cout << "\t3.....Storekeepers (1-" << numOfwarehouses << ") record.\n";
                cout << "\t4.....About.\n";
                cout << "\t5.....Exit.\n\v";
                cout << "\t0.....MAIN MENU.\n";

                cout << "\v======================><========================\n\v";

                do {
                        cout << "Enter your choice here (0-5): ";
                        if (!(cin >> choice)) {
                                cout << "Invalid Input\n";
                                return 1;
                        }
                } while ((choice > 5) || (choice < 0));

                switch (choice) {
                case 1:
                        // Prints the table format of the inventory
                        cout << "\v-------------------------------------------------------------------------------------------------------------------------------"
                        "-\n";
                        cout << "\n                      T A B U L A R    S U M M A R Y    O F   T H E    T O T A L    I N V E N T O R Y   \n";
                        cout << "\v==============================================================================================================================="
                        "=\n";

                        //Setw makes the table relatively dynamic and rigid
                        //one can manipulate the width easily
                        cout << setw(33);
                        for (int i = 0; i < numOfwarehouses; i++) {
                                cout << "Storekeeper " << i + 1 << setw(width);
                                if (i == (numOfwarehouses - 1)) {
                                        cout << "Total sales";
                                }
                        }
                        cout << "\n_______________________________________________________________________________________________________________________________"
                        "_ \n";

                        for (int i = 0; i < numOfproducts; i++) {
                                // Prints the total inventory per product

                                cout << "\n\vProduct " << i + 1 << setw(width) << "";
                                for (int j = 0; j < numOfwarehouses; j++) {
                                        cout << table[i][j] << setw(width) << "";
                                        total_product += table[i][j];
                                }
                                cout << total_product << endl;
                                finalsum += total_product;
                                total_product = 0;
                        }

                        cout << "\n\vT. Inventory" << setw(width - 3) << "";

                        // Prints the total inventory per salesperson

                        for (int i = 0; i < numOfwarehouses; i++) {
                                for (int j = 0; j < numOfproducts; j++) {
                                        total_invtry += table[j][i];
                                }
                                cout << total_invtry << setw(width) << "";
                                bonus[i] = (float) 0.05 * total_invtry;
                                total_invtry = 0;
                        }
                        cout << finalsum;

                        cout << "\n_______________________________________________________________________________________________________________________________"
                        "_ \n\v";
                        cout << "\n\vBonus Payment" << setw(width - 6) << "";
                        // prints the bonus paymnet

                        for (int i = 0; i < numOfwarehouses; i++) {
                                cout << bonus[i] << setw(width - 1) << "";
                        }
                        cout << "\n_______________________________________________________________________________________________________________________________"
                        "_ \n";
                        cout << "\n-------------------------------------------------------------------------------------------------------------------------------"
                        "-\n";

                        do { //Prompts the user if they want to go back to menu or not
                                cout << "\n\vEnter 1 to go back to MENU-2 OR 0 to exit the program: ";
                                if (!(cin >> choice)) {
                                        cout << "Invalid input\n";
                                        return 1;
                                }
                                if (choice == 1) {
                                        goto menu2;
                                } else if (choice == 0) {
                                        cout << "\v\nHave a nice day!\n\v";
                                        goto exit;
                                }

                        } while ((choice > 1) || (choice < 0));

                        break;

                case 2:
                        do { //Prompts the user to choose the product type to check its record
                                cout << "\vEnter 1-5 to search each product type records OR 6 for the entire products record: ";
                                cin >> producttype;
                                cout << endl;

                        } while ((producttype > 6) || (0 > producttype));

                        // Prints the entire record
                        if (producttype == 6) {
                                cout << "Days\t\t\tQuantities per product (P)\n";
                                cout << "\t\t________________________________________\n";
                                cout << "\t\tP1\t|P2\t|P3\t|P4\t|P5\n";
                                for (int i = 0; i < DAYS; i++) {
                                        cout << "Day " << i + 1 << "\t\t|";
                                        for (int j = 0; j < numOfproducts; j++) {
                                                cout << products[j][i] << "\t|";
                                        }
                                        cout << endl;
                                }
                        }
                        // Prints a single record
                        else {
                                cout << "\v------------------------------\n\v";
                                cout << "Days\t|Quantity of product " << producttype << endl;
                                cout << "\v------------------------------\n\v";
                                for (int i = 0; i < DAYS; i++) {
                                        cout << "Day " << i + 1 << "\t|";
                                        cout << products[producttype - 1][i] << endl;
                                }
                                cout << "\v------------------------------\n\v";
                        }

                        do {
                                cout << "\vEnter 1 to go back to MENU-2 OR 0 to exit the program: ";
                                if (!(cin >> choice)) {
                                        cout << "Invalid Input\n";
                                        return 1;
                                }
                        } while ((choice < 0) || (choice > 1));

                        if (choice == 0) {
                                cout << "Have a nice day!\n";
                                goto exit;
                        } else if (choice == 1) {
                                goto menu2;
                        }

                        break;

                case 3:
                        do {
                                cout << "\vEnter 1-4 for single storekeeper record OR 5 for all storekeepers record: ";
                                cin >> warehousenum;

                        } while ((warehousenum > 5) || (0 > warehousenum));
                        // Print the entire record
                        if (warehousenum == 5) {
                                cout << "Days\t   Quantities per Warehouse\\Storekeeper\n";
                                cout << "___________________________________________\n";
                                cout << "\t\tS1\t|S2\t|S3\t|S4\n";
                                for (int i = 0; i < DAYS; i++) {
                                        cout << "Day " << i + 1 << "\t\t|";
                                        for (int j = 0; j < numOfwarehouses; j++) {
                                                cout << warehouse[j][i] << "\t|";
                                        }
                                        cout << endl;
                                }
                        }
                        // Print a single record
                        else {
                                cout << "\v==========================================\n";
                                cout << "Days\t|Records of storekeeper " << warehousenum << endl;
                                cout << "---------------------------------\n";
                                for (int i = 0; i < DAYS; i++) {
                                        cout << "Day " << i + 1 << "\t|";
                                        cout << warehouse[warehousenum - 1][i] << endl;
                                }
                        }
                        cout << "===========================================\n";
                        do {
                                cout << "\vEnter 1 to go back to MENU-2 OR 0 to exit the program:  ";
                                cin >> choice;
                        } while ((choice < 0) || (choice > 1));
                        if (choice == 0) {
                                cout << "Have a nice day!\n";
                                goto exit;
                        } else if (choice == 1) {
                                goto menu2;
                        }
                        break;
                case 4:

                        //displays the team who made the program
                        cout << "\v\vPixel Pioneers -- 2024 G.C\n\v\v";

                        do {
                                cout << "\n\vEnter 1 to go back to MENU-2 OR 0 to exit the program: ";
                                cin >> choice;
                        } while ((choice < 0) || (choice > 1));
                        if (choice == 0) {
                                cout << "Have a nice day!\n";
                                goto exit;
                        } else if (choice == 1) {
                                goto menu2;
                        }

                        break;
                case 5:
                        cout << "\vHave a nice day!\n\v";
                        return 0;
                        break;
                case 0:

                        do {
                                cout << "\n\vEnter 1 to verify or 0 to deny: ";
                                if (!(cin >> choice3)) {
                                        cout << "Invalid Input\n";
                                        return 1;
                                }
                        } while ((choice3 < 0) || (choice3 > 1));
                        if (choice3 == 0) {
                                goto menu2;
                        } else if (choice3 == 1) {
                                goto menu1;
                        }

                default:
                        cout << "Invalid choice, try again!\n";

                        return 0;
                }
                exit:
                        return 0;
                break;
        case 'B':
                cout << "\v\vPixel Pioneers -- 2024 G.C\n\v\v";

                do {
                        cout << "\n\vEnter 1 to go back to the MAIN MENU OR 0 to exit the program: ";
                        if (!(cin >> choice3)) {
                                cout << "Invalid Input\n";
                                return 1;
                        }
                } while ((choice3 < 0) || (choice3 > 1));
                if (choice3 == 0) {
                        cout << "\nHave a nice day!\n";
                        return 0;
                } else if (choice3 == 1) {
                        goto menu1;
                }

                break;
        case 'C':
                cout << " \v\nHave a nice day!\v";
                return 0;
                break;
        default:
                cout << "\nInvalid input, Try again!";

                break;
        }

        return 0;
}
