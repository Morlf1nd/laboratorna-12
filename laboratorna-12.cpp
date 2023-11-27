#include <iostream>
#include <cmath>
#include <algorithm>
int main() {
    setlocale(0, ".1251");
    const int kt = 5;
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
    int array_lenght = 0;
    int A;
    std::cout << "Введіть число А: ";
    std::cin >> A;
    for (int i = 0; i < kt; i++)
    {
        if (array[i] < A) {
            array_lenght++;
        }
    }
    std::cout << "К-ть елементів менших за " << A << " дорівнює " << array_lenght << std::endl;
    int sym = 0;
    int minys = 0;

    for (int i = 0; i < kt; i++)
    {
        if (array[i] < 0) {
            minys = i;
        }
    }

    for (int i = minys + 1; i < kt; i++)
    {
        sym += array[i];
    }
    std::cout << "Сумма елементів після останього від'ємного елементу: " << sym << std::endl;
}