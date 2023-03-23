#include <iostream>

using namespace std;

void func(int arr[],int n) //заголовок функции
{
  int sum=0;
  int fact=1;
  for(int i =0;i<n;i++)//нахождение суммы всех не парных элементов с знаком +
    {
      if(arr[i]>0&&(i+1)%2!=0)
      {
        sum+=arr[i];
      }
    }
  for (int i =0;i<n;i++)//замена всех парных элементов
    {
      if((i+1)%2==0)
      {
        arr[i]=sum;
      }
    }
}

int main() {
  const int n=15;
  int arr[n];
  for(int i = 0; i< n; i++)//инициализация массива
    {
      cin >>arr[i];
    }
  func(arr,n);//вызов функции
  for(int i=0;i<n;i++)//вывод масива
    {
      cout << arr[i]<<"\t";
    }
    return 0;
}