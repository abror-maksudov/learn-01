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
    // double costPerItem, totalCost;
    // int quantity;
    //
    // std::cout << "Enter the cost per item: $";
    // std::cin >> costPerItem;
    // std::cout << "Enter the quantity: ";
    // std::cin >> quantity;
    //
    // totalCost = costPerItem * quantity;
    // std::cout << "Total cost is $" << totalCost << std::endl;
    // std::cout << LINE + '\n';

    // Problem 5
    // int age1, age2, age3, age4;
    // double averageAge;
    //
    // std::cout << "Enter the ages of 4 family members: ";
    // std::cin >> age1 >> age2 >> age3 >> age4;
    // averageAge = (age1 + age2 + age3 + age4) / 4.0;
    // std::cout << "Average age is " << averageAge << '\n';
    // std::cout << LINE + '\n';

    // Problem 6
    // double length, width, area, perimeter;
    //
    // std::cout << "Enter the length of the rectangle: ";
    // std::cin >> length;
    // std::cout << "Enter the width of the rectangle: ";
    // std::cin >> width;
    //
    // area = length * width;
    // perimeter = 2 * (length + width);
    //
    // std::cout << "The area of the rectangle is: " << area << '\n';
    // std::cout << "The perimeter of the rectangle is: " << perimeter << '\n';
    // std::cout << LINE + '\n';

    // Problem 7
    // int dividend, divisor, quotient, remainder;
    //
    // std::cout << "Input the dividend: ";
    // std::cin >> dividend;
    // std::cout << "Input the divisor: ";
    // std::cin >> divisor;
    //
    // quotient = dividend / divisor;
    // remainder = dividend % divisor;
    //
    // std::cout << "The quotient of the division is: " << quotient << std::endl;
    // std::cout << "The remainder of the division is: " << remainder << std::endl;
    // std::cout << LINE + '\n';

    // Problem 8
    // double usd, rate, uzs;
    // std::cout << "Amount in USD: ";
    // std::cin >> usd;
    // std::cout << "Exchange rate (1 USD to UZS): ";
    // std::cin >> rate;
    // uzs = usd * rate;
    // std::cout << "The equivalent amount in UZS is: " << uzs << '\n';
    // std::cout << LINE + '\n';

    // Problem 9
    // double radius, area;
    //
    // std::cout << "Enter radius: ";
    // std::cin >> radius;
    // area = 3.14 * radius * radius;
    // std::cout << "Surface area of circle with r=" << radius << " is " << area << '\n';
    // std::cout << LINE + '\n';

    // Problem 10
    // double radius, height, volume;
    //
    // std::cout << "Enter radius: ";
    // std::cin >> radius;
    // std::cout << "Enter height: ";
    // std::cin >> height;
    // volume = 3.14 * radius * radius * height;
    // std::cout << "Volume of cylinder with r=" << radius << " and h=" << height << " is " << volume << '\n';
    // std::cout << LINE + '\n';

    // Problem 11
    // std::cout << "Distance is 450 KM and time is 2 hours\n";
    // double velocity_km = 450.0 / 2.0;
    // double velocity_miles = velocity_km * 0.621371;
    // std::cout << "V = " << velocity_km << "km/h and " << velocity_miles << "miles/h" << '\n';
    // std::cout << LINE + '\n';

    // Problem 12
    // int total_minutes, hours, minutes;
    // std::cout << "Total minutes: ";
    // std::cin >> total_minutes;
    // hours = total_minutes / 60;
    // minutes = total_minutes % 60;
    // std::cout << "Total time: " << hours << " hours " << minutes << " minutes" << '\n;
    // std::cout << LINE + '\n';

    // Problem 13
    // const int FIXED_COSTS = 10000;
    // double selling_price, variable_cost, break_even_point;
    // std::cout << "Enter selling price per unit: ";
    // std::cin >> selling_price;
    // std::cout << "Enter variable cost per unit: ";
    // std::cin >> variable_cost;
    // break_even_point = FIXED_COSTS / (selling_price - variable_cost);
    // std::cout << "Break-even point: " << break_even_point << '\n;
    // std::cout << LINE + '\n';

    // Problem 14
    // double basic_salary, net_salary;
    // const double TAX_RATE = 0.12;
    // std::cout << "Enter basic salary: ";
    // std::cin >> basic_salary;
    // double tax_amount = basic_salary * TAX_RATE;
    // net_salary = basic_salary - tax_amount;
    // std::cout << "Total salary: " << net_salary << '\n;
    // std::cout << LINE + '\n';

    // Ptoblem 15
    // double originalPrice, discountPercentage, discountAmount, finalPrice;
    //
    // std::cout << "Enter the original price: ";
    // std::cin >> originalPrice;
    // std::cout << "Enter the discount percentage: ";
    // std::cin >> discountPercentage;
    // discountAmount = (discountPercentage / 100) * originalPrice;
    // finalPrice = originalPrice - discountAmount;
    // std::cout << "Discount Amount: " << discountAmount << '\n';
    // std::cout << "Final Price: " << finalPrice << '\n';
    // std::cout << LINE + '\n';

    return 0;
}