#pragma once
#include "Shape.h"
#include <math.h>
#include <string>

using namespace std;

class Circle :
	public Shape
{
private:
    float radius = 0;
    const double PI = 3.141592653589793238463;
public:
    Circle(float r) : radius(r) {
    }
    double area() override {
        return round(PI * pow(radius, 2));
    }
    double perimeter() override {
        return round(PI * radius * 2);
    }
    operator string() const
    {
        return "circle with radius " + to_string(radius);
    }
};

