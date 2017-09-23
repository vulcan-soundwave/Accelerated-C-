#include <iostream>
#include<string>
int main()
{

	{
		std::string s = "a string";
		std::string x;
		{
			//std::string x = s + ", really";
			x = s + ", really";
			std::cout << s << std::endl;}
		std::cout << x << std::endl;}

	return 0;
}

