#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
  setlocale(LC_ALL, "Russian");
  
  int a = 0;
  int b = 0;
  int c = 0;
  
  cout<<"Значение а: ";
  cin >> a;
  cout<<"Значение а: ";
  cin >> b;
  
  c = a;
  a = b;
  b = c;
  
  cout <<"Новое значение переменной а: "<< a << endl;
  cout <<"Новое значение переменной b: "<< b << endl;
  
  return EXIT_SUCCESS;
}
