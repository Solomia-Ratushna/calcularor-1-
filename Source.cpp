#include <iostream>
using namespace std;
int main()
{
    while (true)
    {

        double a, b, c;
        char z;
        string t;
        cout << "First number ";
        cin >> a;
        cout << "Second number ";
        cin >> b;
        cout << "Action with numbers ";
        cin >> z;

        if (z == '+')
        {
            c = a + b;
            cout << "Result " << c << endl;
        }
        else if (z == '-')
        {
            c = a - b;
            cout << "Result  " << c << endl;
        }
        else if (z == '*')
        {
            c = a * b;
            cout << "Result  " << c << endl;
        }
        else if (z == '/')
        {
            c = a / b;
            cout << "Result  " << c << endl;
        }
        cout << "Keep? "; cin >> t;
        if (t != "Yes") break;

    }
    return 0;
}