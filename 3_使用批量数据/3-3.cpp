#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::sort;

int main(){

	vector<string>word;
	typedef vector<string>::size_type vec_sz;
	vec_sz size = 0;
	string x;
	while( cin >> x ){
		word.push_back( x );
	}
	size = word.size();
	sort( word.begin(), word.end() );
	
	int num = 1;
	cout << endl << word[0];
	for( int i = 1; i < size; i++ ){
		if ( word[i] == word[i-1] )
			num++;
		else{
			cout << "\t" << num << endl;
			num = 1;
			cout << word[i];
		}
	}

	cout << "\t" <<  num << endl;
	return 0;
}

