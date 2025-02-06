#include <iostream>
#include <cmath>

int solveFeb6() {
    const std::string LINE(40, '=');
    std::cout << LINE + '\n';

    // Problem 1
    // std::cout << "Problem 1\n";
    // float n;
    // std::cout << "Input a number: ";
    // std::cin >> n;
    //
    // if (n < 0) {
    //     std::cout << "Negative number!\n";
    // } else if (n > 0) {
    //     std::cout << "Positive number!\n";
    // } else {
    //     std::cout << "Zero!\n";
    // }
    // std::cout << LINE + '\n';


    // Problem 2
    // std::cout << "Problem 2\n";
    // int n;
    // std::cout << "Input a number: ";
    // std::cin >> n;
    //
    // if (n % 2 == 0) {
    //     std::cout << "Even number\n";
    // } else {
    //     std::cout << "Odd number\n";
    // }
    // std::cout << LINE + '\n';


    // Problem 3
    // std::cout << "Problem 3\n";
    // int num1, num2;
    // std::cout << "Enter two numbers: ";
    // std::cin >> num1 >> num2;
    //
    // if (num1 > num2) {
    //     std::cout << "Largest number is " << num1 << '\n';
    // } else {
    //     std::cout << "Largest number is " << num2 << '\n';
    // }
    // std::cout << LINE + '\n';


    // Problem 4
    // std::cout << "Problem 4\n";
    // int num1, num2, num3;
    // std::cout << "Enter three numbers: ";
    // std::cin >> num1 >> num2 >> num3;
    //
    // if (num1 >= num2 && num1 >= num3) {
    //     std::cout << "Largest number is " << num1 << '\n';
    // } else if (num2 >= num1 && num2 >= num3) {
    //     std::cout << "Largest number is " << num2 << '\n';
    // } else {
    //     std::cout << "Largest number is " << num3 << '\n';
    // }
    // std::cout << LINE + '\n';


    // Problem 5
    // std::cout << "Problem 5\n";
    // int year;
    // std::cout << "Enter a year: ";
    // std::cin >> year;
    // if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    //     std::cout << year << " is a Leap Year." << '\n';
    // } else {
    //     std::cout << year << " is NOT a Leap Year." << '\n';
    // }
    // std::cout << LINE + '\n';

    // Problem 6
    // std::cout << "Problem 6\n";
    // int speed;
    // std::cout << "Enter speed of vehicle: ";
    // std::cin >> speed;
    //
    // if (speed < 20) {
    //     std::cout << "too slow" << '\n';
    // } else if (speed > 80) {
    //     std::cout << "too fast" << '\n';
    // } else {
    //     std::cout << "just right" << '\n';
    // }
    // std::cout << LINE + '\n';

    // Problem 7
    // std::cout << "Problem 7\n";
    // int marks;
    // std::cout << "What are your marks?: ";
    // std::cin >> marks;
    // std::cout << (marks >= 50 ? "Pass" : "Fail") << '\n';
    // std::cout << LINE + '\n';


    // Problem 8
    // std::cout << "Problem 8\n";
    // int num;
    // std::cout << "Enter a number: ";
    // std::cin >> num;
    // if (num >= 0) {
    //     if (num == 0) std::cout << "Zero\n";
    //     else std::cout << "Positive\n";
    // } else std::cout << "Negative\n";
    // std::cout << LINE + '\n';


    // Problem 9
    // std::cout << "Problem 9\n";
    // char light;
    // std::cout << "Enter a character: ";
    // std::cin >> light;
    // if (light == 'g') std::cout << "Go!\n";
    // else if (light == 'y') std::cout << "Get ready!\n";
    // else if (light == 'r') std::cout << "Stop\n";
    // std::cout << LINE + '\n';


    // Problem 10
    // std::cout << "Problem 10\n";
    // int grade;
    // std::cout << "Enter grade (0-100): ";
    // std::cin >> grade;
    //
    // switch (grade / 10) {
    //     case 10:
    //     case 9:
    //         std::cout << "A\n"; break;
    //     case 8:
    //         std::cout << "B\n"; break;
    //     case 7:
    //         std::cout << "C\n"; break;
    //     case 6:
    //         std::cout << "D\n"; break;
    //     default:
    //         std::cout << "F\n"; break;
    // }
    // std::cout << LINE + '\n';


    // Problem 11
    // std::cout << "Problem 11\n";
    // int num1, num2;
    // std::cout << "Enter two integeres: ";
    // std::cin >> num1 >> num2;
    // if (num1 % num2 == 0) {
    //     std::cout << num1 << " is divisible by " << num2 << '\n';
    // } else {
    //     std::cout << num1 << " is not divisible by " << num2 << '\n';
    // }
    // std::cout << LINE + '\n';


    // Problem 12
    // std::cout << "Problem 12\n";
    // int angle1, angle2, angle3;
    // std::cout << "Enter three angles: ";
    // std::cin >> angle1 >> angle2 >> angle3;
    // if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    //     std::cout << "The triangle is valid\n";
    // else
    //     std::cout << "The triangle is not valid\n";
    // std::cout << LINE + '\n';


    // Problem 13
    // std::cout << "Problem 13\n";
    // char ch;
    // std::cin >> ch;
    // std::cout << "Enter a character: ";
    // if (ch >= 'a' && ch <= 'z') std::cout << "Lowercase alphabet\n";
    // else if (ch >= 'A' && ch <= 'Z') std::cout << "Uppercase alphabet\n";
    // else std::cout << "It is not an alphabet\n";
    // std::cout << LINE + '\n';


    // Problem 14
    // std::cout << "Problem 14\n";
    // double weight1, price1, weight2, price2;
    // std::cout << "Enter weight and price for package 1: ";
    // std::cin >> weight1 >> price1;
    //
    // std::cout << "Enter weight and price for package 2: ";
    // std::cin >> weight2 >> price2;
    //
    // double pricePerUnit1 = price1 / weight1;
    // double pricePerUnit2 = price2 / weight2;
    //
    // if (pricePerUnit1 < pricePerUnit2) {
    //     std::cout << "Package 1 has a better price\n";
    // }
    // else if (pricePerUnit1 > pricePerUnit2) {
    //     std::cout << "Package 2 has a better price\n";
    // }
    // else std::cout << "Two packages have the same price\n";
    // std::cout << LINE + '\n';

    // Problem 15
    // std::cout << "Problem 15\n";
    // int num;
    // std::cout << "Enter a three-digit integer: ";
    // std::cin >> num;
    //
    // int firstDigit = num / 100;
    // int lastDigit = num % 10;
    //
    // if (firstDigit == lastDigit)
    //     std::cout << num << " is a palindrome\n";
    // else
    //     std::cout << num << " is not a palindrome\n";
    // std::cout << LINE + '\n';


    //Problem 16
    // std::cout << "Problem 16\n";
    // double x, y;
    // std::cout << "Enter the point (x, y): ";
    // std::cin >> x >> y;
    //
    // double distance = std::sqrt(x * x + y * y);
    //
    // if (distance <= 10)
    //     std::cout << "The point is inside the circle\n";
    // else
    //     std::cout << "The point is outside the circle\n";
    // std::cout << LINE + '\n';


    //Problem 17
    // std::cout << "Problem 17\n";
    // float gpa;
    // std::cout << "Enter GPA (0-4.5): ";
    // std::cin >> gpa;
    //
    // int scholarship = 0;
    //
    // if (gpa >= 4.0) {
    //     scholarship = 80;
    // } else if (gpa >= 3.5) {
    //     scholarship = 60;
    // } else if (gpa >= 3.0) {
    //     scholarship = 50;
    // } else {
    //     scholarship = 0;
    // }
    //
    // if (scholarship > 0)
    //     std::cout << "You got " << scholarship << "% scholarship\n";
    // else
    //     std::cout << "No scholarship\n";
    // std::cout << LINE + '\n';

    return 0;
}