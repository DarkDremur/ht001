//5
#include <iostream> 
#include <stdio.h> 
int main()
{

	setlocale(LC_ALL, "");

	//5.	Дано значение температуры T в градусах Фаренгейта. Определить значение этой же температуры 
	//в градусах Цельсия. Температура по Цельсию TC и температура по Фаренгейту TF связаны следующим соотношением:
	//TC = (TF − 32)·5/9.

	int TF, TC;

	printf("укажите температуру TF : ");
	scanf_s("%d", &TF);


	TC = (TF - 32) * 5 / 9;

	printf("Температура ТС равна: %d\n", TC);


	system("pause");
}

//4
/*#include <iostream> 
#include <stdio.h> 
int main()
{

	setlocale(LC_ALL, "");

	//4.	Дано число A. Вычислить A15, используя две вспомогательные переменные
	//и пять операций умножения. Для этого последовательно находить A2, A3, A5, A10, A15. Вывести все найденные степени числа A

	int A, a, b, c, d, r;

	printf("укажите число A : ");
	scanf_s("%d", &A);

	a = A * A; //2

	b = A * A * A; //3

	d = A * A * A * A * A; //5

	c = A * A * A * A * A * A * A * A * A * A; //10

	r = A * A * A * A * A * A * A * A * A * A * A * A * A * A * A; //15


	printf("result (A^2): %d\n", a);

	printf("result (A^3): %d\n", b);

	printf("result (A^5): %d\n", d);

	printf("result (A^10): %d\n", c);

	printf("result (A^15): %d\n", r);


	system("pause");
}

//3
/*#include <iostream> 
#include <stdio.h> 
int main()
{

	setlocale(LC_ALL, "");

	//3.	Дано число A. Вычислить A8, используя вспомогательную переменную
	//и три операции умножения. Для этого последовательно находить A2, A4, A8. Вывести все найденные степени числа A.

	int A, a, b, c;

	printf("укажите число A : ");
	scanf_s("%d", &A);

	a = A * A; //2

	b = A * A * A * A; //4

	c = A * A * A * A * A * A * A * A; //8


	printf("result (A^2): %d\n", a);

	printf("result (A^4): %d\n", b);

	printf("result (A^8): %d\n", c);


	system("pause");
}

//2
/* #include <iostream> 
#include <stdio.h> 
int main()
{

	setlocale(LC_ALL, "");

	//2.	Найти значение функции y = 4(x−3)6 − 7(x−3)3 + 2 при данном значении x.

	int y, x;

	printf("укажите число х : ");
	scanf_s("%d", &x);
	

	y = 4 * (x - 3) * 6 - 7 * (x - 3) * 3 + 2;

	printf("result (y): %d\n", y);


	system("pause");
}

//1
/* #include <iostream> 
#include <stdio.h> 
int main()
{

	setlocale(LC_ALL, "");

	//1.	Найти значение функции y = 3x6 −6x2 −7 при данном значении x.

	int y, x;

	printf("укажите число х : ");
	scanf_s("%d", &x);

	y = 3 * x * x * x * x * x * x - 6* x * x - 7;

	printf("result (y): %d\n", y);


	system("pause");
}*/
