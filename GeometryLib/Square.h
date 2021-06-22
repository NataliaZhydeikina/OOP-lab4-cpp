#pragma once
#include "Shape.h"
#include <math.h>
#include <string>

using namespace std;

class Square :
	public Shape
{
private:
    float a = 0;
public:
    Square(float a) {
        this->a = a;
    }
    double area() override {
        return round(pow(a, 2));
    }
    double perimeter() override {
        return round(a * 4);
    }
    operator string() const
    {
        return "circle with radius " + to_string(a);
    }
};

