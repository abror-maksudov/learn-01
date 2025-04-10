#include <iostream>

float calculateTotalPrice(int choice, int quantity) {
    float price;
    switch(choice) {
        case 1: price = 10.0; break;
        case 2: price = 8.0; break;
        case 3: price = 5.0; break;
        default: price = 0.0;
    }
    return price * quantity;
}

float calculateTheFee(int hours) {
    float fee = 0;
    if(hours <= 2) {
        fee = 0;
    } else if(hours <= 5) {
        fee = (hours - 2) * 2;
    } else {
        fee = (3 * 2) + ((hours - 5) * 5);
    }
    return fee;
}

void deposit(float &balance) {
    float amount;
    std::cout << "Enter deposit amount: ";
    std::cin >> amount;
    balance += amount;
}

void withdraw(float &balance) {
    float amount;
    std::cout << "Enter withdraw amount: ";
    std::cin >> amount;
    if(amount <= balance) {
        balance -= amount;
    } else {
        std::cout << "Insufficient funds!" << std::endl;
    }
}

void checkBalance(float balance) {
    std::cout << "Current Balance: $" << balance << std::endl;
}

float calculateTotal(int choice, int tickets) {
    float price;
    switch(choice) {
        case 1: price = 8.0; break;
        case 2: price = 10.0; break;
        case 3: price = 12.0; break;
        default: price = 50.0;
    }
    return price * tickets;
}

float calculateFare(int choice, int tickets) {
    float price;
    switch(choice) {
        case 1: price = 15.0; break;
        case 2: price = 20.0; break;
        case 3: price = 25.0; break;
        default: price = 0.0;
    }
    return price * tickets;
}

int solveLab7() {
    const std::string LINE(40, '=');
    std::cout << LINE + '\n';

    // Problem 1
    // int choice, quantity;
    // float total;
    // do {
    //     std::cout << "Menu: 1. Pizza $10, 2. Burger $8, 3. Salad $5\n";
    //     std::cout << "Enter item number: ";
    //     std::cin >> choice;
    //     std::cout << "Enter quantity: ";
    //     std::cin >> quantity;
    //     total = calculateTotalPrice(choice, quantity);
    //     std::cout << "Total Bill: $" << total << std::endl;
    //     std::cout << "Do you want to order again? (1 for Yes, 0 for No): ";
    //     std::cin >> choice;
    // } while(choice == 1);


    // Problem 2
    // int hours;
    // char again;
    // do {
    //     std::cout << "Enter the number of hours parked: ";
    //     std::cin >> hours;
    //     std::cout << "Parking Fee: $" << calculateTheFee(hours) << std::endl;
    //     std::cout << "Do you want to calculate for another user? (y/n): ";
    //     std::cin >> again;
    // } while(again == 'y' || again == 'Y');


    // Problem 3
    // float balance = 500;
    // int choice;
    // do {
    //     std::cout << "Menu: 1. Deposit, 2. Withdraw, 3. Check Balance, 4. Exit\n";
    //     std::cout << "Enter option: ";
    //     std::cin >> choice;
    //     switch(choice) {
    //         case 1: deposit(balance); break;
    //         case 2: withdraw(balance); break;
    //         case 3: checkBalance(balance); break;
    //         case 4: std::cout << "Exiting...\n"; break;
    //         default: std::cout << "Invalid option!\n"; break;
    //     }
    // } while(choice != 4);


    // Problem 4
    // int choice, tickets;
    // float total;
    // do {
    //     std::cout << "Select Movie: 1. Movie A $8, 2. Movie B $10, 3. Movie C $12\n";
    //     std::cout << "Enter movie choice: ";
    //     std::cin >> choice;
    //     std::cout << "Enter number of tickets: ";
    //     std::cin >> tickets;
    //     total = calculateTotal(choice, tickets);
    //     std::cout << "Total Cost: $" << total << std::endl;
    //     std::cout << "Do you want to book again? (1 for Yes, 0 for No): ";
    //     std::cin >> choice;
    // } while(choice == 1);


    // Prblem 5
    int choice, tickets;
    float totalFare;
    do {
        std::cout << "Select Train: 1. Train X $15, 2. Train Y $20, 3. Train Z $25\n";
        std::cout << "Enter train choice: ";
        std::cin >> choice;
        std::cout << "Enter number of tickets: ";
        std::cin >> tickets;
        totalFare = calculateFare(choice, tickets);
        std::cout << "Total Fare: $" << totalFare << std::endl;
        std::cout << "Do you want to book again? (1 for Yes, 0 for No): ";
        std::cin >> choice;
    } while(choice == 1);


    return 0;
}