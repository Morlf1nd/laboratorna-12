#include <iostream>
#include <cmath>
int main() {
    setlocale(0, ".1251");
    const int kt = 4;
    int array[kt];
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
        std::cout << "Введіть " << i << " елемент ";
        std::cin >> array[i];

    }

    for (int i = 0; i < kt; ++i) {
        if (array[i] < 0) {
            array[i] = 0;
        }
        std::cout << array[i] << " ";
    }
}