#include <iostream>
#include <climits>
using namespace std;
int main()
{
    // WRAP AROUND CREATES THE ERROR

    int x = INT_MIN;
    x = x - 1;
    cout << x;
}