#include <iostream>
#include <ctime>
using namespace std;
int main() {


	/*const int n = 10;
	int mas[n];
	srand(time(nullptr));
	//�������� �� -20 �� 20
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 41 - 20;
		cout << mas[i] << ' ';
	}
	cout << endl;*/


	//Array1.���� ����� ����� N(> 0).������������ � ������� �������������
	//������ ������� N, ���������� N ������ ������������� �������� ����� :
	//1, 3, 5, . . . .


	/*const int n = 10;
	int mas[n];
	mas[0] = 1;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] + 2;
		cout << mas[i] << ' ';
	}*/


	//Array2.���� ����� ����� N(> 0).������������ � ������� �������������
	//������ ������� N, ���������� ������� ������ �� ������ �� N - �: 2, 4,
	//8, 16, . . . .


	/*const int n = 10;
	int mas[n];
	mas[0] = 2;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] * 2;
		cout << mas[i] << ' ';
	}*/


	//Array3.���� ����� ����� N(> 1), � ����� ������ ���� A � �������� D
	//�������������� ����������.������������ � ������� ������ ������� N,
	//���������� N ������ ������ ������ ���������� :
	//A, A + D, A + 2�D, A + 3�D, . . . .


	/*const int n = 10;
	int a, d;
	cin >> a >> d;
	int mas[n];
	mas[0] = a;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] + d;
		cout << mas[i] << ' ';
	}*/


	//Array4.���� ����� ����� N(> 1), � ����� ������ ���� A � ����������� D
	//�������������� ����������.������������ � ������� ������ ������� N,
	//���������� N ������ ������ ������ ���������� :
	//A, A�D, A�D2, A�D3, . . . .


	/*const int n = 10;
	int a, d;
	cin >> a >> d;
	int mas[n];
	mas[0] = a;
	cout << mas[0] << ' ';
	for (int i = 1; i < n; i++) {
		mas[i] = mas[i - 1] * d;
		cout << mas[i] << ' ';
	}*/


	/*Array7?.��� ������ ������� N.������� ��� �������� � �������� �������.*/


	/*const int size = 10;
	int mas[size];
	for (int i = 0; i < size; i++) {
	    mas[i] = rand() % 11;
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = size - 1; i >= 0; i--) {
		cout << i << endl;
	}*/


	/*Array8.��� ������������� ������ ������� N.������� ��� ������������ �
	������ ������� �������� ����� � ������� ����������� �� ��������, �
	����� �� ���������� K.*/


	/*const int size = 10;
	int mas[size];
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % 11;
		cout << mas[i] << ' ';
	}
	int kol = 0;
	for (int i = 0; i < size; i++) {
		if (mas[i] % 2 != 0) {
			kol++;
			cout << mas[i] << endl;

		}
	}
	cout << "kol = " << kol << endl; */


/*Array9.��� ������������� ������ ������� N.������� ��� ������������ �
������ ������� ������ ����� � ������� �������� �� ��������, � �����
�� ���������� K.*/


/*const int size = 10;
int mas[size];
for (int i = 0; i < size; i++) {
	mas[i] = rand() % 11;
	cout << mas[i] << ' ';
}
int kol = 0;
for (int i = size - 1; i >= 0; i--) {
	if (mas[i] % 2 == 0) {
		kol++;
		cout << mas[i] << endl;

	}
}
cout << "kol = " << kol << endl;*/


/*Array10.��� ������������� ������ ������� N.������� �������
��� ������������ � ������ ������� ������ ����� � �������
����������� �� ��������,� ����� � ��� �������� �����
� ������� �������� �� ��������.*/


/*const int size = 10;
int mas[size];
for (int i = 0; i < size; i++) {
	mas[i] = rand() % 11;
	cout << mas[i] << ' ';
}
for (int i = 0; i < size; i++) {
	if (mas[i] % 2 == 0) {
		cout << mas[i] << endl;
	}
}
for (int i = size; i >= 0; i--) {
	if (mas[i] % 2 != 0) {
		cout << mas[i] << endl;
	}
}*/


/*Array5.���� ����� ����� N(> 2).������������ � ������� �������������
������ ������� N, ���������� N ������ ��������� ������������������
����� ��������� FK :
F1 = 1, F2 = 1, FK = FK?2 + FK?1, K = 3, 4, . . . .*/


const int n = 19;
int mas[n];
mas[0] = 1;
cout << mas[0] << ' ';
for (int i = 2; i < n; i++) {
	mas[i] = mas[i - 1] + mas[i - 2];
	cout << mas[i] << ' ';
}
}