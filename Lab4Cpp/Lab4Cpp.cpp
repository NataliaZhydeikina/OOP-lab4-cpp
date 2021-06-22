#include <iostream>
#include "../GeometryLib/Circle.h"
#include "../GeometryLib/Square.h"

using namespace std;

int main()
{
    Circle* circle1 = new Circle(50);
    cout << "circle: " << string(*circle1) << endl;
    cout << "circle's area: " << circle1->area() << endl;
    cout << "circle's perimeter: " << circle1->perimeter() << endl;
    Square* square1 = new Square(25);
    cout << "square: " << string(*square1) << endl;
    cout << "square's area: " << square1->area() << endl;
    cout << "square's perimeter: " << square1->perimeter() << endl;
}
