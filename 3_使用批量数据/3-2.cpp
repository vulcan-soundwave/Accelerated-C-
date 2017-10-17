#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::sort;

int main(){

	vector<double> num;
	
	cout << "Please enter your number:" << endl;
	int tmp;
	cin >> tmp;

	cout << "Please enter your figures:" << endl;
	double x;
	for( int i = 0; i < tmp; i++ ){
		cin >> x;
		num.push_back(x);
	} 

	typedef vector<double>::size_type vec_sz;
	vec_sz size = num.size();
	if ( size == 0 ){
		cout << "You must enter your figures. "
			<<	"Please try again."
			<<	endl;
	}
	else if( size != tmp ){
		cout << "You must enter right numbers of figures. "
			<<	"Please try again."
			<<	endl;
	}

	sort( num.begin(), num.end() );
	
	const int temp = size / 4;
	for ( int i = size-1; i >= 0; i-- ){
		if( (i + 1) % temp == 0){
			cout << endl << "第" << 4 - i / temp << "组:" << endl;
		}
		cout << num[i] << " ";
	}

	cout << endl;

	return 0; 
}
