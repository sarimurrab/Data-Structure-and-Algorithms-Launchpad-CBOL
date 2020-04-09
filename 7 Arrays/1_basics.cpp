#include <iostream>
using namespace std;
int main()
{
    //int a[10] ; //*************will to  garbage value**************

    int a[10] = {0}; //will lead to all value initialized with zero

    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < 11; j++)
    {
        cout << a[j] << ",";
    }
}