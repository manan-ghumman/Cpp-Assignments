#include<bits/stdc++.h>

using namespace std;

void primenums(int start, int end){
    bool isprime;
    
        for(int i =start ; i< end ; i++)
        {
            isprime = true;

            if(i <=1)
            {
            isprime = false;
            goto done;
            }
            
            for(int j =2 ; j<sqrt(i); j++)
            {
                if(i%j == 0)
                {
                    isprime=false;
                    break;
                }
                
            }
            done:
            if(isprime)
                cout<<i<<", ";
        }
}

int main(){
    int start, end;
    cout<<"enter start and end range"<<endl;
    cin>>start>>end;
    primenums(start, end);

    return 0;
}