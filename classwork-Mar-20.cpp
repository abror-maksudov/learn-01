#include <iostream>
#include <algorithm>
#include <cstdlib>

int find_min(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int indexOfLargestElement(double array[], int size) {
    if (size <= 0) {
        return -1;
    }

    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] >= array[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

bool strictlyEqual(const int list1[], const int list2[], int size) {
    for (int i = 0; i < size; i++) {
        if (list1[i] != list2[i]) {
            return false;
        }
    }
    return true;
}

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int solveMar20() {
    const std::string LINE(40, '=');
    std::cout << LINE + '\n';

    // Problem 1
    // std::cout << "Problem 1\n";
    // int n;
    // std::cout << "Enter n: ";
    // std::cin >> n;
    // int arr[n];
    // int sum = 0;
    // std::cout << "Enter " << n << " integers: ";
    // for (int i = 0; i < n; i++) {
    //     std::cin >> arr[i];
    //     sum += arr[i];
    // }
    // std::cout << "sum=" << sum << std::endl;
    // std::cout << LINE + '\n';


    // Problem 2
    // std::cout << "Problem 2\n";
    // int n;
    // std::cout << "Enter n: ";
    // std::cin >> n;
    // double arr[n];
    // double avg = 0;
    // std::cout << "Enter " << n << " integers: ";
    // for (int i = 0; i < n; i++) {
    //     std::cin >> arr[i];
    //     avg += arr[i]/n;
    // }
    // std::cout << "avg=" << avg << std::endl;
    // std::cout << LINE + '\n';


    // Problem 3
    // std::cout << "Problem 3\n";
    // int n;
    // std::cout << "Enter n: ";
    // std::cin >> n;
    // int arr[n];
    // std::cout << "Enter " << n << " numbers: ";
    // for (int i = 0; i < n; i++) {
    //     std::cin >> arr[i];
    // }
    // int min = find_min(arr, n);
    // std::cout << "Min=" << min << std::endl;
    // std::cout << LINE + '\n';


    // Problem 4
    // std::cout << "Problem 4\n";
    // const int SIZE = 15;
    // double arr[SIZE];
    // std::cout << "Enter " << SIZE << " numbers: ";
    // for (int i = 0; i < SIZE; i++) {
    //     std::cin >> arr[i];
    // }
    // int largestIndex = indexOfLargestElement(arr, SIZE);
    // std::cout << "Index of largest element: " << largestIndex << std::endl;
    // std::cout << LINE + '\n';


    // Problem 5
    // std::cout << "Problem 5\n";
    // int size;
    // std::cout << "Enter the size of the lists: ";
    // std::cin >> size;
    // int list1[size], list2[size];
    // std::cout << "Enter " << size << " elements for list1: ";
    // for (int i = 0; i < size; i++) {
    //     std::cin >> list1[i];
    // }
    // std::cout << "Enter " << size << " elements for list2: ";
    // for (int i = 0; i < size; i++) {
    //     std::cin >> list2[i];
    // }
    // if (strictlyEqual(list1, list2, size)) {
    //     std::cout << "The lists are strictly identical.\n";
    // } else {
    //     std::cout << "The lists are not strictly identical.\n";
    // }
    // std::cout << LINE + '\n';


    // Problem 6
    // std::cout << "Problem 6\n";
    // int frequency[26] = {0};
    // std::cout << "Enter characters (0 to stop): ";
    // char ch;
    // while (true) {
    //     std::cin >> ch;
    //     if (ch == '0') {
    //         break;
    //     }
    //     if (ch >= 'a' && ch <= 'z') {
    //         frequency[ch - 'a']++;
    //     }
    // }
    // std::cout << "Letter frequencies:\n";
    // for (int i = 0; i < 26; i++) {
    //     if (frequency[i] > 0) {
    //         std::cout << (char)('a' + i) << ": " << frequency[i] << std::endl;
    //     }
    // }
    // std::cout << LINE + '\n';


    // Problem 7
    // std::cout << "Problem 7\n";
    // int n;
    // std::cout << "Enter n: ";
    // std::cin >> n;
    // int arr[n];
    // std::cout << "Enter " << n << " numbers: ";
    // for (int i = 0; i < n; i++) {
    //     std::cin >> arr[i];
    // }
    // std::sort(arr, arr + n);
    // std::cout << "Sorted output: ";
    // for (int i = 0; i < n; i++) {
    //     std::cout << arr[i];
    // }
    // std::cout << std::endl;
    // std::cout << LINE + '\n';


    // Problem 8
    // std::cout << "Problem 8\n";
    // const int ROLLS = 10000;
    // int occurrences[6] = {0};
    // std::srand(42);
    // for (int i = 0; i < ROLLS; i++) {
    //     int roll = (std::rand() % 6) + 1;
    //     occurrences[roll - 1]++;
    // }
    // for (int i = 0; i < 6; i++) {
    //     std::cout << "Value " << (i + 1) << ": " << occurrences[i] << " times\n";
    // }
    // std::cout << LINE + '\n';


    // Problem 9
    // std::cout << "Problem 9\n";
    // int n;
    // std::cout << "Enter n: ";
    // std::cin >> n;
    // int arr[n];
    // std::cout << "Enter " << n << " numbers: ";
    // for (int i = 0; i < n; i++) {
    //     std::cin >> arr[i];
    // }
    // reverseArray(arr, 0, n - 1);
    // std::cout << "Reversed output: ";
    // for (int i = 0; i < n; i++) {
    //     std::cout << arr[i] << " ";
    // }
    // std::cout << std::endl;
    // std::cout << LINE + '\n';


    // Problem 10
    // std::cout << "Problem 10\n";
    // int n;
    // std::cout << "Enter n: ";
    // std::cin >> n;
    // int arr[n];
    // std::cout << "Enter " << n << " numbers: ";
    // for (int i = 0; i < n; i++) {
    //     std::cin >> arr[i];
    // }
    // if (isSorted(arr, n)) {
    //     std::cout << "YES\n";
    // } else {
    //     std::cout << "NO\n";
    // }
    // std::cout << LINE + '\n';



    return 0;
}