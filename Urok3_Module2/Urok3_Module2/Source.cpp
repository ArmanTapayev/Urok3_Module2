#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>
#include<time.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	do
	{
		cout << "Работа содержит 10 заданий." << endl;
		cout << "Для завершения наберите 0." << endl;
		cout << endl;
		cout << "Введите номер задания n=";
		cin >> n;
		cout << endl;

		switch (n)
		{
			case 1:
			{
				/*1. Определить, является ли данное целое число четным*/

				int a;

					cout << "Введите целое число а: ";
					cin >> a;

					if (a % 2 == 0) cout << "Число четное." << endl;
						else cout << "Число нечетное." << endl;

				system("pause");
				system("cls");
			}break;

			case 2:
			{
				/*2. Записать условие, которое является истинным, 
				когда целое А кратно двум или трем.*/

				int A;

					cout << "Введите целое число A: ";
					cin >> A;

					if (A % 2 == 0 || A % 3 == 0) cout << "Число А кратно двум или трем." << endl;
						else cout << "Число А не кратно двум или трем." << endl;

				system("pause");
				system("cls");
			}break;

			case 3:
			{
				/*3. Записать условие, которое является истинным,
				когда каждое из чисел А и В нечетное.*/

				int A, B;

					cout << "Введите целое число A: ";
					cin >> A;

					cout << "Введите целое число B: ";
					cin >> B;

					if (A % 2 != 0 && B % 2 != 0) cout << "Каждое из чисел А и В нечетное." << endl;
						else cout << "Не каждое из чисел А и В нечетное." << endl;

				system("pause");
				system("cls");
			}break;

			case 4:
			{
				/*4. Вычислить значение логических выражений при следующих 
				значениях логических переменных X=0, Y=0, Z=1 
					a.	X<Y>Z
					b.	X>Y
					c.	(X>Z)<Y  */

				bool x=false, y=false, z=true, result, f;

				result = x<y>z;
				cout << "a. X<Y>Z = " << result << endl;

				result = x > y;
				cout << "b. X>Y = " << result << endl;

				f = x > z;
				result = f < y;
				cout << "c. (X>Z)<Y = " << result << endl;

				system("pause");
				system("cls");
			}break;

			case 5:
			{
				/*5. Записать логическое выражение, описывающее область определения функции 
					a.	y=2tg x; 
					b.	у=3/(x-1).  */

				double x;
				const double PI = 3.14159265;

				/*Область определения функции y=2tg x:  x≠(π/2)± πn 
				Рассмотрим функцию на отрезке [-π/2; π/2] */

				cout << "Введите число x: ";
				cin >> x;

					if (x != (PI / 2) && x != (-PI / 2))  cout << "x входит в область определения функции y=2tg x." << endl;
						else cout << "x не входит в область определения функции y=2tg x." << endl;
					cout << endl;

					if (x!=1) cout << "x входит в область определения функции у=3/(x-1)." << endl;
						else cout << "x не входит в область определения функции у=3/(x-1)." << endl;
					cout << endl;

				cout << endl;
				system("pause");
				system("cls");
			}break;

			case 6:
			{
				/*6. Вычислить значения логических выражений при следующих значениях логических переменных А=1, В=0, С=1
					a.	A<(A>B)<C
					b.	A<C>(B<C)
					c.	(A<B>C)<A    */

				bool a = true, b = false, c = true, d, e, f, g;
				bool result;

				d = a > b;
				result = a < d < c;
				cout << "a.	A<(A>B)<C = " << result << endl;
				cout << endl;

				e = b < c;
				result = a<c>e;
				cout << "b.	A<C>(B<C) = " << result << endl;
				cout << endl;

				f = a < b;
				g = f > c;
				result = g < a;
				cout << "c.	(A<B>C)<A = " << result << endl;
				cout << endl;

				system("pause");
				system("cls");
			}break;

			case 7:
			{
				/*7. Записать логическое выражение определяющее, что число А 
				является трехзначным.*/

				int a;

				cout << "Введите целое число a: ";
				cin >> a;
				cout << endl;

					if (a>=100 && a<=999) cout << "Число является трехзначным." << endl;
						else cout << "Число не является трехзначным." << endl;

				system("pause");
				system("cls");
			}break;

			case 8:
			{
				/*8. Записать условие, которое является истинным, 
				когда только одно из чисел А, В и С меньше 45.*/

				int A, B, C;

				cout << "Введите целое число A: ";
				cin >> A;

				cout << "Введите целое число B: ";
				cin >> B;

				cout << "Введите целое число C: ";
				cin >> C;

				cout << endl;

					if ((A<45 && B>=45 && C>=45) || (A>=45 && B<45 && C>=45) || (A>=45 && B>=45 && C<45)) 
						cout << "Только одно из чисел А, В и С меньше 45." << endl;
					else
						cout << "Условие \"Только одно из чисел А, В и С меньше 45\" не выполняется." << endl;

				cout << endl;
				system("pause");
				system("cls");
			}break;

			case 9:
			{
				/*9. Записать условие, которое является истинным, когда целое А 
				не кратно трем и оканчивается нулем*/

				int A;

				cout << "Введите целое число A: ";
				cin >> A;
				cout << endl;

					if (A%3!=0 && A%10 == 0)
						cout << "Число не кратно трем и оканчивается нулем." << endl;
					else
						cout << "Условие \"Число не кратно трем и оканчивается нулем.\" не выполняется." << endl;

				cout << endl;
				system("pause");
				system("cls");
			}break;

			case 10:
			{
				/*10. Записать логическое выражение, которое определяет, принадлежит ли
				число А интервалу от -137 до -51 или интервалу от 123 до 55.*/

				int A;

				cout << "Введите целое число A: ";
				cin >> A;
				cout << endl;

				if ((A>=-137 && A <= -51) || (A >= 55 && A <= 123))
					cout << "Число принадлежит интервалу от -137 до -51 или интервалу от 123 до 55." << endl;
				else
					cout << "Число не принадлежит интервалу от -137 до -51 или интервалу от 123 до 55." << endl;

				cout << endl;
				system("pause");
				system("cls");
			}break;

		}
	} while (n != 0);
}


