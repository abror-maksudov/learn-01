#include <iostream>
#include "problems.h"
// using namespace std;


// Problem 14
void welcomeMessage() {
    std::cout << "Welcome to the C++ programming world!" << std::endl;
}


// Problem 15
void greetUser() {
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;
}


// Problem 16
int maxNumber(int a, int b) {
    return (a > b) ? a : b;
}


// Problem 17
int factorial(int n) {
    int num = 1;
    for (; n > 0; n--) {
        num *= n;
    }
    return num;
}


// Problem 18
void printRectangle(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}



int main() {
    std::cout << "START EXECUTION\n\n";

    // solve_problems_1();
    // solve_problems_2();
    // solveFeb6();
    // solveFeb13();

    solveFeb20();

    // welcomeMessage();
    // greetUser();

    // int x, y;
    // std::cin >> x >> y;
    // std::cout << maxNumber(x, y) << std::endl;

    // int n;
    // std::cin >> n;
    // std::cout << factorial(n) << std::endl;

    int w, h;
    std::cin >> w >> h;
    printRectangle(w, h);


    return 0;
};




