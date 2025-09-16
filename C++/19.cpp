#include<bits/stdc++.h>

using namespace std;
class second;
class first{
    private:
        int a;
    public:
        first(int a): a(a){

        }
    friend void sum(first, second);
};
class second{
    private:
        int b;
    public:
        second(int b): b(b){

        }
    friend void sum(first, second);
};

void sum(first ob1, second ob2){
    cout<<"sum is: "<<ob1.a + ob2.b<<endl;
}

int main(){
    first ob1(5);
    second ob2(10);
    sum(ob1, ob2);
    return 0;
}   