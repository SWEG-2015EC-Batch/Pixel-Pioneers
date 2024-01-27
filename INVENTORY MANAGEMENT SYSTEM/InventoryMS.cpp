// Implements an inventory management system

#include <iomanip>

#include <iostream>

#define DAYS 30
#define width 18
using namespace std;
int main() {

        int warehouse[4][DAYS] = {
                0
        }, products[5][DAYS] = {
                0
        }, table[5][4] = {
                0
        };
        int quantity, warehousenum, producttype, choice;
        int numofDAYS = 0, total_product = 0, total_invtry = 0, finalsum = 0;
        float bonus[4];

        cout << "\v\v\v<==============================================================================>\n";
        cout << "           I N V E N T O R Y     M A N A G E M E N T     S Y S T E M             \n";
        cout << "<==============================================================================>\n\v";

        cout << " \t\t\t\tW E L C O M E !\n\v";

        for (int i = 0; i < DAYS; i++) {
                cout << "\n | DAY " << (i + 1) << " |" << endl << endl;

                // Iterates five times since there are 5 possible products
                for (int j = 0; j < 5; j++) {

                        // Input - the warehouse where the product was stored at
                        do {
                                cout << "Please enter the warehouse number (1-4): ";
                                if (!(cin >> warehousenum)) {
                                        cout << "Invalid Input\n";
                                        return 1;
                                }

                        } while ((warehousenum > 4) || (0 >= warehousenum));


                        // Input - the product stored
                        do {
                                cout << "Please enter the product type received (1-5): ";
                                if (!(cin >> producttype)) {
                                        cout << "Invalid Input\n";
                                        return 1;
                                }
                        } while ((producttype > 5) || (0 >= producttype));
                        
                         // Input - the product amount
                        cout << "Please enter the quantity of the products recieved: ";
                        if (!(cin >> quantity)) {
                                cout << "Invalid Input\n";
                                return 1;
                        }

                        cout << "_______________________________________________________________________\n\v";
                        
                        //storing the quantity of the product on each iteration
                        warehouse[warehousenum - 1][i] = quantity;
                        products[producttype - 1][i] += quantity;
                        table[producttype - 1][warehousenum - 1] += quantity;
                }
                //counts the number of days passed
                numofDAYS++;

                //If the user wants to check the report before a month
                cout << "\vPress " << (i + 2) << " to proceed to DAY " << (i + 2) << " or any other digit to go to the main menu: ";
                cin >> choice;

                if ((choice) != (i + 2)) {
                        goto mainmenu;
                }
        }

        mainmenu:
                cout << "\v\v===================> M E N U <===================\n\v";
        if ((numofDAYS) == DAYS) {
                cout << "\t1.....Tabular summary of the month.\n";
        } else { //updates the menu since It's not the monthly report
                cout << "\t1.....Tabular summary of " << numofDAYS << " Day/s Inventory.\n";
        }

        cout << "\t2.....Products (1-5) record.\n";
        cout << "\t3.....Storekeepers (1-4) record.\n";
        cout << "\t4.....About.\n";
        cout << "\t5.....Exit.\n";
        cout << "\v======================><========================\n\v";

        do {
                cout << "Enter your choice here (1-5): ";
                cin >> choice;
        } while ((choice > 5) || (choice < 0));



        switch (choice) {
        case 1:
                // Prints the table format of the inventory
                cout << "\v----------------------------------------------------------------------------------------------------------------------------"
                "-\n";
                cout << "\n                      T A B U L A R    S U M M A R Y    O F   T H E    T O T A L    I N V E N T O R Y   \n";
                cout << "\v============================================================================================================================"
                "=\n";

                //Setw makes the table relatively dynamic and rigid
                //one can manipulate the width easily
                cout << setw(33);
                for (int i = 0; i < 4; i++) {
                        cout << "Storekeeper " << i + 1 << setw(width);
                        if (i == 3) {
                                cout << "Total sales";
                        }
                }
                cout << "\n____________________________________________________________________________________________________________________________"
                "_ \n";


                for (int i = 0; i < 5; i++) {
                        // Prints the total inventory per product

                        cout << "\n\vProduct " << i + 1 << setw(width) << "";
                        for (int j = 0; j < 4; j++) {
                                cout << table[i][j] << setw(width) << "";
                                total_product += table[i][j];
                        }
                        cout << total_product << endl;
                        finalsum += total_product;
                        total_product = 0;
                }


                cout << "\n\vT. Inventory" << setw(width - 3) << "";

                // Prints the total inventory per salesperson

                for (int i = 0; i < 4; i++) {
                        for (int j = 0; j < 5; j++) {
                                total_invtry += table[j][i];
                        }
                        cout << total_invtry << setw(width) << "";
                        bonus[i] = (float) 0.05 * total_invtry;
                        total_invtry = 0;
                }
                cout << finalsum;

                cout << "\n____________________________________________________________________________________________________________________________"
                "_ \n\v";
                cout << "\n\vBonus Payment" << setw(width - 5) << "";
                // prints the bonus paymnet

                for (int i = 0; i < 4; i++) {
                        cout << bonus[i] << setw(width) << "";
                }
                cout << "\n____________________________________________________________________________________________________________________________"
                "_ \n";
                cout << "\n----------------------------------------------------------------------------------------------------------------------------"
                "-\n";
                
                do { //Prompts the user if they want to go back to menu or not
                        cout << "\n\vEnter 1 to go back to the main menu OR 0 to exit the program: ";
                        if (!(cin >> choice)) {
                                cout << "Invalid input\n";
                                return 1;
                        }
                        if (choice == 1) {
                                goto mainmenu;
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
                                for (int j = 0; j < 5; j++) {
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
                        cout << "Enter 1 to go back to the main menu OR 0 to exit the program: \n";
                        cin >> choice;
                } while ((choice < 0) || (choice > 1));
                
                if (choice == 0) {
                        cout << "Have a nice day!\n";
                        goto exit;
                } else if (choice == 1) {
                        goto mainmenu;
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
                                for (int j = 0; j < 4; j++) {
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
                        cout << "\vEnter 1 to go back to the main menu OR 0 to exit the program:  \n";
                        cin >> choice;
                } while ((choice < 0) || (choice > 1));
                if (choice == 0) {
                        cout << "Have a nice day!\n";
                        goto exit;
                } else if (choice == 1) {
                        goto mainmenu;
                }
                break;
        case 4: 
                //displays the team who made the program
                cout << "\v\vPixel Pioneers -- 2024 G.C\n\v\v";

                do {
                        cout << "\n\vEnter 1 to go back to the main menu OR 0 to exit the program: ";
                        cin >> choice;
                } while ((choice < 0) || (choice > 1));
                if (choice == 0) {
                        cout << "Have a nice day!\n";
                        goto exit;
                } else if (choice == 1) {
                        goto mainmenu;
                }

                break;
        case 5:
                cout << "\vHave a nice day!\n\v";
                return 0;
                break;
        default:
                cout << "Invalid choice, try again!\n";
                return 0;
        }
        exit:
                return 0;
}// That's it
