﻿#include <iostream>
using namespace std;

int main() {
// programme 2.5-1 
//	Интересным делителем называется число N, которое является делителем числа N+1. Вам требуется найти количество интересных делителей на отрезке от L до R, концы отрезка включаются. * /
/*	unsigned long long int L, R;
		cin >> L >> R;
		if (L == 1)
			cout << 1;
		else
			cout << 0;  */

// programme 2.5-2 
/*	Программист Антоша хочет стать самым лучшим программистом, ну, или хотя бы решить задач больше своего старшего брата Андрюши.
Сейчас количество решенных задач Антоши равно aa, а количество решенных задач Андрюши равно b. Гарантируется, что количество решенных задач у Антоши меньше или равно числу решенных задач Андрюши.
Антоша решает много, и его количество решенных задач утраивается каждый год, а количество решенных задач Андрюши удваивается каждый год.
Через сколько целых лет Антоша решит строго больше задач чем Андрюша?
Входные данные: В единственной строке находятся два целых числа a и b (1 ≤ a ≤ b ≤ 10) - количество решенных задач у Антоши и Андрюши соответственно. * /
/*  int n , b , k=0;
	  cin >> n >> b;
	  while (n <= b) {
	      ++k;
	      n*=3;
	      b*=2;
	  }
	        cout << k;	*/

// programme 2.5-3
/*	в стране n ввели новый налог - большие буквы стали платными.теперь, за каждую большую букву требуется отдавать b бубликов.
	не у каждого найдется столько, поэтому на больших буквах теперь надо экономить. однажды один очень богатый Андрей (большая буква
	в имени проспонсирована им) составил предложение. вам необходимо посчитать, во сколько бубликов обошлось такое предложение Андрею.

входные данные:
в первой строке входных данных записано единственное число b (1 ≤ b ≤ 10^4).
во второй строке следует составленное Андреем предложение.оно содержит большие и маленькие буквы латинского алфавита, пробелы,
запятые и точку.гарантируется, что в предложении ровно одна точка, а также что предложение на нее заканчивается.

выходные данные:
выведите единственное число - количество бубликов, которое должен заплатить Андрей за составленное предложение. * /
/*	int n, kol = 0;
	char stroka;
	cin >> n;

	do {
		cin >> stroka;
		if (stroka <= 90 && stroka >= 65) {
			kol ++;
		}
	}
	while (stroka != '.');

	cout << ( kol * n ) << endl;
	return 0;	*/

// programme 2.5-4 
/*	Школьник Петя списывал задачи на Летней Компьютерной Школе 2020, поэтому преподаватели заставили его играть в следующую игру.
	Петя должен сделать nn приседаний (1 ≤ n ≤ 20000 ), причем он должен озвучивать номер каждого приседания (нумерация с 1).
	Если номер текущего приседания не делится ни на 3, ни на 5, то Петя просто называет этот номер. Если номер делится на 3,
	но не делится на 5, то Петя произносит <<Бац>>. Если номер делится на 5, но не делится на 3, то Петя произносит <<Бум>>.
	Если номер делится на 15, то Петя произносит <<Бацбум>>.
	Вам необходимо ответить, сколько соответственно раз Петя произнесет <<Бац>>, <<Бум>> и <<Бацбум>>. * /
/*	int n, k = 0, j = 0, m = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
	if (i % 3 == 0 && i % 5 != 0) {
		k++;
	}
	if (i % 5 == 0 && i % 3 != 0) {
		j++;
	}
	if (i % 15 == 0) {
		m++;
	}
}
cout << k << " " << j << " " << m << endl;	*/

}