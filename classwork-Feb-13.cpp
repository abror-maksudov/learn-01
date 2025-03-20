#include <iostream>

int solveFeb13() {
    const std::string LINE(40, '=');
    std::cout << LINE + '\n';

    // CLASSWORK PROBLEM

    // std::cout << "Please, enter two numbers, a and b: ";
    // int op;
    // float a, b;
    // std::cin >> a >> b;
    //
    // std::cout << "Please, select number from 1 to 4 according to:\n";
    // std::cout << "1 for addition (a+b)\n";
    // std::cout << "2 for subtraction (a-b)\n";
    // std::cout << "3 for multiplication (a*b)\n";
    // std::cout << "4 for division (a/b)\n";
    //
    // std::cin >> op;
    //
    // switch (op) {
    //     case 1:
    //         std::cout << "Result: " << (a + b) << std::endl;
    //         break;
    //     case 2:
    //         std::cout << "Result: " << (a - b) << std::endl;
    //         break;
    //     case 3:
    //         std::cout << "Result: " << (a * b) << std::endl;
    //         break;
    //     case 4:
    //         if (b != 0)
    //             std::cout << "Result: " << (a / b) << std::endl;
    //         else
    //             std::cout << "Error: Division by zero is not allowed.\n";
    //         break;
    //     default:
    //         std::cout << "Invalid option! Please enter a number between 1 and 4.\n";
    // }
    //
    // std::cout << LINE + '\n';


    // Problem 1
    // std::cout << "Problem 1\n";
    // 1.1 Print the first 10 natural numbers
    // std::cout << "1.1. First 10 natural numbers: ";
    // for (int i = 1; i <= 10; i++) {
    //     std::cout << i << " ";
    // }
    // std::cout << std::endl;

    // 1.2 Print the first N natural numbers (take N from input)
    // int N;
    // std::cout << "Enter N for first N natural numbers: ";
    // std::cin >> N;
    // std::cout << "1.2. First " << N << " natural numbers: ";
    // for (int i = 1; i <= N; i++) {
    //     std::cout << i << " ";
    // }
    // std::cout << std::endl;

    // 1.3 Print the sum of the first 10 natural numbers
    // int sum10 = 0;
    // for (int i = 1; i <= 10; i++) {
    //     sum10 += i;
    // }
    // std::cout << "1.3. Sum of first 10 natural numbers: " << sum10 << std::endl;

    // 1.4 Print the sum of the first N natural numbers (take N from input)
    // int sumN = 0;
    // std::cout << "Enter N for sum of first N natural numbers: ";
    // std::cin >> N;
    // for (int i = 1; i <= N; i++) {
    //     sumN += i;
    // }
    // std::cout << "1.4. Sum of first " << N << " natural numbers: " << sumN << std::endl;

    // 1.5 Print the average of the first 10 natural numbers
    // std::cout << "1.5. Average of first 10 natural numbers: " << sum10 / 10.0 << std::endl;

    // 1.6 Print the average of the first N natural numbers (take N from input)
    // std::cout << "1.6. Enter N for average of first N natural numbers: ";
    // std::cin >> N;
    // sumN = 0;
    // for (int i = 1; i <= N; i++) {
    //     sumN += i;
    // }
    // std::cout << "Average of first " << N << " natural numbers: " << sumN / (double)N << std::endl;
    // std::cout << LINE + '\n';



    // Problem 2
    // std::cout << "Problem 2\n";

    // 2.1 Print odd numbers among the first 10 natural numbers
    // std::cout << "2.1. Odd numbers from 1 to 10: ";
    // for (int i = 1; i <= 10; i += 2) {
    //     std::cout << i << " ";
    // }
    // std::cout << std::endl;

    // 2.2 Print even numbers among the first 10 natural numbers
    // std::cout << "2.2. Even numbers from 1 to 10: ";
    // for (int i = 2; i <= 10; i += 2) {
    //     std::cout << i << " ";
    // }
    // std::cout << std::endl;

    // 2.3 Print odd numbers among the first N natural numbers (take N from input)
    // int N;
    // std::cout << "2.3. Enter N for odd numbers: ";
    // std::cin >> N;
    // std::cout << "Odd numbers from 1 to " << N << ": ";
    // for (int i = 1; i <= N; i += 2) {
    //     std::cout << i << " ";
    // }
    // std::cout << std::endl;

    // 2.4 Print even numbers among the first N natural numbers (take N from input)
    // std::cout << "2.4. Enter N for even numbers: ";
    // std::cin >> N;
    // std::cout << "Even numbers from 1 to " << N << ": ";
    // for (int i = 2; i <= N; i += 2) {
    //     std::cout << i << " ";
    // }
    // std::cout << std::endl;

    // 2.5 Print numbers within range 1 to 100 that are divisible by 10
    // std::cout << "2.5. Numbers from 1 to 100 divisible by 10: ";
    // for (int i = 10; i <= 100; i += 10) {
    //     std::cout << i << " ";
    // }
    // std::cout << std::endl;

    // 2.6 Print numbers within range 1 to N that are divisible by 10 (take N from input)
    // std::cout << "2.6. Enter N for numbers divisible by 10: ";
    // std::cin >> N;
    // std::cout << "Numbers from 1 to " << N << " divisible by 10: ";
    // for (int i = 10; i <= N; i += 10) {
    //     std::cout << i << " ";
    // }
    // std::cout << std::endl;
    // std::cout << LINE + '\n';



    // Problem 3
    // std::cout << "Problem 3\n";
    // int count = 0;
    //
    // for (char ch = 'A'; ch <= 'Z'; ch++) {
    //     std::cout << ch << " ";
    //     count++;
    //
    //     if (count % 5 == 0) {
    //         std::cout << std::endl;
    //     }
    // }
    // std::cout << std::endl;



    // Problem 4
    // std::cout << "Problem 4\n";
    // int n;
    //
    // std::cout << "Please, enter a non-negative integer n: ";
    // std::cin >> n;
    //
    // if (n < 0) {
    //     std::cout << 'Factorial of a negative number is not defined. (actually, it is)\n';
    // } else {
    //     int fact = 1;
    //     for (int i = n; i > 0; i--) {
    //         fact *= i;
    //     }
    //     std::cout << "The answer is " << fact << '\n';
    // }
    // std::cout << LINE + '\n';


    // Problem 5
    // std::cout << "Problem 5\n";
    // int numClasses;
    // std::cout << "Enter the number of classes: ";
    // std::cin >> numClasses;
    //
    // double totalPoints = 0, totalCredits = 0;
    //
    // for (int i = 0; i < numClasses; i++) {
    //     double credits, grade;
    //     std::cout << "Enter credits and grade for class " << (i + 1) << ": ";
    //     std::cin >> credits >> grade;
    //
    //     totalPoints += credits * grade;
    //     totalCredits += credits;
    // }
    //
    // if (totalCredits > 0) {
    //     std::cout << "Your total GPA is " << (totalPoints / totalCredits) << std::endl;
    // } else {
    //     std::cout << "Sorry. Something went wrong." << std::endl;
    // }
    // std::cout << LINE + '\n';


    // Problem 6
    // std::cout << "Problem 6\n";
    // int numStudents;
    // std::cout << "Enter the number of students: ";
    // std::cin >> numStudents;
    //
    // for (int s = 1; s <= numStudents; s++) {
    //     int numClasses;
    //     std::cout << "Enter the number of classes for student " << s << ": ";
    //     std::cin >> numClasses;
    //
    //     double totalPoints = 0, totalCredits = 0;
    //
    //     for (int i = 0; i < numClasses; i++) {
    //         double credits, grade;
    //         std::cout << "Enter credits and grade for class " << (i + 1) << ": ";
    //         std::cin >> credits >> grade;
    //
    //         totalPoints += credits * grade;
    //         totalCredits += credits;
    //     }
    //
    //     if (totalCredits > 0) {
    //         std::cout << "Total GPA for student " << s << " is " << (totalPoints / totalCredits) << std::endl;
    //     } else {
    //         std::cout << "Sorry. Something went wrong. " << s << std::endl;
    //     }
    // }
    // std::cout << LINE + '\n';



    // Problem 7
    // std::cout << "Problem 7\n";
    // int N;
    // std::cout << "Enter the size of the square: ";
    // std::cin >> N;
    //
    // for (int i = 0; i < N; i++) {
    //     for (int j = 0; j < N; j++) {
    //         std::cout << "*";
    //     }
    //     std::cout << std::endl;
    // }
    // std::cout << LINE + '\n';


    // Problem 8
    // std::cout << "Problem 8\n";
    // int N;
    // std::cout << "Enter the number of rows: ";
    // std::cin >> N;
    //
    // for (int i = 1; i <= N; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         std::cout << "*";
    //     }
    //     std::cout << std::endl;
    // }
    // std::cout << LINE + '\n';



    // Problem 9
    // std::cout << "Problem 9\n";
    // int num;
    // std::cout << "Enter a number: ";
    // std::cin >> num;
    //
    // bool isPrime = true;
    //
    // for (int i = 2; i < num; i++) {
    //     if (num % i == 0) {
    //         isPrime = false;
    //         break;
    //     }
    // }
    //
    // if (isPrime && num > 2) {
    //     std::cout << "Number is prime" << std::endl;
    // } else {
    //     std::cout << "Number is not prime" << std::endl;
    // }
    // std::cout << LINE + '\n';



    // Problem 10
    // std::cout << "Problem 10\n";
    // int n;
    // std::cout << "Enter a number: ";
    // std::cin >> n;
    //
    // for (int i = 1; i <= n; i++) {
    //     std::cout << i << "*" << i << "=" << (i * i) << '\n';
    // }
    // std::cout << std::endl;



    // Problem 11
    // std::cout << "Problem 11\n";
    // int num, positiveCount = 0, negativeCount = 0, totalCount = 0;
    // double sum = 0;
    //
    // std::cout << "Enter integers (input ends if it is 0): ";
    //
    // while (true) {
    //     std::cin >> num;
    //     if (num == 0) break;
    //     if (num > 0) positiveCount++;
    //     else negativeCount++;
    //     sum += num;
    //     totalCount++;
    // }
    // std::cout << "The number of positives is " << positiveCount << std::endl;
    // std::cout << "The number of negatives is " << negativeCount << std::endl;
    // std::cout << "The total is " << totalCount << std::endl;
    //
    // if (totalCount > 0) {
    //     std::cout << "The average is " << (sum / totalCount) << std::endl;
    // } else {
    //     std::cout << "You did not enter anything." << std::endl;
    // }
    // std::cout << LINE + '\n';



    // Problem 12
    // std::cout << "Problem 12\n";
    // int n;
    // std::cout << "Enter a number: ";
    // std::cin >> n;
    //
    // std::cout << "Reversed number: ";
    //
    // while (n > 0) {
    //     std::cout << (n % 10);
    //     n = n / 10;
    // }
    // std::cout << LINE + '\n';



    // Problem 13
    // std::cout << "Problem 13\n";
    // int N;
    // std::cout << "Enter the height of the triangle: ";
    // std::cin >> N;
    //
    // if (N == 0) {
    //     std::cout << "The depth is 0" << std::endl;
    //     return;
    // }
    //
    // for (int i = 1; i <= N; i++) {
    //     // Loop to print `i` times the number `i`
    //     for (int j = 1; j <= i; j++) {
    //         std::cout << i;
    //     }
    //     std::cout << std::endl;
    // }


    // Problem 14
    // std::cout << "Problem 14\n";

    return 0;
}
