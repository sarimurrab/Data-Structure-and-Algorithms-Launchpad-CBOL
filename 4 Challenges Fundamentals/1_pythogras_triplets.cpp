#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int n, temp1, temp2;
    int flag = -1;
    cin >> n;
    temp1 = n + 1;
    temp2 = n + 2;
    while (temp2 <= pow(10, 9))
    {
        if ((pow(temp2, 2) - pow(n, 2)) / temp1 == temp1)
        {
            flag = 1;
            break;
        }
        temp1 = temp1 + 1;
        temp2 = temp2 + 1;
    }

    if (flag == 1)
    {
        cout << temp1 << " " << temp2;
    }
    else
    {
        cout << flag;
    }

    return 0;
}