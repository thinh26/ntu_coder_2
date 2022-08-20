#include <iostream>
#include <array>
using namespace std;

void demTu(string &tu)
{
	cin >> tu;
	int doDai = tu.length();
	int i, count = 0;
	for(i=0;i<doDai;i++)
	{
	 	if(tu[i]=='.' && tu[i+1]!='.')
	 	{
	 		count++;
		}	
	}
	if(tu.back()=='.' && tu.front()=='.')
		count--;
	if(tu.back()!='.' && tu.front()!='.')
		count++;
	cout << count;
}

int main()
{
	string tu;
	demTu(tu);
}