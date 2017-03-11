#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void stringtoint(string t){
    int len = t.length();
    int ans[len];
    for(int i=0;i<t.length();i++){
        ans[i] = t.at(i) - '0';
    }
    for(int j=0;j<len;j++){
        cout<<ans[j];
    }
}

int main() {
	string t;
	cin>>t;
    stringtoint(t);
	return 0;
}

