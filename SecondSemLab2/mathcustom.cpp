#include "mathcustom.h"


Vect::Vect(int dim, double* values)
{
	this->dimention = dim;
	this->values = values;
}

Vect* Vect::operator=(const Vect& other)
{
	this->dimention = other.dimention;
	this->values = other.values;
	return this;
}

// + = * / - == != < > >= <=
// НАДО ЗАДВАТЬ ВЕКТОРА С КЛАВЫ
//Сложение векторов
Vect Vect::operator+(Vect& other)
{
		Vect temp = Vect(other.dimention, new double[other.dimention]);
		temp.dimention = this->dimention;
		for (int i = 0; i < this->dimention; i++)
			temp.values[i] = this->values[i] + other.values[i];
		return temp;
}
//Вычитание векторов
Vect Vect::operator- (Vect& other)
{
	if (this == nullptr) {
		Vect temp = Vect(other.dimention, new double[other.dimention]);
		temp.dimention = other.dimention;
		for (int i = 0; i < other.dimention; i++)
			temp.values[i] = 0 - other.values[i];
		return temp;
	}
    Vect temp = Vect(other.dimention, new double[other.dimention]);
    temp.dimention = this->dimention;
    for (int i = 0; i < this->dimention; i++)
        temp.values[i] = this->values[i] - other.values[i];
    return temp;
}
//Скалярное произведение
Vect Vect::operator& (Vect& other) {
    Vect temp = Vect(other.dimention, new double[other.dimention]);
    temp.dimention = this->dimention;
    for (int i = 0; i < this->dimention; i++)
        sum += this->values[i] * other.values[i];
    std::cout << sum << std::endl;
}
//Умножение вектора на число
Vect Vect:: operator*(Vect& other){
    Vect temp = Vect(other.dimention, new double[other.dimention]);
    temp.dimention = this->dimention;
    std :: cout << "The number to be multiplied by" << '\n';
    std :: cin >> VectVar;
    for (int i = 0; i < this->dimention; i++)
        temp.values[i] = this -> values[i] * VectVar;
    return temp;
}
//Деление вектора на число ////ТУТ ДОДЕЛАТЬ НАДО
Vect Vect::operator/(Vect& other){
    Vect temp = Vect(other.dimention, new double[other.dimention]);
    temp.dimention = this->dimention;
    std :: cout << "The number to divine by" << '\n';
    std :: cin >> VectVar;
    if (VectVar == 0)
        throw "Division by zero is bad :^(";
    else {
        for (int i = 0; i < this->dimention; i++)
            temp.values[i] = this->values[i] / VectVar;
        return temp;
    }
}

void Vect::VectElements(){
    std :: cout << "Enter an elements of vector" << std :: endl;
    std :: cin >> element;
    for (int i = 0; i < element; ++i) {
        this -> values = &element;
        }
}

int Vect::getDimention() {
    this->values = new double [3] {1, 2, 3};
	return this->dimention;
}

void Vect::printVect()
{
    for (int i = 0; i < this->dimention; i++) {
        std::cout << this->values[i] << std::endl;
    }
}

// Матрицы

//Сложение матриц
Matrix Matrix::operator+(Matrix &other) {
    if((columns != other.columns) || (rows != other.rows)){
        std :: cout << ("matrixes do not have same number of cols and rows.") << std :: endl;
    }
    Matrix temp = Matrix(rows,columns);
    for (int i = 0; i < temp.rows; ++i) {
        for (int j = 0; j < temp.columns; ++j) {
            temp.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
        }
    }
    return temp;
}

//Вычитание матриц
Matrix Matrix::operator-(Matrix &other) {
    if((columns != other.columns) || (rows != other.rows)){
        std :: cout << ("matrixes do not have same number of cols and rows.") << std :: endl;
    }
    Matrix temp = Matrix(rows,columns);
    for (int i = 0; i < temp.rows; ++i) {
        for (int j = 0; j < temp.columns; ++j) {
            temp.matrix[i][j] = matrix[i][j] - other.matrix[i][j];
        }
    }
    return temp;
}

//Перемножение матриц
Matrix Matrix::operator*(Matrix &other) {
    if((columns != other.columns) || (rows != other.rows)){
        std :: cout << ("Multiplied matrixes do not have same number of cols and rows.") << std :: endl;
    }
    Matrix temp(rows, columns);
    for (int i = 0; i < temp.rows; ++i) {
        for (int j = 0; j < temp.columns; ++j) {
            temp.matrix[i][j] = matrix[i][j] * other.matrix[i][j];
        }
    }
    return temp;
}

//Умножение матрицы на число
Matrix Matrix::operator&(Matrix &other) {
    Matrix temp(rows, columns);
    std :: cout << "Multiply by what?\n";
    std :: cin >> MatrixVar;
    for (int i = 0; i < temp.rows; ++i) {
        for (int j = 0; j < temp.columns; ++j) {
            temp.matrix[i][j] = matrix[i][j] * MatrixVar;
        }
    }
    return temp;
}

//Деление матрицы на матрицу
Matrix Matrix::operator/(Matrix &other) {
    if((columns != other.columns) || (rows != other.rows)){
        std :: cout << ("Multiplied matrixes do not have same number of cols and rows.") << std :: endl;
    }
    Matrix temp(rows, columns);
    std :: cin >> MatrixVar;
    for (int i = 0; i < temp.rows; ++i) {
        for (int j = 0; j < temp.columns; ++j) {
            temp.matrix[i][j] = matrix[i][j] / other.matrix[i][j];
        }
    }
    return temp;
}

//Деление матрицы на число
Matrix Matrix::operator|(Matrix &other) {
    Matrix temp(rows, columns);
    std :: cout << "Divine by what?\n";
    std :: cin >> MatrixVar;
    for (int i = 0; i < temp.rows; ++i) {
        for (int j = 0; j < temp.columns; ++j) {
            temp.matrix[i][j] = matrix[i][j] / MatrixVar;
        }
    }
    return temp;
}

void Matrix::MatrixElements() {
    int elements, count = 1;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cout << "Enter " << count << " element" << '\n';
            std :: cin >> elements;
            matrix[i][j] = elements;
            count++;
        }
    }
}

void Matrix::printMatrix(){
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std :: cout << matrix[i][j] << '\t';
        }
        std :: cout << "\n";
    }
}
