// NkaLaby.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include "mathcustom.h"
#include <iostream>

int main() {
    char Selection, Action;
    Vect VectVar = VectVar;
    Matrix MatrixVar = MatrixVar;
    Vect VectFirst = Vect(3, new double[3]{1,2,3});
    Vect VectSecond = Vect(3, new double[3]{3,2,1});
    Vect VectThird = Vect(3, new double [3]{});
    Matrix MatrixFirst(3, 3);
    Matrix MatrixSecond(3, 3);
    Matrix MatrixThird(3, 3);
    while (true) {
        std::cout << "1 - Fector, 2 - Matrix, q - Exit" << std::endl;
        std::cin >> Selection;
        switch (Selection) {
            case '1': {
                std::cout << "Select an action +, -, *(MulOnVar), /(DivOnVar), &(Scalar)" << std::endl;
                std::cin >> Action;
                switch (Action) {
                    case '+': {
                        std::cout << "Vect---Sum---\n";
                        VectThird = VectFirst + VectSecond;
                        VectThird.printVect();
                        break;
                    }
                    case '-': {
                        std::cout << "Vect---Sub---\n";
                        VectThird = VectFirst - VectSecond;
                        VectThird.printVect();
                        break;
                    }
                    case '*': {
                        std::cout << "Vect---MulByVar---\n";
                        VectThird = VectFirst * VectVar;
                        VectThird.printVect();
                        break;
                    }
                    case '/': {
                        std::cout << "Vect---DivByVar---\n";
                        VectThird = VectFirst / VectVar;
                        VectThird.printVect();
                        break;
                    }
                    case '&': {
                        std::cout << "Vect---Scalar---\n";
                        VectThird = VectFirst & VectSecond;
                        VectThird.printVect();
                        break;
                    }
                    default:
                        break;
                }
                break;
            }

            case '2':
                std::cout << "Select an action +, -, *(MatrixByMatrix), &(MatrixByVar), /(DivByMatrix), |(DivByVar) " << std::endl;
                std::cin >> Action;
                switch (Action) {
                    case '+':
                        std::cout << "Matrix---Sum---\n";
                        std::cout << "Elements of first matrix" << std::endl;
                        MatrixFirst.MatrixElements();
                        std::cout << "Elements of second matrix" << std::endl;
                        MatrixSecond.MatrixElements();
                        MatrixThird = MatrixFirst + MatrixSecond;
                        MatrixThird.printMatrix();
                        break;
                    case '-':
                        std::cout << "Matrix---Sub---\n";
                        std::cout << "Elements of first matrix" << std::endl;
                        MatrixFirst.MatrixElements();
                        std::cout << "Elements of second matrix" << std::endl;
                        MatrixSecond.MatrixElements();
                        MatrixThird = MatrixFirst - MatrixSecond;
                        MatrixThird.printMatrix();
                        break;
                    case '*':
                        std::cout << "Matrix---MulByMatrix---\n";
                        std::cout << "Elements of first matrix" << std::endl;
                        MatrixFirst.MatrixElements();
                        std::cout << "Elements of second matrix" << std::endl;
                        MatrixSecond.MatrixElements();
                        MatrixThird = MatrixFirst * MatrixSecond;
                        MatrixThird.printMatrix();
                        break;
                    case '&':
                        std::cout << "Matrix---MulByVar---\n";
                        std::cout << "Elements of matrix" << std::endl;
                        MatrixFirst.MatrixElements();
                        MatrixThird = MatrixFirst & MatrixVar;
                        MatrixThird.printMatrix();
                        break;
                    case '/':
                        std::cout << "Matrix---DivByMarix---\n";
                        std::cout << "Elements of first matrix" << std::endl;
                        MatrixFirst.MatrixElements();
                        std::cout << "Elements of second matrix" << std::endl;
                        MatrixSecond.MatrixElements();
                        MatrixThird = MatrixFirst / MatrixSecond;
                        MatrixThird.printMatrix();
                        break;
                    case '|':
                        std::cout << "Matrix---DivByMarix---\n";
                        std::cout << "Elements of first matrix" << std::endl;
                        MatrixFirst.MatrixElements();
                        MatrixThird = MatrixFirst | MatrixVar;
                        MatrixThird.printMatrix();
                        break;
                    default:
                        break;
                }
                break;
            case 'q':
                std :: cout << "Exit" << '\n';
                exit(EXIT_SUCCESS);
            default:
                break;
        }
    }
}
