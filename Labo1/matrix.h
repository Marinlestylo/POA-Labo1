//
// Created by Jonathan on 24.02.2022.
//

#ifndef LABO1_MATRIX_H
#define LABO1_MATRIX_H

#include <iostream>
#include <cstdlib>
#include <ctime>

class Matrix;

std::ostream &operator<<(std::ostream &os, const Matrix &matrix);

class Matrix {
public:
    Matrix(size_t row,size_t col,unsigned mod);
    Matrix(const Matrix &matrix);
    ~Matrix();

    Matrix &operator=(const Matrix &other);

    friend std::ostream &operator<<(std::ostream &os, const Matrix &matrix);

    unsigned int getMod() const;

    size_t getRow() const;

    size_t getCol() const;
    unsigned getVal(size_t row,size_t col) const;
    void printMatrix();

private:
    void generateMatrix();
    unsigned randomNumber();

    unsigned mod;
    size_t row,col;
    unsigned** values;
};
#endif //LABO1_MATRIX_H