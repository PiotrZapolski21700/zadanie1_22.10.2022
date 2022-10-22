

#include <iostream>
using namespace std;


int main()
{
    cout << "Podaj liczbe osob:" << endl;

    int x;

    cin >> x;

    cout << "Ile pizza ma kawalkow?" << endl;

    int y;

    cin >> y;

    int org = y % x;

    x = (y - org) / x;

    cout << org << " kawa³kow dla organizaotra i po" << x << " na osobe" << endl;
    
}

g