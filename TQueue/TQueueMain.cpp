// ННГУ, ИИТММ, Курс "Алгоритмы и структуры данных"
//
// Copyright (c) Сысоев А.В.
//
// Тестирование матриц

#include <iostream>
#include "TQueue.h"
//---------------------------------------------------------------------------

void main()
{
	int size = 150000000;
	TQueue<int> q(size);

	//clock_t start = clock();
	for (size_t i = 0; i < size; i++)
	{
		q.Push(1);
	}
	//clock_t end = clock();

	clock_t start = clock();
	for (size_t i = 0; i < size; i++)
	{
		q.Pop();
	}
	clock_t end = clock();
	double seconds = (double)(end - start) / CLOCKS_PER_SEC;
	printf("The time: %f seconds\n", seconds);

}
//---------------------------------------------------------------------------
