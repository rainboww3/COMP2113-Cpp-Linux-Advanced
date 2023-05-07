#include <iostream>
#include <string>
using namespace std;

string reverse(string s){
    string r = "";
	for (int i = 0; i < s.length(); ++i)
		r = s[i] + r;
	return r;
}

int main(){
	string s;
	cin >> s;
	cout << "String in reverse = " << reverse(s) << endl;
	return 0;

}
