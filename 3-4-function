#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float mean;

float ismean(float a,float b,float c,float d,float e){
    mean=(a+b+c+d+e)/5;
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout<<mean;
}

float issd(float a,float b,float c,float d,float e){
    mean=(a+b+c+d+e)/5;
    float sd1, sd2;
    sd1=((a-mean)*(a-mean)+(b-mean)*(b-mean)+(c-mean)*(c-mean)+(d-mean)*(d-mean)+(e-mean)*(e-mean))/5;
    sd2=sqrt(sd1);
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout<<sd2;
}


int main(){
    
    float a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    cout<<"Mean = ";
    ismean(a,b,c,d,e);
    cout<<endl;
    cout<<"Standard deviation = ";
    issd(a,b,c,d,e);


	return 0;
}
