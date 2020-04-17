#include <iostream>
using namespace std;
int main()
{
    int N, M, K, S;
    cin >> N >> M>>K >> S;
    char arr[N][M];
    

    //INPUT
    for (int i = 0; i <= N - 1; i++)
    {
        for (int j = 0; j <= M - 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    //CODE FOR STRENGTH
    bool success = true;
    for (int i = 0; i <= N - 1; i++)
    {
        for (int j = 0; j <= M - 1; j++)
        {
            if (S < K)
            {
                success = false;
                break;
            }

            if (arr[i][j] == '.')
            {
                S = S - 2;
            }
            else if (arr[i][j] == '*')
            {
                S = S + 5;
            }
            else
            {
                break;
            }
            if (j != M - 1)
            {
                S = S - 1;
            }
        }
    }

    //CHECKING AND COMPUTE
    if (success)
    {
        cout << "Yes" << endl;
        cout << S;
    }
    else
    {
        cout << "No" << endl;
        cout << S;
    }
}