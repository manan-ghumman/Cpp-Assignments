#include<bits/stdc++.h>

using namespace std;

int main(){
    int n1, n2, n3;
    cin>>n1>>n2>>n3;
    int max;
//nested if elsw to find max of three numbers
    if(n1>=n2){
        if(n1>=n3){
            max=n1;
        }
        else{
            max=n3;
        }
    }
    else{
        if(n2>=n3){
            max=n2;
        }
        else{
            max=n3;
        }
    }
    return 0;
}
