#include <iostream>
#include <cstdlib>
using namespace std;

#define MAX 50
void tamGiacPascal(unsigned long long a[MAX][MAX], unsigned long long &n)
{
	cin >> n;
	int i,j;
	for(i=0;i<n;i++) //vòng lặp đầu tiên: từ 0 đến n-1
		for(j=0;j<=n;j++) //vòng lặp thứ hai: từ 0 đến n
		{
			a[i][0] = a[i][i] = 1;
			a[i][j] = a[i-1][j-1] + a[i-1][j];
		}
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

//Tính tổ hợp sử dụng đệ quy
//unsigned long long toHop(unsigned long long k, unsigned long long n)
//{
//	if(k==0 || k==n)
//		return 1;
//	if(k==1)
//		return n;
//	else
//		return toHop(k-1,n-1) + toHop(k,n-1);
//}
//Vẽ tam giác Pascal
//void tamGiacPascal(unsigned long long &soLuong)
//{
//	cin >> soLuong;
//	int i,j;
//	for(i=0;i<soLuong;i++)
//	{
//	 	for(j=0;j<=i;j++)
//			cout << toHop(j,i) << " ";
//		cout << endl;
//	}
//}
int main()
{
//	unsigned long long soLuong;
//	tamGiacPascal(soLuong);
	unsigned long long a[MAX][MAX],n;
	tamGiacPascal(a,n);
	return 0;
}