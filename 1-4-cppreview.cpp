#include <iostream>
using namespace std;

int main()
{
    	int w;
    	double h, BMI;

    	cin >> w >> h;
    	
    	BMI=w/(h*h);
    	
    	cout << "Your BMI = " << BMI <<endl;
    	cout << "BMI VALUES"<<endl;
    	cout << "Underweight: less than 18.5"<<endl;
    	cout << "Normal: between 18.5 and 24.9"<<endl;
    	cout << "Overweight: between 25 and 29.9"<<endl;
    	cout << "Obese: 30 or greater"<<endl;
    
    
    	return 0;
}
