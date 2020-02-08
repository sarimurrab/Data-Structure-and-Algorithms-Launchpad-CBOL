#include <iostream>
#include <math.h>
using namespace std;
int convertToInteger(string str, int n)
{
    if (n == 0)
    {
        return 0;
    }
    int sum = (str[0] - '0') * pow(10, n - 1) + convertToInteger(str.substr(1), n - 1);
    return sum;
}
int main()
{
    string str = "12345";
    cout << typeid(str).name() << endl;
    int result = convertToInteger(str, 5);
    cout << result << endl;
    cout << typeid(result).name();

    return 0;
}