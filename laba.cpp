/***************************
 * Автор: Дорошкевич Матвей*
 * Вариант: 5              *
 * *************************/

#include <iostream>
#include <cmath>
using namespace std;

const int k = 5;

int Sum(int arr[], int size) {
  int s = 0;
  for (int i = 0; i < size; i++) {
    s = s + arr[i];
  }
  return s;
}

void Sum2(int arr[], int size, int &res) {
  res = 0;
  for (int i = 0; i < size; i++) {
    res = res + pow(arr[i], 2);
  }
}

void Sum3(int arr[], int size, int &res) {
  res = 0;
  for (int i = 0; i < size; i++) {
    res = res + pow(arr[i], 3);
  }
}

void PrintArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  setlocale(0, "");
  int D[k];
  int s, s2, s3;

  cout << "Введите элементы массива:" << endl;
  for (int i = 0; i < k; i++) {
    cout << "D[" << i << "] = ";
    cin >> D[i];
  }

  cout << "Массив: ";
  PrintArray(D, k);

  s = Sum(D, k);
  Sum2(D, k, s2);
  Sum3(D, k, s3);

  cout << "Сумма элементов = " << s << endl;
  cout << "Сумма квадратов = " << s2 << endl;
  cout << "Сумма кубов = " << s3 << endl;

  return 0;
}
