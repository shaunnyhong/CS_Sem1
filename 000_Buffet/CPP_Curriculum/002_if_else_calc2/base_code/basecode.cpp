// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	cout << "Please enter a number"<<endl;
	int y = 0;
	cin >> y;
	
	cout << "Please enter a second number"<<endl;
	int z = 0;
	cin >> z;
		
	cout << "Please enter a operation"<<endl;
	char s;
	cin >> s;
	
	
	if (s == '*') {
		cout << y * z << endl;
	}
	
	if (s == '+') {
		cout << y + z << endl;
	}
	
	if (s == '-') {
		cout << y - z << endl;
	}
	if (s == '/') {
		cout << y / z << endl;
	}
	
	}
	
	
