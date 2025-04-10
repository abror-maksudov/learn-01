#include <iostream>

int solveLab11() {
    const std::string LINE(40, '=');
    std::cout << LINE + '\n';

    // Problem 1
    // int n, m;
    // std::cin >> n >> m;
    // int matrix[100][100];
    // int sum = 0;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         std::cin >> matrix[i][j];
    //         sum += matrix[i][j];
    //     }
    // }
    // std::cout << sum << std::endl;


    // Problem 2
    // int n, m;
    // std::cin >> n >> m;
    // int matrix[100][100];
    // for (int i = 0; i < n; i++) {
    //     int max = -1000000;
    //     for (int j = 0; j < m; j++) {
    //         std::cin >> matrix[i][j];
    //         if (matrix[i][j] > max) {
    //             max = matrix[i][j];
    //         }
    //     }
    //     std::cout << max << " ";
    // }
    // std::cout << std::endl;


    // Problem 3
    // int n, m;
    // std::cin >> n >> m;
    // int matrix[100][100];
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         std::cin >> matrix[i][j];
    //     }
    // }
    // for (int j = 0; j < m; j++) {
    //     int sum = 0;
    //     for (int i = 0; i < n; i++) {
    //         sum += matrix[i][j];
    //     }
    //     std::cout << sum << " ";
    // }
    // std::cout << std::endl;


    // Problem 4
    // int n;
    // std::cin >> n;
    // int matrix[100][100];
    // int sum = 0;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         std::cin >> matrix[i][j];
    //         if (i == j) {
    //             sum += matrix[i][j];
    //         }
    //     }
    // }
    // std::cout << sum << std::endl;


    // Problem 5
    // int n, m;
    // std::cin >> n >> m;
    // int matrix[100][100];
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         std::cin >> matrix[i][j];
    //     }
    // }
    // for (int j = 0; j < m; j++) {
    //     for (int i = 0; i < n; i++) {
    //         std::cout << matrix[i][j] << " ";
    //     }
    //     std::cout << std::endl;
    // }


    // Problem 6


    // Problem 7


    // Problem 1
    // char str[101];
    // std::cin >> str;
    // int vowels = 0;
    // int consonants = 0;
    // for (int i = 0; str[i] != '\0'; i++) {
    //     char ch = str[i];
    //     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
    //         vowels++;
    //     } else {
    //         consonants++;
    //     }
    // }
    // std::cout << vowels << " " << consonants << std::endl;


    // Problem 2
    // char str[101];
    // std::cin >> str;
    // int len = 0;
    // while (str[len] != '\0') {
    //     len++;
    // }
    // for (int i = len - 1; i >= 0; i--) {
    //     std::cout << str[i];
    // }
    // std::cout << std::endl;


    // Problem 3
    // char str[101];
    // std::cin >> str;
    // int len = 0;
    // while (str[len] != '\0') {
    //     len++;
    // }
    // bool is_palindrome = true;
    // for (int i = 0; i < len / 2; i++) {
    //     if (str[i] != str[len - 1 - i]) {
    //         is_palindrome = false;
    //         break;
    //     }
    // }
    // if (is_palindrome) {
    //     std::cout << "Yes" << std::endl;
    // } else {
    //     std::cout << "No" << std::endl;
    // }


    // Problem 4
    // char str[101];
    // std::cin >> str;
    // int freq[26] = {0};
    // for (int i = 0; str[i] != '\0'; i++) {
    //     freq[str[i] - 'a']++;
    // }
    // int max_freq = 0;
    // char max_char = 'a';
    // for (int i = 0; i < 26; i++) {
    //     if (freq[i] > max_freq) {
    //         max_freq = freq[i];
    //         max_char = 'a' + i;
    //     }
    // }
    // std::cout << max_char << std::endl;


    // Problem 5
    char str[101];
    std::cin >> str;
    bool seen[26] = {false};
    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        if (!seen[index]) {
            std::cout << str[i];
            seen[index] = true;
        }
    }
    std::cout << std::endl;


    // Problem 6
    // Problem 7


    return 0;
}