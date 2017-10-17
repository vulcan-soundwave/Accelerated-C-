#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::sort;

const int INF = 1<<29;

int main(){

	int mmin = 0;
	int mmax = INF;

	vector<int> num;
	typedef vector<int>::size_type vec_sz;
	vec_sz size;

	string tmp;
	while( cin >> tmp ){
		num.push_back( tmp.size() );
	}
	
	size = num.size();
	sort( num.begin(), num.end() );
	
	cout << "最长字符串长度:\t" << num[size-1] << endl;
	cout << "最短字符串长度:\t" << num[0] << endl;

	return 0;
}
