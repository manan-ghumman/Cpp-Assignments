#include<bits/stdc++.h>
using namespace std;

class circle
{
    public:
    float radius;
        circle(){

        }
        circle(float radius): radius(radius){

        }
        static float area(float radius){
            return 3.14 * radius * radius;
        }
        static float circumference(float radius){
            return 2 * 3.14 * radius;
        }
};

int main()
{
    circle c1;
    c1.radius = 5.0;
    cout<<"Circumference: "<<circle::circumference(c1.radius)<<endl;
    cout<<"Area: "<<circle::area(c1.radius)<<endl;
    return 0;
}
