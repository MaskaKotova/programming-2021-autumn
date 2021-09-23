#include<iostream>

using namespace std;

int main(int argc, char* argv[])

ind a = 0
ind b = 0
cin >> a;
cin >> b;

a = a + b;
b = b - a;
b = -b;
a = a - b;

cout << a << endl;

return EXIT_SUCCESS;
}