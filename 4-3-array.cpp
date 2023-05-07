#include <iostream>
#include <string>
using namespace std;

int main(){

	string apple;
	getline(cin, apple);

	string bape;
	cin >> bape;

	string car;
	cin >> car;

	string::size_type dope = 0;
    
    while(true) { 
        
        dope = apple.find( bape , dope );
        
        if( string::npos == dope )
        break;
        
        else 
        apple.replace( dope, bape.length(), car ); 
        dope += car.length();
        
        
    }
	cout << apple;
	return 0;
}
