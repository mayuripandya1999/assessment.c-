//For Menu kinds of Programming , use the core logic of Loops/conditional statements.
#include <iostream>

int main() {
    int choice;
    bool exitMenu = false;

    while (!exitMenu) {
        // Display menu options
        std::cout << "Menu:\n";
        std::cout << "1. Option 1\n";
        std::cout << "2. Option 2\n";
        std::cout << "3. Option 3\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                // Code for Option 1
                std::cout << "You selected Option 1.\n";
                // Add your logic here
                break;

            case 2:
                // Code for Option 2
                std::cout << "You selected Option 2.\n";
                // Add your logic here
                break;

            case 3:
                // Code for Option 3
                std::cout << "You selected Option 3.\n";
                // Add your logic here
                break;

            case 4:
                // Exit the menu
                std::cout << "Exiting the menu.\n";
                exitMenu = true;
                break;

            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
