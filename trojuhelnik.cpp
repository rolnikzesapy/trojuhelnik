#include <iostream>
using namespace std;

int main()
{
    int vyber;
    cout << "obvod = 1" << endl << "obsah = 2" << endl; //Výběr mezi obvodem a obsahem
    cout << "tvuj vyber: ";
    cin >> vyber;

    if (vyber == 1)                                     //výpočet obvodu
    {
        float a, b, c;      
        cout << "zadej stranu a: ";                     //vstup
        cin >> a;
        cout << "zadej stranu b: ";
        cin >> b;
        cout << "zadej stranu c: ";
        cin >> c;

        if (a + b > c)                                  //kontrola sestrojení
        {
            if (b + c > a)
            {
                if (c + a > b)
                {
                    cout << a + b + c;                  //výsledek
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
    else if (vyber == 2)                                //výpočet obsahu
    {
        float a, vyskaA;
        cout << "zadej stranu a: ";
        cin >> a;
        cout << "zadej vysku ke strane a: ";
        cin >> vyskaA;

        cout << (a * vyskaA) / 2;                       //výsledek (obsah)
    }
    else
    {
        cout << "error";
    }
}
