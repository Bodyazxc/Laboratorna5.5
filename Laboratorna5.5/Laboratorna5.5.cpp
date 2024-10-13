#include <iostream>
#include <Windows.h>

using namespace std;

int f(int n, int& depth, int level) {
    if (level > depth) {
        depth = level;
    }
    if (n == 0) return 0; // ������� �������
    cout << "г���� ������: " << level << endl;
    return 1 + f(n & (n - 1), depth, level + 1);  // ����������� �������
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    int depth = 0;

    cout << "������ �����: ";
    cin >> n;

    int result = f(n, depth, 1);
    cout << "ʳ������ ������� � ��������� ������������ ����� " << n << " �������: " << result << endl;
    cout << "������� ������: " << depth << endl;

    return 0;
}