#include <iostream>
using namespace std;
void Bieu_dien_nhi_phan(int a[], unsigned long long &n)
{
    cin >> n;
    unsigned long long temp = n;
    int i=0;
    int count=0;
    while (temp!=0)
    {
        if (temp % 2 == 0)
            a[i] = 0;
        else
            a[i] = 1;
        i++;
        count++;
        temp /=2;
    }
    for (i=count-1;i>=0;i--)
        cout << a[i];
}
int main(int argc, char *argv[])
{
	unsigned long long n;
	int a[100];
	Bieu_dien_nhi_phan(a,n);
}