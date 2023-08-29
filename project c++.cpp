#include<bits/stdc++.h>
using namespace std;

class Shape {
public:

    Shape() {
        cout << "Shape constructor ." << endl;
    }


    virtual ~Shape() {
        cout << "Shape destructor ." << endl;
    }


    int x;
    int y;

    void SetPosition(int newX, int newY) {
        x = newX;
        y = newY;
    }

    void getPosition() {
        cout << "Position: (" << x << ", " << y << ")" << endl;
    }


    void getInfo() {
        cout << "This is a shape." << endl;
    }

     void getInfo(string additionalInfo) {
        cout << "This is a generic shape. Additional info: " << additionalInfo << endl;
    }


virtual void draw(){
        cout << "Draw a shape." << endl;
    }
};


class Circle : public Shape {
public:

    Circle() {
    cout << "Circle  called." << endl;
    }


    double r;


    void SetRadius(double radias){
        r = radias;
    }

    void getArea(){
        double area = 3.14 * r * r;
        cout << "Circle Area: " << area << endl;
    }


    void Draw(){
        cout << "Draw a circle." << endl;
    }
};

int main() {

    Circle c;


    c.SetPosition(5, 5);
    c.SetRadius(3);


    c.getPosition();
    c.getArea();
    c.getInfo("Circular Shape");

    Shape* sPtr = &c;
    sPtr->draw();

    return 0;
}




