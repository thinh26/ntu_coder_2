#include <stdio.h>

void so_hoan_hao()
{
	int n;
	scanf("%d",&n);
	int tong = 0;
	for(int i=1;i<n;i++)
		if(n%i==0)
			tong = tong + i;
	if(tong==n)
		printf("YES");
	else
		printf("NO");
}
int main()
{
	so_hoan_hao();
}