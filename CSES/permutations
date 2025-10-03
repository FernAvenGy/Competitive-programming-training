// Problem: https://cses.fi/problemset/task/1070

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a; cin >> a;
    int arr[a];
    int k=1;

	if(a<=3 && a>1){
        cout<<"NO SOLUTION"<<endl;
    }

    else if(a==1){
        cout<<1<<endl;
    }
    
    else{
        for(int i=1; i<=a; i++){
            if(i==(a/2)){
                arr[k]=i;
                k=0;
                
            }
            else{
                arr[k]=i;
                k+=2;
            }
        }
        for(int i=0; i<a; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
