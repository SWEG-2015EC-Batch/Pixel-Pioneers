#Pseudocode
// Define constants and variables
CONSTANT NUMBER_OF_WAREHOUSES = 4
CONSTANT DAYS = 30
VARIABLE table[NUMBER_OF_WAREHOUSES][NUMBER_OF_PRODUCTS] AS INTEGER // A two-dimensional array to store the inventory by warehouse and product
VARIABLE warehouse[NUMBER_OF_WAREHOUSES][DAYS] AS INTEGER // An array to store the total inventory by warehouse per day
VARIABLE product[NUMBER_OF_PRODUCTS][DAYS] AS INTEGER // An array to store the total inventory by product
VARIABLE bonus[NUMBER_OF_WAREHOUSES] AS REAL // An array to store the bonus by warehouse
VARIABLE warehousenum AS INTEGER // A variable to store the warehouse number
VARIABLE producttype AS INTEGER // A variable to store the product number
VARIABLE quantity AS INTEGER // A variable to store the quantity of the product received
VARIABLE choice AS INTEGER // A variable to store the user's choice for the menu
VARIABLE search_warehouse AS INTEGER // A variable to store the warehouse number to search
VARIABLE search_product AS INTEGER // A variable to store the product number to search

// Initialize the arrays to zero
FOR each warehouse in inventory
    FOR each product in warehouse
        SET product to 0
    ENDFOR
    SET warehouse[warehouse][DAYS] to 0
    SET bonus[warehouse] to 0
ENDFOR
FOR each product in product
    SET product to 0
ENDFOR

// Record the daily information
    //for int i = 0 while i < DAYS; i++
        // Prompt the user to enter the warehouse number, product number, and quantity
        PRINT "DAY" i + 1
        PRINT "Enter the warehouse number (1 to 4):"
        READ warehousenum
        WHILE warehouse_number is not 0
            IF warehouse_number is valid (between 1 and 4) THEN
                PRINT "Enter the product number (1 to 5):"
                READ producttype
                IF product_number is valid (between 1 and 5) THEN
                    PRINT "Enter the quantity of the product received:"
                    READ quantity
                    IF quantity is positive THEN
                        // Update the inventory array and the total arrays
                        SET table[warehousenum][producttype] to table[warehousenum][producttype] + quantity
                        SET warehouse[warehousenum][i] to quantity
                        SET product[producttype][i] to product[product_number][i] + quantity
                    ELSE
                        PRINT "Invalid Input."
                    ENDIF
                ELSE
                    PRINT "Invalid Input."
                ENDIF
            ELSE
                PRINT "Invalid Input."
            ENDIF
            // Prompt the user to enter the next warehouse number 
            PRINT "Enter the next warehouse number (1 to 4):"
            READ warehousenum
        ENDWHILE


// Generate the summary of the inventory
    // Print the header of the table
    PRINT "Summary of the inventory by warehouse and product"
    PRINT "Warehouse | Product 1 | Product 2 | Product 3 | Product 4 | Product 5 | Total |"
    // Print the inventory and the total by warehouse for each warehouse
    FOR each warehouse in inventory
        PRINT warehouse
        FOR each product in warehouse
            PRINT " | ", product
        ENDFOR
        PRINT " | ", total_by_warehouse[warehouse]
        // Calculate and print the bonus by warehouse
        SET bonus[warehouse] to total_by_warehouse[warehouse] * BONUS_RATE
        PRINT " | ", bonus[warehouse]
        PRINT "\n"
    ENDFOR
    // Print the total by product for each product
    PRINT "Total"
    FOR each product in product
        PRINT " | ", product
    ENDFOR
    // Print a blank line
    PRINT "\n"

// Search for a particular warehouse record
    // Prompt the user to enter the warehouse number and the product number to search
    PRINT "Enter 1-4 for single storekeeper record OR 5 for all storekeepers:"
    READ warehousenum
    IF warehousenum is valid (between 1 and 5) THEN
        IF warehousenum is 5
            PRINT "Enter the product number (1 to 5) to search:"
            READ producttype
            IF producttype is valid (between 1 and 5) THEN
                // Print the inventory of the product in the warehouse in days
                    PRINT "Days   Quantities per Warehouse\\Storekeeper " 
                    PRINT"\t\tS1\t|S2\t|S3\t|S4"
                //Iterate through the days
                    for int i = 0 while i < DAYS increment i by 1
                        PRINT "Day ", i+1,"|"
                        // Iterate through the warehouse
                            for integer j = 0 while j < 4 increment j by 1
                                PRINT warehouse[j][i], "\t"
                            PRINT "\n"
        ELSE 
            PRINT "Days |Records of storekeeper ", warehousenum,endl
            //Iterate through the days
                for integer i = 0 while i < DAYS increment i by 1
                    PRINT "Day ", i+1
                    PRINT warehouse[warehousenum - 1][i], endl

        ENDIF
    ELSE
        PRINT "Invalid Input."
    ENDIF
// Search for a particular product record
// Prompt the user to enter the product number to search
PRINT "Enter 1-5 to search each product type OR 6 for the entire products record:"
READ producttype
    IF producttype is valid (between 1 and 6) THEN
        IF producttype is 6
            // Print the inventory of the product in days
                PRINT "Days   Quantities per product (P)\\Storekeeper " 
                PRINT"\t\tP1\t|P2\t|P3\t|P4\t|P5\n"
            //Iterate through the days
                for int i = 0 while i < DAYS increment i by 1
                    PRINT "Day ", i+1,"|"
                    // Iterate through the products
                        for integer j = 0 while j < 4 increment j by 1
                            PRINT products[j][i], "\t"
                        PRINT "\n"
    ELSE 
        PRINT "Days |Quantities per product (P) ", endl
        //Iterate through the days
            for integer i = 0 while i < DAYS increment i by 1
                PRINT "Day ", i+1
                PRINT products[producttype-1][i], endl  
// Main program
BEGIN
    // Display a menu with options to record, generate, search, or exit
    PRINT "Welcome to the inventory management program."
    PRINT "Please choose an option from the menu:"
    PRINT "1. Tabular summary of the month."
    PRINT "2. Products (1-5) record."
    PRINT "3. Storekeepers (1-4) record."
    PRINT "4. About"
    PRINT "5. Exit the program"
    READ choice
    // Repeat until the user chooses to exit
    WHILE choice is not 4
        // Perform the corresponding action based on the user's choice
        IF choice is 1 THEN
            Display table summary
        ELSE IF choice is 2 THEN
            Display product record
        ELSE IF choice is 3 THEN
            Display storekeeper record
        ELSE
            PRINT "Invalid choice, try again!"
        ENDIF
        // Display the menu again
        PRINT "Please choose another option from the menu:"
        PRINT "1. Tabular summary of the month."
        PRINT "2. Products (1-5) record."
        PRINT "3. Storekeepers (1-4) record."
        PRINT "4. About"
        PRINT "5. Exit the program"
        READ choice
    ENDWHILE
    // Print a farewell message
    PRINT "Have a nice day!"
END