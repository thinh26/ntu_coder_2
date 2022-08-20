#include <iostream>
using namespace std;

void Dong_ho(int &h, int &p, int &s)
{
    if(p==59 && s==59)
    {
        if(h==23)
        {
            h=p=s=0;
        }
        else
        {
            h++;
            p = 0;
            s = 0;
        }
    }
        else if(p<59 && s==59)
        {
            p++;
            s=0;
        }
    else
        s++;
    cout << h << " " << p << " " << s;
}
int main()
{
    int h,p,s;
    cin >> h >> p >> s;
    Dong_ho(h,p,s);
}