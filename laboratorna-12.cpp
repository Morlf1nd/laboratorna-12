#include <iostream>
#include <cmath>
int main() {
    setlocale(0, ".1251");
    const int n = 9;
    int a[n] = { 0,1,1,1,4,4,7,9,2 };

    int num = 1;
    int maxn = 1;

    for (int j = 1; j < n; ++j) {
        if (a[j] == a[j - 1]) {
            num++;
        }
        else {

            if (num > maxn) {
                maxn = num;
            }
            num = 1;
        }
    }

    if (num > maxn) {
        maxn = num;
    }

    std::cout << "Найбільша кількість елементів розміщених підряд: " << maxn;
}