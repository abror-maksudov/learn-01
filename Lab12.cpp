#include <iostream>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void square(int* num) {
    *num = (*num) * (*num);
}

int solveLab12() {
    const std::string LINE(40, '=');
    std::cout << LINE + '\n';

    // Problem 1
    // int x = 10;
    // int* ptr = &x;
    // std::cout << x << std::endl;
    // std::cout << ptr << std::endl;
    // std::cout << *ptr << std::endl;


    // Problem 2
    // int x = 5;
    // std::cout << x << std::endl;
    // int* ptr = &x;
    // *ptr = 20;
    // std::cout << x << std::endl;


    // Problem 3
    // int x = 3, y = 7;
    // std::cout << x << " " << y << std::endl;
    // swap(&x, &y);
    // std::cout << x << " " << y << std::endl;


    // Problem 4
    // int arr[5] = {1, 2, 3, 4, 5};
    // int* ptr = arr;
    // for (int i = 0; i < 5; i++) {
    //     std::cout << *(ptr + i) << " ";
    // }
    // std::cout << std::endl;


    // Problem 5
    // int arr[5] = {10, 20, 30, 40, 50};
    // int* ptr = arr;
    // int* mid = ptr + 2;
    // std::cout << *mid << std::endl;


    // Problem 6
    // int x = 6;
    // square(&x);
    // std::cout << x << std::endl;


    // Problem 7
    // int arr[5] = {1, 2, 3, 4, 5};
    // int* ptr = arr;
    // std::cout << sizeof(arr) << std::endl;
    // std::cout << sizeof(ptr) << std::endl;


    // Problem 8
    // int x = 42;
    // void* ptr = &x;
    // std::cout << *((int*)ptr) << std::endl;


    // Problem 9

    // Problem 10
    // int a, b;
    // std::cin >> a >> b;
    // int* ptrA = &a;
    // int* ptrB = &b;
    // std::cout << *ptrA << " " << *ptrB << std::endl;


    // Problem 13
    // int arr[10] = {5, 12, 8, 3, 9, 7, 1, 4, 2, 6};
    // int* ptrA = arr;
    // for (int i = 0; i < 10; i++) {
    //     std::cout << (ptrA + i) << " " << *(ptrA + i) << std::endl;
    // }


    // Problem 14
    // int message = 42;
    // int* ptr = &message;
    // std::cout << *ptr << std::endl;


    // Problem 15
    // int treasures[] = {10, 20, 30, 40, 50};
    // int* ptr = treasures;
    // ptr = ptr + 4;
    // std::cout << *ptr << std::endl;


    // Problem 16
    // int score = 75;
    // int* ptr = &score;
    // *ptr = *ptr + 10;
    // std::cout << score << std::endl;

    return 0;
}