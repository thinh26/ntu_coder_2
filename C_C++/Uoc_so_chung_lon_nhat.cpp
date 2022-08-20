#include <iostream>
using namespace std;

int main()
{
    unsigned long long n1, n2;
	cout << "Enter two integers: ";
    cin >> n1 >> n2;

    // if user enters negative number, sign of the number is changed to positive
    n1 = ( n1 > 0) ? n1 : -n1;
    n2 = ( n2 > 0) ? n2 : -n2;

    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
        cout << endl;
        cout << n1 << " " << n2;
        cout << endl;
    }
    cout << endl;
    cout << "GCD = " << n1;

    return 0;
}