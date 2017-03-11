#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int reverseNo(int t){
    int newNo = 0;
    while(t!=0){
        newNo = newNo * 10;
        newNo = newNo + t%10;
        t = t/10;
    }
    return newNo;
}

int main() {
	unsigned int t;
	cin>>t;
    unsigned int ans = reverseNo(t);
	cout<<ans;
	return 0;
}

