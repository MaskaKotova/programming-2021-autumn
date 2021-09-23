#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;
	const int S = 109;
	int a = 0;
	cin >> v >> t;

	a = v * t;
	a = a % S;
	a = a + 109;
	a = a % 109;

	cout << a << endl;

	return EXIT_SUCCESS;
}