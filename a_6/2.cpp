#include<bits/stdc++.h>

using namespace std;

class timef{

    private:
    int hours;
    int minutes;
    int seconds;

    public:
    timef(){
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    timef(int h, int m, int s){
        hours = h;
        minutes = m;
        seconds = s;
    }

    void addTime(const timef& t1, const timef& t2){
        hours= t1.hours + t2.hours;
        if( t1.minutes+t2.minutes<60)
        {
            minutes = t1.minutes+t2.minutes;
        }
        else
        {
            minutes = t1.minutes+t2.minutes - 60;
            hours++;
        }
        seconds = t1.seconds + t2.seconds;
        if(seconds >= 60)
        {
            seconds -= 60;
            minutes++;
        }
        display();
    }

    void display(){
        cout<<hours<<":"<<minutes<<":"<<seconds;
    }

};

int main(){

    timef t1, t2(10,79,88);
    t1.addTime(t1,t2);
    return 0;
}