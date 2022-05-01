#include <iostream>
#include <string>

using namespace std;

int h2d(char a){
	if(a-'0'<=9&&a-'0'>=0)return a-'0';
	//if(a-'a'<=6&&a-'a'>=0)return a-'a'+10;
	return a-'a'+10;
}

int main(int argc,char* argv[]){
	string s = argv[1];
	int a = h2d(s[2])*16+h2d(s[3]);
	int b = h2d(s[4])*16+h2d(s[5]);
	int c = h2d(s[6])*16+h2d(s[7]);
	int d = h2d(s[8])*16+h2d(s[9]);
	cout<<a<<"."<<b<<"."<<c<<"."<<d<<endl;
	return 0;	
}
