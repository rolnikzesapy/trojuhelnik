#include <iostream>
using namespace std;

int main()
{
    int vyber;
    cout << "obvod = 1" << endl << "obsah = 2" << endl;
    cout << "tvuj vyber: ";
    cin >> vyber;

    if (vyber == 1)
    {
        float a, b, c;
        cout << "zadej stranu a: ";
        cin >> a;
        cout << "zadej stranu b: ";
        cin >> b;
        cout << "zadej stranu c: ";
        cin >> c;

        if (a + b > c)
        {
            if (b + c > a)
            {
                if (c + a > b)
                {
                    cout << a + b + c;
                }
                else
                {
                    cout << "error";
                }
            }
            else
            {
                cout << "error";
            }
        }
        else
        {
            cout << "error";
        }
    }
    else if (vyber == 2)
    {
        float a, vyskaA;
        cout << "zadej stranu a: ";
        cin >> a;
        cout << "zadej vysku ke strane a: ";
        cin >> vyskaA;

        cout << (a * vyskaA) / 2;
    }
    else
    {
        cout << "error";
    }
}
