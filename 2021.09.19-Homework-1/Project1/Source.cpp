#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	cin >> a;

	int b = a + 1;
	int c = a - 1;

	cout << "The next number for the number " << a << " is " << b << "." << endl;
	cout << "The previous number for the number " << a << " is " << c << "." << endl;

	return EXIT_SUCCESS;
}