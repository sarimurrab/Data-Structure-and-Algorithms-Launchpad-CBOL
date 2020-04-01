#include <iostream>
using namespace std;
int main()
{
    int min, max, step, c;
    cin >> min;
    cin >> max;
    cin >> step;
    while (0 < min < 100 && min < max < 500 && 0 < step)
    {
        if (min > max)
        {
            break;
        }
        c = (5 * (min - 32)) / 9;
        cout << min << " " << c << endl;
        min = min + step;
    }
    return 0;
}