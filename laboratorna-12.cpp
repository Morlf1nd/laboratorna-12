#include <iostream>
#include <cmath>
#include <cstdlib> 
#include <ctime> 
#include <time.h> 

int main() {
    setlocale(0, ".1251");
    const int array_lenght = 10;
    int array[array_lenght];
    int min = -100;
    int max = 100;
    int posled = 0;
    for (int i = 0; i < array_lenght; i++)
    {
        array[i] = min + rand() % (max - min + 1);;
        std::cout << i << " " << array[i] << std::endl;
    }
    for (int i = 0; i < array_lenght; i++)
    {
        if (array[i] < array[i + 1]) {
            posled += 1;
        }
    }
    std::cout << "К-ть послідовних чисел в масиві: " << posled;

}