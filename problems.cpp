#include <iostream>
#include <string>
#include <iomanip>

int solve_problems_1() {
    const std::string LINE(40, '=');
    std::cout << LINE + '\n';

    // Problem 1
    // std::cout << "Problem 1\n";
    // std::string username;
    // int age;
    // std::cout << "Enter your name: ";
    // std::cin >> username;
    // std::cout << "Enter your age: ";
    // std::cin >> age;
    // std::cout << "Your name is " << username << " and you are " << age << " years old.\n";
    // std::cout << LINE + '\n';

    // Problem 2
    // std::cout << "Problem 2\n";
    //
    // for (int i = 1; i <= 5; i++) {
    //     std::cout << std::setw(5) << i << std::endl;
    // }
    // std::cout << LINE + '\n';

    // Problem 3
    // int a, b;
    // std::cout << "First number: a = ";
    // std::cin >> a;
    // std::cout << "Second number: b = ";
    // std::cin >> b;
    //
    // int temp = a;
    // a = b;
    // b = temp;
    //
    // std::cout << "New values: a = " << a << ", b = " << b << '\n';
    // std::cout << LINE + '\n';

    // Problem 4
    // int n;
    // std::cout << "Enter a number: ";
    // std::cin >> n;
    //
    // std::cout << std::setw(10) << "Number" << std::setw(15) << "Square\n";
    // std::cout << "----------------------------\n";
    //
    // for (int i = 1; i <= n; i++) {
    //     std::cout << std::setw(10) << i << std::setw(15) << i * i << std::endl;
    // }
    // std::cout << LINE + '\n';

    // Problem 5
    // std::string text;
    // std::cout << "Enter a string: ";
    // std::cin >> text;
    //
    // int width = 50;
    // int padding = width - text.length();
    // int left = padding / 2;
    // int right = padding - left;
    //
    // std::cout << std::setw(left + text.length()) << text << std::setw(right) << "" << std::endl;
    // std::cout << LINE + '\n';


    return 0;
}

int solve_problems_2() {
    const std::string LINE(40, '=');
    std::cout << LINE + '\n';

    // Problem 1
    // int num1, num2, num3, num4, num5;
    // std::cout << "Enter 5 numbers:\n";
    // std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
    // int sum = num1 + num2 + num3 + num4 + num5;
    // std::cout << "The sum of the 5 numbers is: " << sum << '\n';
    // std::cout << LINE + '\n';

    // Problem 2
    // int studentID;
    // short yearOfStudy;
    // float gpa;
    // double studyFee;
    //
    // std::cout << "Enter Student ID: ";
    // std::cin >> studentID;
    // std::cout << "Enter Student GPA: ";
    // std::cin >> gpa;
    // std::cout << "Enter Student Year of Study: ";
    // std::cin >> yearOfStudy;
    // std::cout << "Enter Student Study Fee: ";
    // std::cin >> studyFee;
    // std::cout << "\nStudent ID: " << studentID << '\n';
    // std::cout << "Student GPA: " << gpa << '\n';
    // std::cout << "Student Year of Study: " << yearOfStudy << '\n';
    // std::cout << "Student Study Fee: " << studyFee << " sum" << '\n';

    // Problem 3
    // float celsius, fahrenheit;
    //
    // std::cout << "Enter the temperature in Celsius: ";
    // std::cin >> celsius;
    //
    // fahrenheit = (celsius * 9.0 / 5.0) + 32;
    //
    // std::cout << "The temperature in Celsius: " << celsius << '\n';
    // std::cout << "The temperature in Fahrenheit: " << fahrenheit << '\n';
    // std::cout << LINE + '\n';

    // Problem 4
    double costPerItem, totalCost;
    int quantity;

    std::cout << "Enter the cost per item: $";
    std::cin >> costPerItem;
    std::cout << "Enter the quantity: ";
    std::cin >> quantity;

    totalCost = costPerItem * quantity;
    std::cout << "Total cost is $" << totalCost << std::endl;
    std::cout << LINE + '\n';


    return 0;
}