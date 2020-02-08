#include <iostream>
using namespace std;
int print_inc(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return 1;
    }
    print_inc(n - 1);
    cout << n << " ";
    return 1;
}

int print_dec(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return 1;
    }
    cout << n << " ";
    print_dec(n - 1);
    return 1;
}
int print(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return 1;
    }
    cout << n << " ";
    
    print(n - 1);
    cout << n << " ";
    return 1;
}
int main()
{
    int n;
    cin >> n;
    //print_inc(n);
    //cout << endl;
    //print_dec(n);
    print(n);
}