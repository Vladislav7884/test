#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    setlocale(NULL, "ukr");
    int a, b, c;
    cout << "¬ведiть a,b,c \n";
    cout << "a)";
    cin >> a;
    cout << "b)";
    cin >> b;
    cout << "c)";
    cin >> c;
    cout << "min = " << min({ (a),(b),(c) });
    return 0;
}

