#include <iostream>
#include <cmath>
#include <algorithm>
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
    int Min = array[0];
    for (int i = 1; i < kt; i++)
    {

        if (fabs(array[i]) < Min)
        {
            Min = fabs(array[i]);
        }
    }
    std::cout << "Мінімальне число в масиві за модулем це: " << Min << std::endl;

    int nylik=0;
    for (int i = 0; i < kt; i++)
    {
        if (array[i] == 0)
        {
            nylik = i;
        }
    }



    int syma = 0;
    for (int i = nylik; i < kt; i++)
    {
        syma += fabs(array[i]);
    }
    std::cout << "Сумма модулів елементів масиву дорівнює: " << syma << std::endl;


}