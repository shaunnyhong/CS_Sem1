// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<endl;
	

char x ;
cout << "Enter the symbol: ";
cin >> x;

int z = 0;
cout << "Enter the box width: "	;
cin >> z;

int y = 0;
cout << "Enter the box height: ";
cin >> y;

cout << endl;

int counter= 0 ;
int mem = 0;



while (true) {
	cout << x ;
	counter = counter + 1;
	
if (counter == z) {
		cout << endl;
		mem = mem + 1;
		counter = 0;
		
if (mem == y)
		break;
	}
	}
}
