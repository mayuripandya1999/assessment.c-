//Display the Menu using appropriate codes.
#include <iostream>

int main() {
    int choice;

    do {
        // Display the menu options
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Option 1" << std::endl;
        std::cout << "2. Option 2" << std::endl;
        std::cout << "3. Option 3" << std::endl;
        std::cout << "4. Exit" << std::endl;

        // Prompt for user input
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Handle the user's choice
        switch (choice) {
            case 1:
                std::cout << "You selected Option 1." << std::endl;
                // Perform actions for Option 1
                break;
            case 2:
                std::cout << "You selected Option 2." << std::endl;
                // Perform actions for Option 2
                break;
            case 3:
                std::cout << "You selected Option 3." << std::endl;
                // Perform actions for Option 3
                break;
            case 4:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }

        // Add a line break for better readability
        std::cout << std::endl;

    } while (choice != 4); // Keep displaying the menu until the user chooses to exit

    return 0;
}
