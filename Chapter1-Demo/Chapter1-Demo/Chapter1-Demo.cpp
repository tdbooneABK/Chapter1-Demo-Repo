#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

	cout << "Gimmie a number!" << endl;
	cin >> num1;

	cout << "Gimmie another number!" << endl;
	cin >> num2;

	cout << "Gimmie one more number." << endl;
	cin >> num3;

	int sum = (num1 + num2 + num3);
	cout << "Here's the sum:" << endl << sum << endl;
	cout << "Here's the average:" << endl << ((float)sum) / 3.0 << endl;
}
