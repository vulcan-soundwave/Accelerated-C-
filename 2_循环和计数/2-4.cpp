#include <iostream>
#include <string>

using std::cin;		using std::cout;
using std::endl;	using std::string;
int main(){

	cout << "Please enter your first name:" << endl;

	string name;
	cin >> name;

	const string greeting = "Hello, " + name + "!";
	
	const int pad = 1;
	const int rows = (pad<<1) + 3;
	const string::size_type cols = greeting.size() + (pad<<1) + 2;

	const string first(cols, '*');			//框
	string temp(cols-2, ' ');
	const string blank = "*" + temp + "*";	//空白行
	temp.assign(pad, ' ');

	for ( int r = 0; r != rows; ++r ){
		if( r == 0 || r == rows - 1 ){
			cout << first;
		}
		else if( r == pad + 1 ){
			cout << "*" << temp << greeting << temp << "*";
		}
		else{
			cout << blank;
		}
		cout << endl;
	}

	return 0;
}
/*
error:
2-4.cpp:20:25: 错误：从类型‘const char*’到类型‘char’的转换无效 [-fpermissive]
  string temp(cols-2, " ");
solution:
"" --> ''
---------------------------------------------------------------------------------
error:
2-4.cpp: 在函数‘int main()’中:
2-4.cpp:22:34: 错误：对‘(std::string {aka std::basic_string<char>}) (long unsigned int, char)’的调用没有匹配
  temp(pad<<1, ' ');
                                  ^
solution:
temp.assign(pad<<1, ' ');

*/
