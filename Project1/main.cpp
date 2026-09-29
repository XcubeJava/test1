#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));



	/*
	int choose = 0, randomNumber = 0, hp = 0, number = 0;
	int maxHp = 25, maxHpHard = 25, chance = 25;

	while (true)
	{
		system("cls");
		std::cout << "Угадай число";
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
				std::cout << "Выберите уровень сложности";
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
						std::cout << "Количество жизне:  " << hp << "\n";
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

							std::cout << "\nНе верно\n";
							std::cout << "Количество жизней: \n" << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\n Люльле число - Нет\nВвод:  ";
							std::cin >> choose;

							if (choose == 1)
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли\n";
									std::cout << "Число компьютера было: \n" << randomNumber << "\n\n";
									system("pause");
									break;
								}

								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа пк\n";
								}
								else
								{
									std::cout << "Ваше число больше числа пк\n";
								}
								Sleep(1500);

							}
							else
							{
								std::cout << "Отказано\n";
								Sleep(500);

							}
						}
					}
				}
				else if (choose == 2)
				{
					randomNumber = rand() % 5000 + 1;
					hp = maxHpHard;

					while (true)
					{
						std::cout << "Количество жизне:  " << hp << "\n";
						std::cout << "Введите число на страх и риск от 1 до 5000: ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "Ура ты угадал!\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
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

							std::cout << "\nНе верно\n";
							std::cout << "Количество жизней: \n" << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\n Люльле число - Нет\nВвод:  ";
							std::cin >> choose;

							if (choose == 1)
							{

								if (rand() % 101 <= chance)
								{
									std::cout << "Бесплатная подсказка\n";
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

								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли\n";
									std::cout << "Число компьютера было: \n" << randomNumber << "\n\n";
									system("pause");
									break;
								}

								if (number < randomNumber)
								{
									std::cout << "Ваше число меньше числа пк\n";
								}
								else
								{
									std::cout << "Ваше число больше числа пк\n";
								}
								Sleep(1500);

							}
							else
							{
								std::cout << "Отказано\n";
								Sleep(500);

							}
						}
					}
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
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\t Игра \"Угадай число\"\n\n\n";
				std::cout << "1 - Изменить количевство жизней для легкой игры\n";
				std::cout << "2 - Изменить количевство жизней для сложной игры\n";
				std::cout << "3 - Изменить шанс бесплатной подсказки для сложной игры\n";
				std::cout << "0 - Выход\n\n";
				std::cout << "Ввод:  ";
				std::cin >> choose;

				if (choose == 1)
				{
					while (true)
					{
						std::cout << "Введит количество для легкой игры:  ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимое значение от 1 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно";
							maxHp = choose;
							Sleep(1500);
							break;
						}
					}
				}
				else if (choose == 2)
				{
					while (true)
					{
						std::cout << "Введит количество для сложной игры:  ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимое значение от 1 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно";
							maxHpHard = choose;
							Sleep(1500);
							break;
						}
					}
				}
				else if (choose == 3)
				{
					{
						while (true)
						{
							std::cout << "Введит шанс бесплатной подсказки для сложной игры:  ";
							std::cin >> choose;
							if (choose < 1 || choose > 100)
							{
								std::cout << "Допустимое значение от 1 до 100\n";
								Sleep(1500);
							}
							else
							{
								std::cout << "Успешно";
								maxHp = choose;
								Sleep(1500);
								break;
							}
						}
					}
				}
				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "Пошел вон\n";
					Sleep(1500);
				}
			}
		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\nСпасибо За Игру\n";
			break;
		}
		else;
		{
			std::cout << "\nНеправильный ввод\n";
			Sleep(1500);
		}
	}

	return 0;
	/**/

	/*МАССИВ 
	
	// ТИП ДАННЫХ ИМЯ_МАССИВА[КОЛ-ВО]
const int size = 5;
	int arr[size]{};
	std::cout << arr[0] << "\n";
	std::cout << arr[1] << "\n";
	std::cout << arr[2] << "\n";
	std::cout << arr[3] << "\n";
	std::cout << arr[4] << "\n";
	*/

const int row = 3, col = 4;
int arr[row][col];

arr[0][0] = 100;

for (int i = 0; i < row; i++) {
	for (int j = 0; j < col; j++) {
		arr[i][j] = (std::rand() % 10);
	}
}

std::cout << row << "\n" << col << "\n";

for (int i = 0; i < row; i++) {
	for (int j = 0; j < col; j++) {
		std::cout << arr[i][j] << "\n";
	}
}

return 0;
}