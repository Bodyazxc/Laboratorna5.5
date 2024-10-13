#include <iostream>
#include <Windows.h>

using namespace std;

int f(int n, int& depth, int level) {
    if (level > depth) {
        depth = level;
    }
    if (n == 0) return 0; // базовий випадок
    cout << "Рівень рекурсії: " << level << endl;
    return 1 + f(n & (n - 1), depth, level + 1);  // рекурсивний випадок
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    int depth = 0;

    cout << "Введіть число: ";
    cin >> n;

    int result = f(n, depth, 1);
    cout << "Кількість одиниць у двійковому представленні числа " << n << " дорівнює: " << result << endl;
    cout << "Глибина рекурсії: " << depth << endl;

    return 0;
}