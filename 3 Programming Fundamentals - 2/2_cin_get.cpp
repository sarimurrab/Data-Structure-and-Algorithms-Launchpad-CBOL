#include <iostream>
using namespace std;
int main()
{
    char ch;
    //cin >> ch;     // DON"T TAKE WHITE SPACE AND SPECIAL CHAR
    ch = cin.get(); // TAKES ALL SPACIAL CHARACTER AS A INPUT AND ALSO WHITE SPACES
    while (ch != '$')
    {
        cout << ch;
        ch = cin.get();
    }
    return 0;
}
