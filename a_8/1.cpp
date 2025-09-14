#include <bits/stdc++.h>

using namespace std;

class bignum{
    private: 
        int n1,n2,n3 ;
    public: 
    bignum(int n1,int n2, int n3){
        this->n1 = n1 ;
        this->n2 = n2 ;
        this-> n3 =  n3;
    }
    friend int biggest(bignum ob);
};

int biggest(bignum ob)
{
    int max = ob.n1;
    if(max<ob.n2)
        max = ob.n2;   
    else if(max<ob.n3)
        max = ob.n3;
    return max;
}

int main()
{
    bignum ob1(34,45,21);
    int max = biggest(ob1);
    cout<<"max= "<<max<<endl;
    return 0;
}