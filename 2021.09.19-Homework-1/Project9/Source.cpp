#include<iostream>

using namespace std;

int main(int argc, char* argv[])

     int a = 0
     int b = 0
     int c = 0
     cin >> a;
     cin >> b;

  c = ((a / b * a + b / a * b) / (a / b + b / a));

  cout << c << endl;

return EXIT_SUCCESS;
}
