#include <iostream>

using namespace std;

int func(int arr[],int n) //заголовок функции
{
  int fact=1;
  for(int i =0;i<n;i++)
    {
      if(arr[i]<8)//проверка на то что число не больше 8
      {
        for( ;arr[i]>1;arr[i]--)//вычисление факториала
          {
            fact*=arr[i];
          }
        break;//вызод из цикла так как нас интересует только первое число что истинно условию
      }
    }
  return fact;//возвращаем значение
}

int main() {
  int fact;
  const int n=15;
  int arr[n];
  for(int i = 0; i< n; i++)//инициализация массива
    {
      cin >>arr[i];
    }
  fact=func(arr,n);//вызов функции
  cout << fact;
    return 0;
}