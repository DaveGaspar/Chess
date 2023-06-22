#include "Matrix.h"

Matrix::Matrix(){
    row = column = 8;
    arr_2d = new int*[row];
    for(int i = 0; i < row; i++){
        arr_2d[i] = new int[column];
    }
}

Matrix::Matrix(int n, int m){
    if (n < 1 || m < 1){
        std::cerr << "Sizes of matrix can't be negative or 0\n";
        abort();
    }
    row = n;
    column = m;
    arr_2d = new int*[row];
    for(int i = 0; i < row; i++){
        arr_2d[i] = new int[column];
    }
}

Matrix::~Matrix(){
    for(int i = 0; i < row; i++){
        delete[] arr_2d[i];
        arr_2d[i] = nullptr;
    }
    delete[] arr_2d;
    arr_2d = nullptr;
}

Matrix::Matrix(const Matrix& obj){
    this->row = obj.row;
    this->column = obj.column;
    this->arr_2d = new int*[this->row];
    for (int i = 0; i < this->row; i++){
        this->arr_2d[i] = new int[this->column];
        for (int j = 0; j < column; j++){
            this->arr_2d[i][j] = obj.arr_2d[i][j];
        }
    }
}

Matrix& Matrix::operator = (const Matrix& obj){
    if (this != &obj){
        for (int i = 0; i < this->row; i++){
            delete[] this->arr_2d[i];
            this->arr_2d[i] = nullptr;
        }
        delete[] this->arr_2d;
        this->arr_2d = nullptr;
        this->row = obj.row;
        this->column = obj.column;
        this->arr_2d = new int*[this->row];
        for (int i = 0; i < this->row; i++){
            this->arr_2d[i] = new int[this->column];
            for (int j = 0; j < column; j++){
                this->arr_2d[i][j] = obj.arr_2d[i][j];
            }
        }
    }
    return *this;
}

void Matrix::print(){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            std::cout << arr_2d[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void Matrix::init(){
    for (int i = 0; i < row; i++){
        for (int j = 0; j < column; j++){
            arr_2d[i][j] = rand() % 90 + 10;
        }
    }
}