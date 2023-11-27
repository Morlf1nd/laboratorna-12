#include <iostream>
#include <cmath>
#include <algorithm>
int main() {
    setlocale(0, ".1251");
    int sum = 0;
    int dobutok = 1;
    const int kt = 4;
    int array[kt];
    for (int i = 0; i < kt; i++)
    {
        std::cout << "Введіть " << i << " елемент ";
        std::cin >> array[i];
        if (array[i] >= INT_MIN && array[i] <= INT_MAX) {

        }
        else {
            std::cout << "Недійсне ціле число!";
        }

    }

    for (int i = 0; i < kt; ++i) {
        if (array[i] < 0) {
            sum += array[i];
        }
    }
    int max_index = 0;
    int min_index = 0;

    for (int i = 1; i < kt; ++i) {
        if (array[i] > array[max_index]) {
            max_index = i;
        }
        if (array[i] < array[min_index]) {
            min_index = i;
        }
    }
    for (int i = min_index; i < max_index; ++i) {
        dobutok *= array[i];
    }

    std::cout << "Сума масиву: " << sum << std::endl;
    std::cout << "Добуток масиву: " << dobutok << std::endl;

    std::sort(array, array + kt);
    for (int i = 0; i < kt; ++i) {
        std::cout << array[i] << " ";
    }
}