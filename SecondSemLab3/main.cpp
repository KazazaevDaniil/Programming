
#include "Figures.h"
#include "iostream"
using namespace std;

char Figure;

/*
 * .coords() - выводит координаты
 * .move(x,y) - двигает на +- x, y, где x, y - числа
 * .rotate(angle) - вращаяет на определенный угол
 */

int main(){
    while (true) {
        std::cout << "1 - Point, 2 - Line, 3 - Rectangle, 4 - Square, 5 - Parallelogram, 6 - Rhombus, q - exit" << endl;
        std::cin >> Figure;
        switch (Figure) {
            case '1': {
                //Точка
                Point point(Point(1, 2));
                point.coords();
                std::cout << "-------------------" << endl;
                std::cout << "Moving" << endl;
                point.move(3, 3);
                break;
            }
            case '2': {
                //Прямая
                Line line(Point(1, 1), Point(2, 1));
                line.coords();
                std::cout << "-------------------" << endl;
                std::cout << "Moving" << endl;
                line.move(1, 1);
                std::cout << "-------------------" << endl;
                std::cout << "Rotation" << endl;
                line.rotate(90);
                break;
            }
            case '3': {
                //Прямоуголник
                Rectangle rectangle(Point(5, 5), Point(10, 5), Point(5, 1), Point(10, 1));
                rectangle.coords();
                std::cout << "-------------------" << endl;
                std::cout << "Moving" << endl;
                rectangle.move(1, 1);
                std::cout << "-------------------" << endl;
                std::cout << "Rotation" << endl;
                rectangle.rotate(90);
                break;
            }
            case '4': {
                //Квадрат
                Square square(Point(0, 0), Point(40, 0), Point(40, 40), Point(0, 40));
                square.coords();
                std::cout << "-------------------" << endl;
                std::cout << "Moving" << endl;
                square.move(1, 1);
                std::cout << "-------------------" << endl;
                std::cout << "Rotation" << endl;
                square.rotate(90);
                break;
            }
            case '5': {
                //Параллелограмм
                Parallelogram parallelogram(Point(5, 5), Point(25, 5), Point(30, 15), Point(10, 15));
                parallelogram.coords();
                std::cout << "-------------------" << endl;
                std::cout << "Moving" << endl;
                parallelogram.move(2, 2);
                std::cout << "-------------------" << endl;
                std::cout << "Rotation" << endl;
                parallelogram.rotate(90);
                break;
            }
            case '6': {
                //Ромб
                Rhombus rhombus(Point(20, 10), Point(10, 30), Point(20, 50), Point(30, 30));
                rhombus.coords();
                std::cout << "-------------------" << endl;
                std::cout << "Moving" << endl;
                rhombus.move(2, 2);
                std::cout << "-------------------" << endl;
                std::cout << "Rotation" << endl;
                rhombus.rotate(90);
                break;
            }
            case 'q':
                std::cout << "Exit" << '\n';
                exit(EXIT_SUCCESS);
            default:
                break;
        }
    }
}