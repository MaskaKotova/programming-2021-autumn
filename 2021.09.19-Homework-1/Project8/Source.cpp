#include<iostream>

using namespace std;

int main(int argc, char* argv[]) {

	int a = 0;
	int b = 0;
	int c = 0;
	int a1 = 0;
	int b1 = 0;
	int c1 = 0;
	
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> a1;
	cin >> b1;
	cin >> c1;

	int d = 3600;
	int f = 60;
	a = a * d;
	a1 = a1 * d;
	b = b * f;
	b1 = b1 * f;
	int g = (a1 + b1 + c1) - (a + b + c);

	cout << g << endl;

	return EXIT_SUCCESS;
}
