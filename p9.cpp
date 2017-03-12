#include <iostream>
using namespace std;

int main() {
	string t;
	cin>>t;
	int len = t.length();
	char temp;
	for(int i=0;i<len;i+=2){
	    temp = t[i+1];
	    t[i+1] = t[i];
	    t[i] = temp;
	}
	if(len%2!=0){
	    t+=t[len];
	}
	cout<<t;
	return 0;
}

