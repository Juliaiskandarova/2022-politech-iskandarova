
#include <iostream>
using namespace std;

int* insertX(int n, int arr[],
    int x, int p)
{
    int i;


    n++;


    for (i = n; i >= p; i--)
        arr[i] = arr[i - 1];


    arr[p - 1] = x;

    return arr;
}


int main()
{
    int arr[100] = { 0 };
    int i, x, p, n = 10;


    for (i = 0; i < 10; i++)
        arr[i] = i + 1;


    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;


    x = 50;


    p = 5;


    insertX(n, arr, x, p);


    for (i = 0; i < n + 1; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}