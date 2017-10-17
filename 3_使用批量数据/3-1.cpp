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

int main(){
	
	vector<double> num;
	vector<double> fro_num;
	typedef vector<double>::size_type vec_sz;
	vec_sz size, fsize;
	double median;
	double xnum;

    cout << "Please enter your numbers, "
         << "followed by \"\\n\": "
		 <<	endl;
	int tmp;
	cout << "You have read numbers is:\t";
	cin >> tmp;
	cout <<	"This is you haved read:\t";

	for ( int i = 0; i < tmp; i++ ){
		cin >> xnum;
		num.push_back(xnum);
		fro_num.push_back(xnum);
	}
	fsize = fro_num.size();
	
	cout << "This is you unknown:\t";
	while ( cin >> xnum ){
		num.push_back(xnum);
	}
	size = num.size();
	
	sort ( num.begin(), num.end() );
	vec_sz mid = size >> 1;
	median =  (size % 2 == 0) ? (num[mid] + num[mid-1]) / 2 : num[mid];

    cout << "The true median is: "
        <<  median
        <<  endl;
	
	bool flag = false;
	for( int i = 0; i < fsize; i++ ){
		double me;
		cout << "If we throw away the number:\t" << fro_num[i] << endl;
		if ( size % 2 != 0 ){
			if ( fro_num[i] == num[mid] ) 
				me = ( num[mid-1] + num[mid+1] ) / 2;
			else if ( fro_num[i] < median )
				me = ( num[mid] + num[mid+1] ) / 2;
			else
				me = ( num[mid] + num[mid-1] ) / 2;
		}
		else{
			if ( fro_num[i] == num[mid+1] )
				me = num[mid-1];
			if (fro_num[i] == num[mid-1] )
				me = num[mid];
			else if ( fro_num[i] < num[mid-1])
				me = num[mid];
			else
				me = num[mid-1];
		}
		cout << "The median is:\t" << me << endl;
		if ( median == me ) flag = true;
		
	}
	if ( flag ){
		cout << "证明有误!!!" << endl;
	}
	else{
		cout << "证明成功~~~" << endl; 
	}

	return 0;
}	
