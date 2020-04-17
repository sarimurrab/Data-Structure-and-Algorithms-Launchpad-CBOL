#include <iostream>
using namespace std;
int main()
{

    //DIFFERENCE BW CHAR and INTEGER ARRAY
    int a[10] = {1, 2, 3, 4};
    cout << a; //first address of int array

    cout << endl;

    char arr[] = {'a', 'b', 'c', '\0', 'd'};
    cout << arr;         // OUTPUT abc
    cout << sizeof(arr); // OUTPUT 5

    cout << endl;

    char arr1[] = "Sarim"; //SIZE = 6, there is automatically '\0' at the end
    cout << arr1;
    cout << sizeof(arr1);
}