#include <iostream>
#include <string>

using std::cin;		using std::cout;
using std::endl;	using std::string;

void show(int r, int c, int flag=0){
	if ( flag ){		//triangle
		string temp;
		int tmp = flag >> 1;
		for( int i = 0; i < r; i++ ){
			temp.assign( tmp, ' ' );
			tmp--;
			if ( i == 0 )
				cout << temp << "*";
			else if ( i == r-1 ){
				temp.assign( flag, '*' );
				cout << temp;
			}
			else {
				cout << temp << "*";
				temp.assign(i, ' ');
				cout << temp << "*";
			}
			cout << endl;
		}

		return ;
	}	

	int cols = c;
	for( int i = 0 ; i < r; i++ ){
		int j = 0;
		while (j != cols){
			if( i == 0 || i == r-1 || j == 0 || j == c-1)
				cout << "*";
			else
				cout << " ";
			j++;
		}
		cout << endl;
	}
}

int main(){
	
	int rows;

	// 5*5 square
	cout << "5*5 square:" << endl;
	show(5, 5);

	// 3*5 rectangle
	cout << "3*5 rectangle:" << endl;
	show(3, 5);

	// 3*3*5 triangle
	cout << "3*3*5 trianfle:" << endl;
	show (3, 3, 5);

	return 0;
}
