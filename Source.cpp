#include <iostream>
#include <cmath>
#include "windows.h"

using namespace std;

int S(int p, int q);
int S(int p, int q, int r);
int f(int f);

int S(int p, int q) {
    return S(p, q, 0);
}

int S(int i, int q, int r)
{
    if (i < q) {
        return f(i) + S(i + 1, q, ++r);
    }
    else {
        cout << "������� ������: " << r << endl;
        return i == q ? f(i) : 0;
    }
}

int f(int i)
{
    if (i % 10 > 0) {
        return i % 10;
    }
    else if (i == 0) {
        return 0;
    }
    else {
        return f(i / 10);
    }
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int p, q;
    cout << "������ p: "; cin >> p;
    cout << "������ q: "; cin >> q;
    cout << "___________________________________" << endl;
    cout << "����: " << S(p, q) << endl;
    cout << "___________________________________" << endl;
}
