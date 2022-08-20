#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream array100 ("Array_with_100000_element.txt");
	array100 << 100000;
	array100 << endl;
	for(int i=0;i<100000;i++)
		array100 << 2 << " ";
	array100.close();
}