#include <iostream>
using namespace std;
int main() {
	int b = 0;
	char c;
	while ((cin >> b).get(c))
	{
		cout << b << endl;
		if (c == '\n')
			break;
	}
	cout << "����" << endl;
	return 0;
}
