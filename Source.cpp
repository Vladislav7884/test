int main()
{
    setlocale(NULL, "ukr");
    int a, b, c;
    cout << "Введiть a,b,c \n";
    cout << "a)";
    cin >> a; //Ввести число а
    cout << "b)";
    cin >> b; //Ввести число c
    cout << "c)"; 
    cin >> c; //Ввести число b
    cout << "min = " << min({ (a),(b),(c) }); // Вираховується мінімальне значення.
    return 0;
}
