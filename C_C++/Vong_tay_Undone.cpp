#include <iostream>
using namespace std;

int main(){
	int n, lhand, rhand;
	cin >> n;
	if ((n / 7) % 2 == 0){
		rhand = n % 7; 
		lhand = 7 - rhand;
	}else{
		lhand = n % 7;
		rhand = 7 - lhand;
	};
	cout << lhand << " " << rhand;
	return 0;
}