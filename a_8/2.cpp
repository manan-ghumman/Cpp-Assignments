#include<bits/stdc++.h>
#include<string>
using namespace std;

class usertwo;
class userone{
    private:
        string uname, pid;
    public:
        void getdata (string str, string b){
            uname = str;
            pid = b;
        }
        friend void strcompare(userone ob, usertwo ob1);
};

class usertwo{
    private:
        string uname, pid;
    public:
        void getdata (string str, string b){
            uname = str;
            pid = b;
        }
        friend void strcompare(userone ob, usertwo ob1);
};

void strcompare(userone ob, usertwo ob1)
{
    if(ob.uname == ob1.uname && ob.pid == ob1.pid)
        cout<<"matched";
    else
        cout<<"not matched";
}
int main()
{
    userone ob;
    usertwo ob1;    
    string str, b;
    cout<<"Enter the username and pin for userone"<<endl;
    cin>>str>>b;
    ob.getdata(str,b);
    cout<<"Enter the username and pin for usertwo"<<endl;
    cin>>str>>b;
    ob1.getdata(str,b);
    strcompare(ob, ob1);
    return 0;
}