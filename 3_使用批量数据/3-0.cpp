#include <iostream>
#include <ios>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using std::cin;		
using std::cout;
using std::endl;
using std::string;
using std::vector;
//using std::precision;
using std::setprecision;
using std::streamsize;
using std::sort;

int main(){
	
	//输入名字
	cout << "Please enter your first name:" << endl;
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	//输入期中、期末成绩
	cout << "Please enter your midterm and final exam grades" << endl;
	double midterm, final;
	cout << "midterm: ";
	cin >> midterm;
	cout << "final: ";
	cin >> final;

	//输入作业成绩
	cout << "Please enter your homework grades, "
		 << "followed by end-of-file: "
		 << endl;
	vector<double> homework;
	double x;

	//不变式：homework包含了所有的家庭作业成绩
	while ( cin >> x ){
		homework.push_back(x);
	}

	//检查homework是否为空
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if ( size == 0 ){
		cout << endl
			<< "You must enter your grades. "
			<< "Please try again."
			<< endl;
		return 1;
	}

	//对成绩排序，非递减
	sort(homework.begin(), homework.end());

	//计算家庭作业成绩的中值
	vec_sz mid = size>>1;
	double median;
	median = (size % 2 == 0) ? (homework[mid] + homework[mid-1]) / 2 : homework[mid];

	//计算并输出总成绩
	streamsize prec = cout.precision();
	cout << "Your final grade is: "
		<< setprecision(3)
		<< 0.2* midterm + 0.4* final + 0.4* median
		<< setprecision(prec)
		<< endl;

	return 0;
}
