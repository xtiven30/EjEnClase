#include <iostream>
using namespace std;

/*
int main() {
int n;
cout << "Digite un numero" << endl; cin >> n;
if (n > 1 && n < 5)
{
cout << "El numero esta entre 1 y 5" << endl;

}
system("Pause");
}*/

/*int main() {
	int n;
	cout << "Digite un numero" << endl; cin >> n;

	if (0<n<5 || 10<n<15)
	{
		cout << "El numero esta entre 0 y 5 o entre 10 y 15" << endl;
	}
	system("Pause");

	}*/

int main() {
	int n1, n2, n3, media;
	cout << "Digite la primera nota" << endl; cin >> n1;
	cout << "Digite la segunda nota" << endl; cin >> n2;
	cout << "Digite la tercera nota" << endl; cin >> n3;
	media = (n1 + n2 + n3) / 3;
	if (media >= 0 && media < 50)
	{
		cout << "Su concepto es de E" << endl;
	}
	else {
		if (media >= 50 && media <60)
		{
			cout << "Su concepto es de D" << endl;
		}
		if (media >= 60 && media < 70)
		{
			cout << "Su concepto es de C" << endl;
		}
		if (media >= 70 && media < 80)
		{
			cout << "Su concepto es de B" << endl;
		}
		if (media >= 80 && media < 100)
		{
			cout << "Su concepto es de A" << endl;
		}
	}
	
system("Pause");
}