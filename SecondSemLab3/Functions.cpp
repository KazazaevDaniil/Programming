#include "Figures.h"
#include "cmath"
#include "iostream"

Point::Point(double x, double y) {
  this->x = x;
  this->y = y;
}

void Point::coords() {
    std :: cout <<"(" << x << "," << y << ")"<< endl;
}

void Point::move(double OtherX, double OtherY) {
  x += OtherX;
  y += OtherY;
  std :: cout <<"(" << x << "," << y << ")"<< endl;
}

Line::Line(Point p1, Point p2) {
  points[0] = p1;
  points[1] = p2;
}

void Line::coords() {
    for (auto &point : points) {
        std :: cout << "Coords of the " << Corner << " point: " << "(" << point.x << "," << point.y << ")" << endl;
        Corner+=1;
    }
    Corner = 1;
}

void Line::move(double MoveX, double MoveY) {
    for (auto &point : points) {
        std :: cout << "Coords of the " << Corner << " point: " << "(" << point.x + MoveX << "," << point.y + MoveY << ")" << endl;
        Corner+=1;
    }
    Corner = 1;
}

void Line::rotate(double Angle) {
      double RotationAngle = Angle * M_PI / 180;
      double centerX = 0, centerY = 0;
      for (auto &point : points) {
          centerX += point.x;
          centerY += point.y;
      }
      centerX /= 2;
      centerY /= 2;
      for (auto &point : points) {
          double OldX = point.x;
          point.x = (point.x - centerX) * cos(RotationAngle) - (point.y - centerY) * sin(RotationAngle) + centerX;
          point.y = (OldX - centerX) * sin(RotationAngle) + (point.y - centerY) * cos(RotationAngle) + centerX;
          std :: cout << "Coords of the " << Corner << " point: " << "(" << point.x << "," << point.y << ")" << endl;
          Corner+=1;
      }
    Corner = 1;
}

Rectangle::Rectangle(Point p1, Point p2, Point p3, Point p4) {
    points[0] = p1;
    points[1] = p2;
    points[2] = p3;
    points[3] = p4;
}

void Rectangle::coords() {
    for (auto &point : points) {
        std :: cout << "Coords of the " << Corner << " corner: " << "(" << point.x << "," << point.y << ")" << endl;
        Corner+=1;
    }
    Corner = 1;
}

void Rectangle::move(double MoveX, double MoveY) {
    for (auto &point : points) {
        std :: cout << "Coords of the " << Corner << " corner: " << "(" << point.x + MoveX << "," << point.y + MoveY << ")" << endl;
        Corner+=1;
    }
    Corner = 1;
}

void Rectangle::rotate(double Angle) {
    double RotationAngle = Angle * M_PI / 180;
    double centerX, centerY;
    centerX = (points[0].x + points[2].x) / 2;
    centerY = (points[0].y + points[2].y) / 2;
    double Sin = sin(RotationAngle);
    double Cos = cos(RotationAngle);
    for (auto &point : points) {
        double OldX = point.x;
        double OldY = point.y;
        point.x = (OldX - centerX) * Cos - (OldY - centerY) * Sin + centerX;
        point.y = (OldX - centerX) * Sin + (OldY - centerY) * Cos + centerY;
        std :: cout << "Coords of the " << Corner << " corner: " << "(" << point.x << "," << point.y << ")" << endl;
        Corner+=1;
    }
    Corner = 1;

}

Square::Square(Point p1, Point p2, Point p3, Point p4) {
    points[0] = p1;
    points[1] = p2;
    points[2] = p3;
    points[3] = p4;
}

void Square::coords() {
    for (auto &point : points) {
        std :: cout << "Coords of the " << Corner << " corner: " << "(" << point.x << "," << point.y << ")" << endl;
        Corner+=1;
    }
    Corner = 1;
}

void Square::move(double MoveX, double MoveY) {
    for (auto &point: points) {
        std::cout << "Coords of the " << Corner << " corner: " << "(" << point.x + MoveX << "," << point.y + MoveY
                  << ")" << endl;
        Corner += 1;
    }
}

void Square :: rotate(double Angle) {
      double RotationAngle = Angle * M_PI / 180;
      double centerX, centerY;
      centerX = (points[0].x + points[2].x) / 2;
      centerY = (points[0].y + points[2].y) / 2;
      double Sin = sin(RotationAngle);
      double Cos = cos(RotationAngle);
      for (auto &point : points) {
          double OldX = point.x;
          double OldY = point.y;
          point.x = (OldX - centerX) * Cos - (OldY - centerY) * Sin + centerX;
          point.y = (OldX - centerX) * Sin + (OldY - centerY) * Cos + centerY;
          std :: cout << "Coords of the " << Corner << " corner: " << "(" << point.x << "," << point.y << ")" << endl;
          Corner+=1;
      }
    Corner = 1;
}

Parallelogram :: Parallelogram(Point p1, Point p2, Point p3, Point p4) {
      points[0] = p1;
      points[1] = p2;
      points[2] = p3;
      points[3] = p4;
}

void Parallelogram::coords() {
    for (auto &point : points) {
        std :: cout << "Coords of the " << Corner << " corner: " << "(" << point.x << "," << point.y << ")" << endl;
        Corner+=1;
    }
    Corner = 1;
}

void Parallelogram::move(double MoveX, double MoveY) {
    for (auto &point: points) {
        std::cout << "Coords of the " << Corner << " corner: " << "(" << point.x + MoveX << "," << point.y + MoveY
                  << ")" << endl;
        Corner += 1;
    }
    Corner = 1;
}
void Parallelogram::rotate(double Angle) {
      double RotationAngle = Angle * M_PI / 180;
      double centerX, centerY;
      centerX = (points[0].x + points[2].x) / 2;
      centerY = (points[0].y + points[2].y) / 2;
      double Sin = sin(RotationAngle);
      double Cos = cos(RotationAngle);
      for (auto &point : points) {
          double OldX = point.x;
          double OldY = point.y;
          point.x = (OldX - centerX) * Cos - (OldY - centerY) * Sin + centerX;
          point.y = (OldX - centerX) * Sin + (OldY - centerY) * Cos + centerY;
          std :: cout << "Coords of the " << Corner << " corner: " << "(" << point.x << "," << point.y << ")" << endl;
          Corner+=1;
      }
    Corner = 1;
}

Rhombus::Rhombus(Point p1, Point p2, Point p3, Point p4) {
      points[0] = p1;
      points[1] = p2;
      points[2] = p3;
      points[3] = p4;
}

void Rhombus::coords() {
    for (auto &point : points) {
        std :: cout << "Coords of the " << Corner << " corner: " << "(" << point.x << "," << point.y << ")" << endl;
        Corner+=1;
    }
    Corner = 1;
}

void Rhombus::move(double MoveX, double MoveY) {
    for (auto &point : points) {
        std::cout << "Coords of the " << Corner << " corner: " << "(" << point.x + MoveX << "," << point.y + MoveY
                  << ")" << endl;
        Corner += 1;
    }
    Corner = 1;
}



void Rhombus::rotate(double Angle) {
      double RotationAngle = Angle * M_PI / 180;
      double centerX, centerY;
      centerX = (points[0].x + points[2].x) / 2;
      centerY = (points[0].y + points[2].y) / 2;
      double Sin = sin(RotationAngle);
      double Cos = cos(RotationAngle);
      for (auto &point : points) {
          double OldX = point.x;
          double OldY = point.y;
          point.x = (OldX - centerX) * Cos - (OldY - centerY) * Sin + centerX;
          point.y = (OldX - centerX) * Sin + (OldY - centerY) * Cos + centerY;
          std :: cout << "Coords of the " << Corner << " corner: " << "(" << point.x << "," << point.y << ")" << endl;
          Corner+=1;
      }
    Corner = 1;
}
