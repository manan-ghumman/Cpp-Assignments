#include<bits/stdc++.h>

using namespace std;

int main(){
    int a =0, b=1;
    int n =10;
    cout<<a<<",";
    for(int i=2;i<=n;i++){
        int next = a+b;
        cout<<next<<",";
        a=b;
        b=next;
    }
    cout<<"\b ";
    return 0;
}
