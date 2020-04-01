#include <iostream>
using namespace std;
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    // int n1, n2;
    // cin >> n1;
    // cin >> n2;
    // int a = min(n1, n2);
    // cout << a;
    int n1, c1, c2, c3, c4, m, n, ai;

    cin >> n1;
    while (n1 != 0)
    {
        cin >> c1;
        cin >> c2;
        cin >> c3;
        cin >> c4;
        cin >> n;
        cin >> m;

        int temp = 0; //for cost of rikshaw
        for (int i = 1; i <= n; i++)
        {
            cin >> ai;
            temp = temp + min(ai * c1, c2);
        }
        int cost_of_rikshaw = min(temp, c3);

        temp = 0; //for cost of cabs
        for (int i = 1; i <= m; i++)
        {
            cin >> ai;
            temp = temp + min(ai * c1, c2);
        }
        int cost_of_cab = min(temp, c3);

        int total_cost = min(cost_of_rikshaw + cost_of_cab, c4);
        cout << total_cost << endl;

        n1--;
    }
}