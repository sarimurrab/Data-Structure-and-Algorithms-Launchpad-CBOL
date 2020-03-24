#include <iostream>
using namespace std;
void short_string(int x, int y) // ex. to convert from (2,1)  to  NEE
{
    if (x == 0 && y == 0)
    {
        return;
    }
    if (x > 0)
    {
        short_string(x-1, y);
        cout << "E";
    }
    else if (y > 0)
    {
        short_string(x, y-1);
        cout << "N";
    }
    if (x < 0)
    {
        short_string(x+1, y);
        cout << "W";
    }
    if (y < 0)
    {
        short_string(x, y+1);
        cout << "S";
    }
    return;
}

int main()
{
    char ch;
    ch = cin.get();
    int x = 0, y = 0;
    while (ch != '.')
    {
        if (ch == 'N')
        {
            y = y + 1;
        }
        else if (ch == 'E')
        {
            x = x + 1;
        }
        else if (ch == 'S')
        {
            y = y - 1;
        }
        else if (ch == 'W')
        {
            x = x - 1;
        }

        ch = cin.get();
    }
    cout << "(x,y)="
         << "(" << x << "," << y << ")";
    cout<<endl;
    short_string(x, y);

    return 0;
}
