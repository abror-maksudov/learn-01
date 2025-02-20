#include <iostream>

int solveFeb20() {
    const std::string LINE(40, '=');
    std::cout << LINE + '\n';


    // Problem 1
    // std::cout << "Problem 1\n";
    //
    // int sum1 = 0;
    // for (int i = 1; i <= 100; i++) {
    //     sum1 += i;
    // }
    // std::cout << sum1 << std::endl;
    //
    // int n, sum2 = 0, i = 1;
    // std::cin >> n;
    // while (i <= n) {
    //     sum2 += i;
    //     i++;
    // }
    // std::cout << sum2 << std::endl;
    // std::cout << LINE;


    // Problem 2
    // std::cout << "Problem 2\n";
    // int count = 0, num = 2;
    // while (count < 10) {
    //     bool prime = true;
    //     for (int i = 2; i * i <= num; i++) {
    //         if (num % i == 0) {
    //             prime = false;
    //             break;
    //         }
    //     }
    //     if (prime) {
    //         std::cout << num << " ";
    //         count++;
    //     }
    //     num++;
    // }
    // std::cout << std::endl;
    //
    // int n, found = 0, p = 2;
    // std::cin >> n;
    // while (found < n) {
    //     bool prime = true;
    //     for (int i = 2; i * i <= p; i++) {
    //         if (p % i == 0) {
    //             prime = false;
    //             break;
    //         }
    //     }
    //     if (prime) {
    //         std::cout << p << " ";
    //         found++;
    //     }
    //     p++;
    // }
    // std::cout << LINE;


    // Problem 3
    // std::cout << "Problem 3\n";
    // int n;
    // std::cin >> n;
    // while (n != 1) {
    //     std::cout << n << ",";
    //     if (n % 2 == 0) {
    //         n /= 2;
    //     } else {
    //         n = 3 * n + 1;
    //     }
    // }
    // std::cout << n << std::endl;


    // Problem 4
    // std::cout << "Problem 4\n";
    // long int n, count = 0;
    // std::cin >> n;
    // while (n > 0) {
    //     count++;
    //     n /= 10;
    // }
    // std::cout << count << std::endl;


    // Problem 5
    // std::cout << "Problem 5\n";
    // int n;
    // std::cin >> n;
    // while (n > 0) {
    //     std::cout << n % 10 << ' ';
    //     n /= 10;
    // }
    // std::cout << std::endl;


    // Problem 6
    // std::cout << "Problem 6\n";
    // int a, b;
    // std::cin >> a >> b;
    // while (b != 0) {
    //     int temp = b;
    //     b = a % b;
    //     a = temp;
    // }
    // std::cout << a << std::endl;


    // Problem 7
    // std::cout << "Problem 7\n";
    // int sum = 0, count = 0, num;
    // while (sum <= 100) {
    //     std::cin >> num;
    //     sum += num;
    //     count++;
    // }
    // std::cout << "Sum exceeded 100! Total sum: " << sum << " Total numbers entered: " << count << std::endl;


    // Problem 8
    // std::cout << "Problem 8\n";
    // int balance = 500, amount;
    //
    // std::cout << "Your balance: $" << balance << "\n";
    // while (balance > 0) {
    //     std::cout << "Enter withdrawal amount (or 0 to cancel): ";
    //     std::cin >> amount;
    //
    //     if (amount == 0) {
    //         break;
    //     }
    //
    //     if (amount > balance) {
    //         std::cout << "Insufficient funds!" << std::endl;
    //     } else {
    //         balance -= amount;
    //         std::cout << "Remaining balance: $" << balance << std::endl;
    //     }
    // }


    // Problem 9
    // std::cout << "Problem 9\n";
    // char input;
    // do {
    //     std::cin >> input;
    //     if (input != 'Y' && input != 'N') {
    //         std::cout << "Invalid" << std::endl;
    //     }
    // } while (input != 'Y' && input != 'N');
    //
    // std::cout << "Accepted" << std::endl;


    // Problem 10
    // std::cout << "Problem 10\n";
    // int choice;
    // do {
    //     std::cout << "1: Withdraw\n2: Deposit\n3: Check Balance\n4: Exit\n";
    //     std::cin >> choice;
    //
    //     if (choice == 1) {
    //         std::cout << "Processing..." << std::endl;
    //     } else if (choice == 2) {
    //         std::cout << "Processing..." << std::endl;
    //     } else if (choice == 3) {
    //         std::cout << "Processing..." << std::endl;
    //     } else if (choice != 4) {
    //         std::cout << "Invalid choice" << std::endl;
    //     }
    //
    // } while (choice != 4);
    //
    // std::cout << "Goodbye!" << std::endl;


    // Problem 11
    // std::cout << "Problem 11\n";
    // int choice, a, b;
    //
    // do {
    //     std::cout << "1: Add\n2: Subtract\n3: Multiply\n4: Exit\n";
    //     std::cin >> choice;
    //
    //     if (choice >= 1 && choice <= 3) {
    //         std::cin >> a >> b;
    //     }
    //
    //     if (choice == 1) {
    //         std::cout << a << " + " << b << " = " << (a + b) << std::endl;
    //     } else if (choice == 2) {
    //         std::cout << a << " - " << b << " = " << (a - b) << std::endl;
    //     } else if (choice == 3) {
    //         std::cout << a << " * " << b << " = " << (a * b) << std::endl;
    //     } else if (choice != 4) {
    //         std::cout << "Invalid choice" << std::endl;
    //     }
    //
    // } while (choice != 4);
    //
    // std::cout << "Goodbye!" << std::endl;


    // Problem 12
    // std::cout << "Problem 12\n";
    // int password = 1234, input, attempts = 0;
    //
    // do {
    //     std::cout << "Enter password: ";
    //     std::cin >> input;
    //
    //     if (input == password) {
    //         std::cout << "Access Granted" << std::endl;
    //         return 0;
    //     } else {
    //         std::cout << "Incorrect" << std::endl;
    //     }
    //
    //     attempts++;
    // } while (attempts < 3);


    // Problem 13
    // std::cout << "Problem 13\n";
    // std::srand(std::time(0));
    // int number = std::rand() % 10 + 1, guess;
    //
    // do {
    //     std::cout << "Guess: ";
    //     std::cin >> guess;
    //
    //     if (guess < number) {
    //         std::cout << "Too low" << std::endl;
    //     } else if (guess > number) {
    //         std::cout << "Too high" << std::endl;
    //     }
    // } while (guess != number);
    //
    // std::cout << "Correct!" << std::endl;


    return 0;
}

