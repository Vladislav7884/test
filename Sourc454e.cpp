#include <iostream>
using namespace std;
int main()
{
    setlocale(NULL, "ukr");
    cout << "n = ";
    int n;
    cin >> n;
    int* ar = new int[n];
    cout << "Заповнiть масив:\n";

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ") ";
        cin >> ar[i];
    }

    int math;
    int i, j;

    for (j = 0, i = n - 1; j < i; --i, ++j)
    {
        math = ar[i];
        ar[i] = ar[j];
        ar[j] = math;
    }

    for (int m = 0; m < n; m++)
        cout << "\n" << ar[m] << " ";

    cout << endl;
    delete[] ar;

    return 0;
}