#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int findfact(int t){
    int ans=1;
    if(t==1){
        return 1;
    }
    else{
       for(int i=t;i>1;i--){
           ans = ans*i;
       } 
    }
    return ans;
}

int main() {
	unsigned int t;
	cin>>t;
    unsigned int ans = findfact(t);
	cout<<ans;
	return 0;
}
