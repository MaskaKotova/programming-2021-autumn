int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	 int b = 0;
	 int a = 0;
	 int c = 0;
	 int d = 0;
	 int m = 0;

	cout << "Введите трехзначное число: " << endl;
	cin >> a;

	b = a / 100;
	c = a / 10 - b * 10;
	d = a - b * 100 - c * 10;
	m = b + c + d;

	cout <<"Сумма цифр: "<< m << endl;

	return EXIT_SUCCESS;
}
