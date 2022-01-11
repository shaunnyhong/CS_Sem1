// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));

char sym;
cout << "Enter a symbol: ";
cin >> sym;


int length;
cout << "Enter the line length: ";
cin  >> length;
	

char wich;
cout << "Horizontal? Vertical?: ";
cin >> wich;

int counter;
int county;

while (true) {
	
if (wich == 'V'){
	cout << sym << endl;
			county = county + 1;
	if (county == length) {
		break;
	}
}
	if (wich == 'H'){
	cout << sym;
			counter = counter + 1;
	if (counter == length) {
		break;
		
		
			

}
}
}
}