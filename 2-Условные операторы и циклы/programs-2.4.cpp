#include <iostream>
using namespace std;

int main() {
// programme 2.4-1 
/* � ���� ������ ��������� ����� ����� ����� �� 11 �� nn. */
/*	int n;
	cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		ans += i;
	}
	cout << ans;
	return 0;  */

// programme 2.4-2 
/* � ���� ������ ��������� ������� ��� ������ ����� �� 11 �� nn � ������� ��������. */
/*	int a;
	cin >> a;
	a = a - a % 2;
	for (int i = a; i > 0; i -= 2)
	{
		cout << i << " ";
	}
	return 0;  */

// programme 2.4-3 
/* ���� ��������� �����, ��������� ������� ��� �� �����. */
/*  int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		cout << x << " ";
	} */

// programme 2.4-4 
/* � ���� ������ ��� ��������� ��������� ��������� �����: 1 + a + a^2 + a^3 + ... + a^n.  */
/*	long long a, n, sum = 1, x = 1;
	cin >> a >> n;
	for (int i = 0; i < n; i++)
	{
		sum += a * x;
		x *= a;
	}
	cout << sum;  */

// programme 2.4-5 
/* � ���� ������ ��� ��������� ��������� ��������� �����: 1 - a + a^2 - a^3 + ... � a^n.  */
/* 	long long a, n, sum = 1, x = 1;
	cin >> a >> n;
	for (int i = 0; i < n; i++)
	{
		x = -a * x;
		sum += x;
	}
	cout << sum; */
}
