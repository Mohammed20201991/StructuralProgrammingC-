# Lab 3: Matrix Operations in C++
 Topic: 2D Arrays & Matrix Operations

## Overview

This lab introduces **matrix operations using 2D arrays in C++**.\
Students will learn how to declare, read, process, and manipulate
matrices using nested loops.

The lab focuses on:

-   Matrix Addition
-   Matrix Subtraction
-   Scalar Multiplication
-   Matrix Comparison
-   Trace Calculation
-   Row & Column Summation


# Lab Objectives

After completing this lab, students will be able to:

-   Understand 2D arrays (matrices) in C++
-   Use nested loops efficiently
-   Perform basic matrix arithmetic operations
-   Apply logical checks on matrices
-   Develop structured and readable C++ programs

# Part 1: Review --- 2D Arrays in C++

A matrix in C++ is stored using a two-dimensional array:

``` cpp
int matrix[3][3];
```

###  Accessing Elements

``` cpp
matrix[i][j];
```

-   `i` → row index\
-   `j` → column index\
-   Indexing starts from **0**


###  Reading Matrix Elements

``` cpp
for(int i = 0; i < rows; i++)
    for(int j = 0; j < cols; j++)
        cin >> matrix[i][j];
```


# Part 2: Matrix Addition

## Rule

Two matrices can be added only if they have the same size `(n × m)`.

## Formula

    C[i][j] = A[i][j] + B[i][j]


#  Part 3: Matrix Subtraction

## Rule

Matrices must have the same dimensions.

##  Formula

    C[i][j] = A[i][j] - B[i][j]



# Part 4: Scalar Multiplication

Multiply matrix by constant `k`.

## Formula

    C[i][j] = A[i][j] * k



# Part 5: Matrix Comparison

Check if two matrices are equal.

``` cpp
bool equal = true;

for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
        if(A[i][j] != B[i][j])
            equal = false;

if(equal)
    cout << "Matrices are Equal";
else
    cout << "Matrices are NOT Equal";
```



# Part 6: Trace of a Square Matrix

The **trace** is the sum of the main diagonal elements.

## Formula

    Trace = A[0][0] + A[1][1] + ... + A[n-1][n-1]


# Part 7: Row & Column Sum

##  Row Sum

``` cpp
for(int i = 0; i < n; i++) {
    int rowSum = 0;
    for(int j = 0; j < m; j++)
        rowSum += A[i][j];

    cout << "Row " << i+1 << " Sum = " << rowSum << endl;
}
```

## Column Sum

``` cpp
for(int j = 0; j < m; j++) {
    int colSum = 0;
    for(int i = 0; i < n; i++)
        colSum += A[i][j];

    cout << "Column " << j+1 << " Sum = " << colSum << endl;
}
```



# Lab Tasks

### Task 1

Write a program that: - Reads two 3×3 matrices - Computes: - A + B - A -
B

### Task 2

Write a program that: - Reads a square matrix - Computes: - Trace - Row
sums - Column sums

### Task 3 (Challenge )

Create a menu-driven program:

    1. Addition
    2. Subtraction
    3. Scalar Multiplication
    4. Trace
    5. Exit


# Compilation & Run

Using g++:

``` bash
g++ matrix.cpp -o matrix
./matrix
```

#  Expected Learning Outcomes

By the end of this lab, students should:

-   Master nested loops
-   Understand matrix indexing logic
-   Perform matrix arithmetic operations
-   Build structured C++ programs
-   Improve logical thinking skills


Instructor: Structural Programming Lab\
Lab Number: 3\
Department: AI 
