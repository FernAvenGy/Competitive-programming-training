// Source: https://ide.usaco.guide/OZHy_pT-qd0JOzgpQei
// Problem: https://cses.fi/problemset/task/1068

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n; 
    cin >> n;

    bool ban = false;
    while(ban==false){
        if(n==1){
            cout<<n<<endl;
            ban=true;
        }

        else if(n%2==0){
            cout<<n<<" ";
            n=n/2;   
        }
        else if (n%2==1) {
            cout<<n<< " ";
            n=(n*3)+1;
        }    
    }
}




