#include <iostream>

class Vect {
private:
    double VectVar;
    int sum = 0;
	int dimention;
	double* values, element;
public:
    int getDimention();
    void VectElements();
    void printVect();
	Vect(int dim, double* values);
	Vect* operator= (const Vect& other);
	Vect operator+ (Vect& other);
	Vect operator- (Vect& other);
    Vect operator& (Vect& other);
    Vect operator/ (Vect& other);
    Vect operator* (Vect& other);
};

class Matrix {
private:
    int** matrix, rows, columns;
    double MatrixVar;
public:
    Matrix(){
        this -> rows = this -> columns = 0;
        this -> matrix = nullptr;
    };
    Matrix(int _rows, int _columns) {    // Конструктор с двумя параметрами
        rows = _rows;
        columns = _columns;
        matrix = new int* [rows];
        for (int i = 0; i < rows; i++)
            matrix[i] = new int[columns];
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < columns; j++) {
                matrix[i][j] = 0;
            }
    }
    ~Matrix(){
        if (columns > 0){
            for (int i = 0; i < rows; ++i) {
                delete matrix[i];
            }
        }
        if (rows > 0){
            delete[] matrix;
        }
    };
    void printMatrix();
    void MatrixElements();
    Matrix operator+ (Matrix& other);
    Matrix operator- (Matrix& other);
    Matrix operator& (Matrix& other);
    Matrix operator/ (Matrix& other);
    Matrix operator* (Matrix& other);
    Matrix operator| (Matrix& other);
};
