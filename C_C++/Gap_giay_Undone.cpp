#include <stdio.h>

int main(){
	int a, b, k, g = 0, v = 1;
	scanf("%d %d", &a, &b);
	k = b / a;
	while (v < k){
		v *= 2;
		g++;
	}
	if (v > k){ g--; }
	printf("%d", g);
	return 0;
}
