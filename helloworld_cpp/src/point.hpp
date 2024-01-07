#pragma once

#include <iostream>

using namespace std;

class Point {
public:
    int x, y;
    explicit Point(int x = 0, int y = 0) : x(x), y(y) {
    }

    Point(const Point& other) {
        x = other.x;
        y = other.y;
    }
};
