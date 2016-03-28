/*
 * algo_tp_II_1/main.cpp
 *
 *   Created on: Mar 28, 2016
 *       Author: Dmitry Ermachenkov
 *      License: free-to-use if you refernce me
 *  Description: 1_1. Ящики.
 На склад привезли много пустых ящиков. Все ящики пронумерованы по порядку поступления от 0.
 Известно, что их все можно сложить один в один (то есть так, что каждый следующий помещается в
 предыдущий). Один ящик можно вложить в другой, если его можно перевернуть так, что размеры
 одного ящика по всем осям станут строго меньше размеров другого ящика по соответствующим осям.
 Требуется определить, в какой последовательности они будут вложены друг в друга. Вывести номера
 ящиков.
 */

//#include <iostream>
#include <cstdio>

typedef size_t data_t;
struct Box
{
  data_t axes[3];
};

void inputArray(data_t* array, size_t n);
void outputArray(data_t* array, size_t n);
//void insertSort(data_t& input, size_t n);

int main(void) {
  size_t n;
  scanf("%zu", &n);
  data_t* array = new data_t[n];
  inputArray(array, n);
  outputArray(array, n);

  delete[] array;
  return 0;
}

void inputArray(data_t* array, size_t n)
{
  for (size_t i = 0; i < n; ++i) {
    scanf("%zu", array+i);
  }
}

void outputArray(data_t* array, size_t n)
{
  for (size_t i = 0; i < n; ++i) {
    printf("%zu", array[i]);
  }
}
gsgdf
