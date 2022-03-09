#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{   int a, b;
    cout << "Unesite 2 broja ";
    cin >> a >>b;
    cout <<  "Unesite 2 broja ";
    cin >> a >>b;
    cout <<  "zbir: "<<a+b<<endl;
    cout <<  "razlika: "<<a-b<<endl;
    cout <<  "proizvod: "<<a*b<<endl;
    if (b!=0) cout  << "količnik: "<<a/b<<endl;
    else cout <<  "Dijeljenje nulom mije definisano!"<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
