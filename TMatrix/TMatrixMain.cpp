// ННГУ, ИИТММ, Курс "Алгоритмы и структуры данных"
//
// Copyright (c) Сысоев А.В.
//
// Тестирование матриц

#include <iostream>
#include "tmatrix.h"
#include "time.h"
//---------------------------------------------------------------------------

void main()
{
	/*setlocale(LC_ALL, "Russian");
	int sizem, sizev, num, wait;
	srand(time(0));
	cout << "Введите размер матрицы (n x n):";
	cin >> sizem;

	TDynamicMatrix<Rational> m1(sizem), m2(sizem), resm(sizem);
	cout << "Введите элементы матрицы :" << endl;
	cin >> m1;

	for (int i = 0; i < sizem; i++){
		for (int j = 0; j < sizem; j++){
			m2[i][j] = (double)rand()/RAND_MAX * (100 - 1) + 1;
		}
	}
	cout << "Пользовательская матрица:" << endl << m1 << endl;
	cout << "Случайная матрица с элементами от 1 до 100:" << endl << m2 << endl;

	cout << endl << "---------------------------------------------------" << endl <<
		"1) Умножение  2) Деление 3) Сложение 4) Вычитание";
	cout << endl << "Введите номер операции для выполнения: ";
	cin >> num;
	cout << "Результат выполнения операции ";
	switch (num)
	{
	case(1):
		cout << "m2 * m1:\n";
		resm = m2 * m1;
		break;
	case(2):
		cout << "m2 / m1:\n";
		resm = m2 / m1;
		break;
	case(3):
		cout << "m2 + m1:\n";
		resm = m2 + m1;
		break;
	case(4):
		cout << "m2 - m1:\n";
		resm = m2 - m1;
		break;
	default:
		break;
	}
	cout << resm;
	cout << endl << "---------------------------------------------------";

	
	cout << "\nВведите размер вектора n элементов:";
	cin >> sizev;
	TDynamicVector<double> v1(sizev), v2(sizev), resv(sizev);
	cout << endl << "Введите элементы:";
	cin >> v1;
	for (int i = 0; i < sizev; i++) v2[i] = (double)rand() / RAND_MAX * (100 - 1) + 1;
	cout << "Пользовательский вектор:" << endl << v1 << endl;
	cout << "Случайный вектор с элементами от 1 до 100:" << endl << v2 << endl;

	cout << endl << "---------------------------------------------------" << endl <<
		"1) Умножение  2) Деление 3) Сложение 4) Вычитание";
	cout << endl << "Введите номер операции для выполнения: ";
	cin >> num;
	cout << "Результат выполнения операции ";
	switch (num)
	{
	case(1):
		cout << "v2 * v1:\n";
		resv = v2 * v1;
		break;
	case(2):
		cout << "v2 / v1:\n";
		resv = v2 / v1;
		break;
	case(3):
		cout << "v2 + v1:\n";
		resv = v2 + v1;
		break;
	case(4):
		cout << "v2 - v1:\n";
		resv = v2 - v1;
		break;
	default:
		break;
	}
	cout << resv;
	cout << "\nОтправьте любую цифру для выхода: ";
	cin >> wait;*/

	srand(time(0));
	int size = 100;
	TDynamicMatrix<int> matrix(size), matrix2(size);
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < size; j++)
		{
			matrix[i][j] = rand()/RAND_MAX * (100 - 1) + 1;
		}
	}
	for (size_t i = 0; i < size; i++) {
		for (size_t j = 0; j < size; j++)
		{
			matrix2[i][j] = rand() / RAND_MAX * (100 - 1) + 1;
		}
	}
	clock_t start = clock();
	matrix * matrix2;
	clock_t end = clock();

	double seconds = (double)(end - start) / CLOCKS_PER_SEC;
	printf("The time: %f seconds\n", seconds);
}
