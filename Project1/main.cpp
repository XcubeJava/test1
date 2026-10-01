#include <iostream> 
#include <Windows.h>
/*
int main()

{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	std::cout << "Даниил\n";
	std::cout << "\tчтобы быть сытым\n";
	std::cout << "\t\tчтобы его бить\n\t";
	std::cout << 50 << "р\n";
	std::cout << "Это что то\n\n\n";

	//тип_данных имя переменной
	int a = 0;
	a = 2 + 5;
	int A = 4;
	char neW = '+';

/*
	Типы данных

	bool                    true/false  o-false
							все кроме 0 это true
	char					'+'		43		-128 -- 127
	unsigned char			'#'				0 - 255

	short					123				-32768 -- 32767
	unsigned short			123				0 -- 65535

	int						53453436			-2137483648 -- 2137483647
	long long int			12345678			дофига
	unsigned int			54788567479		0 -- 4294967295

	float					12345.4561		3.4E-38
	double					12345678.10536	1.7E+-308
	long duble				no domment		3.4-4932 --1.1e+4932

	операторы:

	математические: + - * / = % ++ -- += -=*= /= ()
	сравнительные: > < <= >= != == <=>
	логические && (и) || (или) ! (не)

	Табу:	goto		and or not		int имяПеременной





	return 0;



}
*/

/*
 тип_возврата тип_функции (аргументы_функции, ...)
 {
	тело функции
 }

*/

void ExampleFunc()
{

	std::cout << "Hello\n";
}

void printarr(double name[], int length)
{
	for (int i = 0; i < length; i++)
	{
		std::cout << name[i] << " ";
	}
}

void setarr(int name[], int length)
{
	for (int i = 0; i < length; i++)
	{
		name[i] = rand() % 6;
	}
}

int MyPow(int base, int exp)
{
	int vivod = base;

	for (int i = 1; i < exp; i++)
	{
		vivod = vivod * base;
	}

	return vivod;

}
/*void PrintNum(int number)
{
	std::cout << number << "\n";
}*/


/*int sum(int one, int two)

{
	return one + two;
}
*/

int plus(double cifra , double cifra2)

{
		return cifra + cifra2;

}

double minus(double cifra, double cifra2)
{
	return cifra - cifra2;
}

double delenie(double cifra, double cifra2)
{
	return cifra / cifra2;
}

double ymnozhenie(double cifra, double cifra2)
{
	return cifra * cifra2;
}



int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));
	std::cout << MyPow(5,2);


/*	double one;
	double two;
	char znak;
	std::cout << "Введите 1 число\n";
	std::cin >> one;
	std::cout << "Введите действие\n";
	std::cin >> znak;
	std::cout << "Введите 2 число\n";
	std::cin >> two;

	if (znak == '+')
	{
		std::cout << plus(one, two);
	}
	else if (znak == '-')
	{
		std::cout << minus(one, two);
	}
	else if (znak == '*')
	{
		std::cout << ymnozhenie(one, two);
	}
	else if (znak == '/' && two != 0)
	{
		std::cout << delenie(one, two);
	}*/
	
	/*
		double a = 4.3;
		double b = 4.3;

		if (a  == b)
		{
			std::cout << "Seva";
		}

		if (a == 0)
		{
			std::cout << "Hello\n";
		}
		else if (a != 0)
		{
			std::cout << 2;
		}
		else
		{
			std::cout << 1;
		}
		std::cout << "Калькулятор\n";
		std::cout << "введите число\n";
		double cifra = 0;
		std::cin >> cifra;

		std::cout << "введите число N2\n";
		double cifra2 = 0;
		std::cin >> cifra2;

			std::cout << "Введи действия +, -, * или /\n";
			char deyst = 0;
			std::cin >> deyst;
			if (deyst == '+')
			{
				std::cout << cifra + cifra2;
			}
			else if (deyst == '-')
			{
				std::cout << cifra - cifra2;
			}
			else if (deyst == '*')
			{
				std::cout << cifra * cifra2;
			}
			else if (deyst == '/' && cifra2 != 0)
			{
				std::cout << cifra / cifra2;
			}
			else
			{
				std::cout << "действие невозможно";
			}



		double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;
		std::cout << "Введите а\n";
		std::cin >> a;
		std::cout << "Введите b\n";
		std::cin >> b;
		std::cout << "Введите c\n";
		std::cin >> c;

		std::cout << "формула дискриминанта";
		std::cout << "ax^2 + bx + c = 0\n";
		std::cout << a << "x^2+" << b << "x+" << c << "=0\n\n";
		d = std::pow(b, 2) - 4 * a * c;  //тут команда возведения в степень
		std::cout << d;
		if (d < 0)
		{
			std::cout << "нет корней \n";
		}
		else if (d == 0)
		{
			x1 = -b / (2 * a);
			std::cout << "один из корней" << x1;
		}
		else
		{
			x1 = (-b + std::sqrt(d)) / (2 * a);
			x2 = (-b - std::sqrt(d)) / (2 * a);
			std::cout << "x1=" << x1 << "\n";
			std::cout << "x2=" << x2 << "\n";
		}
		*/
		/*




			int choose = 0, randomNumber = 0, hp = 0, number = 0;
			int maxHp = 25, maxHpHard = 25;

			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\t Игра \"Угадай число\"\n\n\n";
				std::cout << "1 - Начать Игру\n";
				std::cout << "2 - Настройки\n";
				std::cout << "0 - Выход\n\n";
				std::cout << "Ввод:  ";
				std::cin >> choose;

				if (choose == 1)
				{
					while (true)
					{
						system("cls");
						std::cout << "\n\n\n\t\t Выберите уровень сложности\n\n\n";
						std::cout << "1 - Легкий (1 - 500)\n";
						std::cout << "2 - Сложный (1 - 5000)\n";
						std::cout << "0 - Выход в главное меню\n\n";
						std::cout << "Ввод:  ";
						std::cin >> choose;

						if (choose == 1)
						{
							randomNumber = rand() % 500 + 1;
							hp = maxHp;

							while (true)
							{
								std::cout << "Количество жизне:  "  << hp << "\n";
								std::cout << "Введите число на страх и риск от 1 до 500: ";
								std::cin >> number;

								if (number == randomNumber)
								{
									std::cout << "Ура ты угадал!\n";
									system("pause");
									break;
								}
								else if (number < 1 || number > 500)
								{
									std::cout << "Попробуй еще раз\n";
									Sleep(1000);
								}
								else
								{
									hp--;
									if (hp <= 0)
									{
									std::cout << "Вы проиграли\n";
									std::cout << "Число компьютера было: \n" << randomNumber << "\n\n";
									system("pause");
									break;
									}
								}
							}
						}
						else if (choose == 2)
						{

						}
						else if (choose == 0)
						{
							break;
						}
						else;
						{
							std::cout << "\nНеправильный ввод\n";
							Sleep(1500);
						}
					}
				}
				else if (choose == 2)
				{

				}
				else if (choose == 0)
				{
					system("cls");
					std::cout << "\n\n\n\t\t Спасибо За Игру\n\n\n";
					break;
				}
				else;
				{
					std::cout << "\nНеправильный ввод\n";
					Sleep(1500);
				}
			}

		*/
		/*const int size = 5;
		//тип_данных имя_массива[кол-во_ячеек]
		//int arr[5]{4, 66, 7, 5654, 5};
		int arr[]{4, 66, 7, 5654, 5};
		int arr[size]{};


		std::cout << arr[0] << "\n";
		std::cout << arr[1] << "\n";
		std::cout << arr[2] << "\n";
		std::cout << arr[3] << "\n";
		std::cout << arr[4] << "\n";

		const int size = 4;
		int arr[size]{};
		std::cout << "заполните таблицу числами 4 ячеек\n";

		for (int i = 0; i < size; i++)
		{
			std::cin >> arr[i];
		}

		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << " ";
		};
		*/
		/*
		int randomNumber = rand() % 21 - 10;
		const int size = 10;
		int arr[size]{randomNumber};
		double sumpol = 0;
		double sumotr = 0;
		double sred;


		for (int i = 0; i < size; i++)
		{
			arr[i] = randomNumber = rand() % 21 - 10;
			std::cout << arr[i] << " ";
			if (randomNumber > 0) {
				sumpol += randomNumber;
			}
			else {
				sumotr += randomNumber;
			}
		}
		sred = (sumpol + sumotr) / size;
		std::cout << "\n" << sumpol;
		std::cout << "\n" << sumotr;
		std::cout << "\n" << sred;
		*/
		/*
		const int row = 3, col = 3;

		int arr[row][col];
		int randomNumber;


		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				arr[i][j] = rand() % 10;
				std::cout << arr[i][j] << " ";
			}
			std::cout << "\n";
		}
		*/
		/*int g = 0;
		int randomNumber = 0;
		const int size= 5;
		int arr[size]{ randomNumber };
		for (int i = 0; i < size; i++)
		{
			arr[i] = randomNumber = rand() % 11 - 5;
			if (randomNumber == 0)
			{
				g++;
				if (size == i + 1)
				{
					for (int j = 0; j < g; j++)
					{
						randomNumber = -1;
						std::cout << " " << arr[j] ;
					}
				}


			}
			else if(randomNumber !=0)
			{
				std::cout << arr[i] << " ";
			}

		}
		*/

/*

	const int row = 3, col = 4;

	int arr[row][col];
	int randomNumber;
	int summa = 0;
	int summa1;
	for (int i = 0; i < row; i++)
	{
		int summa = 0;
		for (int j = 0; j < col; j++)
		{

			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << " ";
			summa += arr[i][j];
			;
		}

		std::cout << "| " << summa << "\n";

		*/



	return 0;
}