#include<bits/stdc++.h>
using namespace std;

class area{
    private:
        float side;
        float length;
        float breadth;
    public:
        area(float side): side(side){

        }
        area(float length, float breadth): length(length), breadth(breadth){

        }
        area(float length, float breadth, float side): length(length), breadth(breadth), side(side){

        }
        float squareArea(){
            return side * side;
        }
        float rectangleArea(){
            return length * breadth;
        }
        float triangleArea(){
            float s = (length + breadth + side) / 2.0;
            return sqrt(s * (s - length) * (s - breadth) * (s - side));
        }
};

int main()
{
    area square(4.0);
    cout<<"Area of square: "<<square.squareArea()<<endl;

    area rectangle(4.0, 5.0);
    cout<<"Area of rectangle: "<<rectangle.rectangleArea()<<endl;

    area triangle(3.0, 4.0, 5.0);
    cout<<"Area of triangle: "<<triangle.triangleArea()<<endl;

    return 0;
}