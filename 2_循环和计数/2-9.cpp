#include <iostream>

using std::cin;		using std::cout;
using std::endl;

void com ( int a, int b ){
	if ( a > b )
		cout << a << " > " << b << endl;
	else if ( a == b )
		cout << a << " = " << b << endl;
	else
		cout << a << " < " << b << endl;
}

int main(){

	cout << "Please input two numbers:" << endl;
	int a, b;
	cin >> a >> b;
	com(a, b);

	return 0;
}
