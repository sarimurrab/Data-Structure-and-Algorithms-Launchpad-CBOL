#include <iostream>
using namespace std;
int function1(int n)
{
    int i = 0;
    int int_part;
    while (i * i <= n)
    {
        int_part = i;
        i = i + 1;
    }
    return int_part;
}
float function_precision(float n, float int_part, float iinncc)
{
    float prec_part;
    while (int_part * int_part <= n)
    {
        prec_part = int_part;
        int_part = int_part + iinncc;
    }
    return prec_part;
}
int main()
{
    int n = 10;
    int int_part = function1(n);
    float prec_part = function_precision(n, int_part, 0.1);
    float sec_part = function_precision(n, prec_part, 0.01);
    float third_part = function_precision(n, sec_part, 0.001);
    cout << int_part << endl;
    cout << prec_part << endl;
    cout << sec_part << endl;
    cout << third_part << endl;
}