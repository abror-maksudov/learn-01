#include <iostream>


int multiply(int a, int b) {
    if (b == 0) {
        return 0;
    }
    if (b < 0) {
        return -a + multiply(a, b + 1);
    }
    return a + multiply(a, b - 1);
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sum(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sum(n - 1);
}

void printDescending(int n) {
    if (n == 0) {
        return;
    }
    std::cout << n << " ";
    printDescending(n - 1);
}

int countDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + countDigits(n / 10);
}

int sumDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + sumDigits(n / 10);
}

int power(int x, int y) {
    if (y == 0) {
        return 1;
    }
    return x * power(x, y - 1);
}

int reverseDigits(int n, int rev = 0) {
    if (n == 0) {
        return rev;
    }
    return reverseDigits(n / 10, rev * 10 + n % 10);
}

bool isPalindrome(int n, int rev = 0, int temp = 0) {
    if (n == 0) {
        return rev == temp;
    }
    return isPalindrome(n / 10, rev * 10 + n % 10, temp);
}

int solveLab9() {
    const std::string LINE(40, '=');
    std::cout << LINE + '\n';


    // Problem 1
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::cout << "Product: " << multiply(a, b) << std::endl;


    // Problem 2
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Factorial: " << factorial(n) << std::endl;


    // Prblem 3
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Fibonacci number at position " << n << ": " << fibonacci(n) << std::endl;


    // Problem 4
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Sum of first " << n << " natural numbers: " << sum(n) << std::endl;


    // Problem 5
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Numbers from " << n << " to 1: ";
    printDescending(n);
    std::cout << std::endl;


    // problem 6
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Number of digits: " << countDigits(n) << std::endl;


    // Problem 7
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Sum of digits: " << sumDigits(n) << std::endl;


    // Problem 8
    int x, y;
    std::cout << "Enter base and exponent: ";
    std::cin >> x >> y;
    std::cout << "Power: " << power(x, y) << std::endl;


    // Problem 9
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Reversed number: " << reverseDigits(n) << std::endl;


    // Problem 10
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << (isPalindrome(n, 0, n) ? "true" : "false") << std::endl;

    return 0;
}