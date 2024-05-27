#include "cmath"
#include "iostream"

using namespace std;

class Point {
public:
    double x, y;

    Point(double x = 0, double y = 0);

    void move(double OtherX, double OtherY);

    void coords();
};

class Actions {
public:
    virtual void move(double MoveX, double MoveY) = 0;

    virtual void rotate(double Angle) = 0;

};

class Line: public Actions {
public:
    Point points[2];

    Line(Point p1, Point p2);

    void move(double MoveX, double MoveY) override;

    void rotate(double Angle) override;

    void coords();

    int Corner = 1;
};

class Rectangle: public Actions {
public:
    Point points[4];

    Rectangle(Point p1, Point p2, Point p3, Point p4);

    void move(double OtherX, double OtherY) override;

    void rotate(double Angle) override;

    void coords();

    int Corner = 1;
};

class Square: public Actions {
public:
    Point points[4];

    Square(Point p1, Point p2, Point p3, Point p4);

    void move(double OtherX, double OtherY) override;

    void rotate(double Angle);

    void coords();

    int Corner = 1;

};

class Parallelogram: public Actions {
public:
    Point points[4];

    Parallelogram(Point p1, Point p2, Point p3, Point p4);

    void move(double OtherX, double OtherY) override;

    void rotate(double Angle) override;

    void coords();

    int Corner = 1;
};

class Rhombus: public Actions {
public:
    Point points[4];

    Rhombus(Point p1, Point p2, Point p3, Point p4);

    void move(double OtherX, double OtherY) override;

    void rotate(double Angle) override;

    void coords();

    int Corner = 1;
};
