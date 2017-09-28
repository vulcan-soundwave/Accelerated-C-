#include <iostream>

void calc( int l, int r){
	int re = 1;
	for ( int i = l; i < r; i++ ){
		re *= i;
	}
	std::cout << "[1,10) product(乘积):		" << re << std::endl;
}

int main(){

	calc(1, 10);

	return 0;
}
