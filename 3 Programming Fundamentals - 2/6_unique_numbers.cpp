#include <iostream>
using namespace std;
int main()
{
    int answer = 0;
    int n, value;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> value;
        answer = answer ^ value;
    }
    cout << answer;
}