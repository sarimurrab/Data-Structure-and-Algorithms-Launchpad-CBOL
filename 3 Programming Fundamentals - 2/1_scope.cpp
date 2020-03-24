#include <iostream>
using namespace std;
int x = 100; // GLOBAL
int main()
{
    int x = 10;        //LOCAL
    cout << x << endl; //LOCAL ACCESS
    cout << ::x;       //GLOBAL ACCESS
}
