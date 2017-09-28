#include <iostream>
#include <string>

using std::cin;		using std::cout;
using std::endl;	using std::string;

int main(){

	cout << "Please enter your first name:" << endl;

	string name;
	cin >> name;

	const string greeting = "Hello, " + name + "!";

	//重写代码, r(rows)-行 c(column)-列
	const int rows = 3;
	const string::size_type cols = greeting.size() + 2;

	cout << endl;
	//一个坐标一个坐标的输出
	for (int r=0; r!=rows; ++r){
		string::size_type c = 0;
		while(c != cols){
			if( r == 1 && c == 1 ){
				cout << greeting;
				c += greeting.size();
			}
			else{
				cout << "*";
				c++;
			}
		}
		cout << endl;
	}

	return 0;
}
