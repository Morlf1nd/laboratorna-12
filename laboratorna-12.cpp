#include <iostream>
#include <cmath>
int main() {
    setlocale(0, ".1251");

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
    int Minys = 0;
    for (int i = 0; i < kt; i++)
    {
        if (array[i] < 0) {
            Minys += 1;
        }
    }
    std::cout << "К-ть мінусових чисел в масиві= " << Minys << std::endl;

    int Min = 0;
    int sym = 0;
    for (int i = 0; i < kt; i++)
    {
        if (array[i] == 0) {
            Min = i;
        }

    }
    for (int i = Min; i < kt; i++)
    {
        sym += array[i];
    }
    std::cout << "Сумма елементів після нуля: " << sym << std::endl;

    for (int start = 0; start < kt - 1; ++start)
    {

        int small = start;

        for (int current = start + 1; current < kt; ++current)
        {

            if (array[current] < array[small])

                small = current;
        }


        std::swap(array[start], array[small]);
    }


    for (int i = 0; i < kt; ++i)
        std::cout << array[i] << ' ';
}