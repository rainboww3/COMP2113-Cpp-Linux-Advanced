#include <iostream>
using namespace std;

int main()
{
	double a,b;
	double mean=0;
	double sum=0;
	double summ=0;
	double var;
	
	cin>>a;
	double arr[20]={0};
	
	for(int i=0;i<a;i++){
	    cin>>b;
	    arr[i]=b;
	}
	
	for(int i=0; i<a; i++){
	    sum+=arr[i];
	}
	
	mean=sum/a;
	
	for(int i=0; i<a; i++){
	    summ+=(arr[i]-mean)*(arr[i]-mean);
	}
	
	var=summ/a;
	
	cout<<"Variance = "<<var;

	return 0;
}
