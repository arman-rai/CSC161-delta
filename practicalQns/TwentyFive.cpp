//  Create a class Polygon with data members side1, side2, and side3. Also include the methods
// getArea()   and   getPerimeter().   Leave   the   body   of   these   methods   blank.   Create   a   class   Rectangle
// inheriting Polygon. Include a method to input side1 and side2 of the rectangle. Now override methods
// getArea() and getRectangle() to return area and perimeter of rectangle. Do same thing for class triangle.
// Now create the objects of Rectangle  and Triangle and display their area and perimeter

#include <iostream>

using namespace std;

class Polygon {
protected:
    double side1, side2, side3;

public:
    void getArea() {

    }

    void getPerimeter() {

    }
};

class Rectangle : public Polygon {

public:
    void inputData() {
        cout << "\nEnter the length and breadth side : " << endl;
        cin >> side1 >> side2;
    }

    double getArea() {
        return side1 * side2;
    }

    double getPerimeter() {
        return 2* side1* side2;
    }
};

class Triangle : public Rectangle {
public:
    void inputData() {
        cout << "\nEnter the length, breadth and height : " << endl;
        cin >> side1 >> side2 >> side3;
    }

    double getArea() {
        return 0.5* side3* side2;
    }

    double getPerimeter() {
        return side1+ side2+ side3;
    }  
};

int main() {
    double area, peri, areaOne, periOne;
    
    Rectangle boxOne;
    boxOne.inputData();
    area = boxOne.getArea();
    peri = boxOne.getPerimeter();
    cout << "Area of rectangle : " << area;
    cout << "\nPerimeter of rectangle : " << peri;

    Triangle triOne;
    triOne.inputData();
    areaOne = triOne.getArea();
    periOne = triOne.getPerimeter();
    cout << "\nArea of triangle : " << areaOne;
    cout << "\nPerimeter of triangle : " << periOne;

    return 0;
}