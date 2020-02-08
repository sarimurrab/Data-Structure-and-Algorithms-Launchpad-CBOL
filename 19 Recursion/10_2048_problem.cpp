#include <iostream>
using namespace std;
void convToName(int n, int size)
{
    if (size == 0)
    {
        return;
    }
    switch (n % 10)
    {
    case 0:
        convToName(n / 10, size - 1);
        cout << "Zero ";
        return;
    case 1:
        convToName(n / 10, size - 1);
        cout << "One ";
        return;
    case 2:
        convToName(n / 10, size - 1);
        cout << "Two ";
        return;
    case 3:
        convToName(n / 10, size - 1);
        cout << "Three ";
        return;
    case 4:
        convToName(n / 10, size - 1);
        cout << "Four ";
        return;
    case 5:
        convToName(n / 10, size - 1);
        cout << "Five ";
        return;
    case 6:
        convToName(n / 10, size - 1);
        cout << "Six ";
        return;
    case 7:
        convToName(n / 10, size - 1);
        cout << "Seven ";
        return;
    case 8:
        convToName(n / 10, size - 1);
        cout << "Eight ";
        return;
    case 9:
        convToName(n / 10, size - 1);
        cout << "Nine ";
        return;
    }
}
int main()
{
    int n, size = 4;
    n = 2000;
    convToName(n, size);
    return 0;
}