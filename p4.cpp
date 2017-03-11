#include <iostream>
using namespace std;

int main() {
	char t;
	cin>>t;
	if(t>=65 && t<=90){
	    cout<<"Yes";
	}
	else if(t>=97 && t<=122){
	    cout<<"Yes";
	}
	else{
	    cout<<"No";
	}
	return 0;
}
