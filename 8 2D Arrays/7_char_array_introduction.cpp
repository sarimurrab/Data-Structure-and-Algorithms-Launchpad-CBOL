#include <iostream>
using namespace std;
int main()
{
    //input as a WORD
    char arr[][10] = {"abc", "def"};
    arr[0][0] = 'A';

    //Input as a Single Character
    char ch[][10] = {{'a', 'b', 'c', '\0'}, {'a', 'b', 'c', '\0'}};
    //cout << ch[0];

    char a[10];
    
        for (int j = 0; j <= 4; j++)
        {
            cin >> a[j];
        }
    
    for (int i = 0; i <= 4; i++)
    {
        cout << a[i];
    }
}