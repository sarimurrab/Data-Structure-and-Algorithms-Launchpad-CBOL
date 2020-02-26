#include <iostream>
using namespace std;
void towerOfHanoi(int n, char source, char destination, char helper)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, source, helper, destination);
    cout << "Move " << source << " to " << destination << endl;  // Only one is going
    towerOfHanoi(n - 1, helper, destination, source);
    return;
}
int main()
{
    int n = 2;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}