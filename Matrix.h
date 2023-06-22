#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix{
	protected:
		int** arr_2d;
		int row;
		int column;
	public:
		Matrix();
		Matrix(int, int);
		~Matrix();
		Matrix(const Matrix&);
		Matrix& operator = (const Matrix&);
		void print();
		void init();
};

#endif