/***************************
 * Автор: Дорошкевич Матвей*
 * Вариант: 5              *   
 * ************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  setlocale(0, "");
  
  int numberCount;
  cout << "Введите количество элементов массива: ";
  cin >> numberCount;
  
  int numberList[numberCount];
  int sum, sumSquare, sumCube;

  cout << "Введите элементы массива:" << endl;
  for (int index = 0; index < numberCount; ++index) {
    cout << "D[" << index << "] = ";
    cin >> numberList[index];
  }

  cout << "Массив: ";
  for (int index = 0; index < numberCount; ++index) {
    cout << numberList[index] << " ";
  }
  cout << endl;

  sum = 0;
  for (int index = 0; index < numberCount; ++index) {
    sum = sum + numberList[index];
  }

  sumSquare = 0;
  for (int index = 0; index < numberCount; ++index) {
    sumSquare = sumSquare + pow(numberList[index], 2);
  }

  sumCube = 0;
  for (int index = 0; index < numberCount; ++index) {
    sumCube = sumCube + pow(numberList[index], 3);
  }

  cout << "Сумма элементов = " << sum << endl;
  cout << "Сумма квадратов = " << sumSquare << endl;
  cout << "Сумма кубов = " << sumCube << endl;

  return 0;
}
