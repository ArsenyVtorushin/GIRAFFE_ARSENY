#include <iostream>


int main()
{
	setlocale(LC_ALL, "ru");

	int amount_1 = 0;
	int amount_2 = 0;

	for (int i = 100; i < 1000; i++)
	{
		int char1 = i % 1000;
		int char2 = i % 100;
		int char3 = i % 10;

		if (char1 == char2 || char2 == char3 || char3 == char1)
		{
			amount_1++;
		}

		else if (char1 != char2 && char2 != char3 && char3 != char1)
		{
			amount_2++;
		}

	}

	std::cout << "Количество целых чисел с двумя одинаковыми цифрами в диапазоне от 100 до 999: " << amount_1 << "\n";
	std::cout << "\nКоличество целых чисел с разными цифрами в диапазоне от 100 до 999: " << amount_2 << "\n";



	std::cout << "\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";



	int number, new_number = 0;

	std::cout << "Введите целое число: ";
	std::cin >> number;

	while (number > 0)
	{
		if (number % 10 != 3 && number % 10 != 6)
		{
			new_number *= 10;
			new_number += number % 10;
		}
		number /= 10;
	}

	std::cout << "Новое число: ";

	while (new_number > 0)
	{
		std::cout << new_number % 10;
		new_number /= 10;
	}



	std::cout << "\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";



	int A;
	std::cout << "Введите число А: ";
	std::cin >> A;

	std::cout << "\nЧисла B, для которых А делится на В * В без остатка: \n";

	for (int B = 1; B <= A; B++)
	{
		if (A % (B * B) == 0)
		{
			std::cout << B << ", ";
		}
	}

	std::cout << "\n\nЧисла B, для которых А не делится на В * В * В с остатком:\n";


	for (int B = 1; B <= A; B++)
	{
		if (A % (B * B * B) != 0)
		{
			std::cout << B << ", ";
		}
	}




	std::cout << "\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";




	int Aa;
	std::cout << "Введите число A: ";
	std::cin >> Aa;

	int sum_Aa = 0;

	while (Aa > 0)
	{
		sum_Aa += Aa % 10;
		Aa /= 10;
	}

	int sum_Aa_cubed = sum_Aa * sum_Aa * sum_Aa;

	if (sum_Aa_cubed == Aa * Aa)
	{
		std::cout << "Куб суммы цифр  (" << sum_Aa_cubed << ") данного числа А равен А * А";
	}

	else
	{
		std::cout << "Куб суммы цифр  (" << sum_Aa_cubed << ") данного числа А не равен А * А\n";
	}




	std::cout << "\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";




	int digit;
	std::cout << "Введите число: ";
	std::cin >> digit;

	std::cout << "Числа, на которые " << digit << " делится без остатка: \n";

	for (int i = 1; i <= digit; i++)
	{
		if (digit % i == 0)
		{
			std::cout << i << ", ";
		}

	}



	std::cout << "\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";





	int first, second;
	std::cout << "Введите 1-е число: ";
	std::cin >> first;
	std::cout << "Введите 2-е число: ";
	std::cin >> second;

	std::cout << "Числа, на которые " << first << " и " << second << " делятся без остатка: \n";

	if (first > second)
	{
		for (int i = 1; i <= second; i++)
		{
			if (first % i == 0 || second % i == 0)
			{
				std::cout << i << ", ";
			}

		}
	}

	else if (second > first)
	{
		for (int i = 1; i <= first; i++)
		{
			if (first % i == 0 || second % i == 0)
			{
				std::cout << i << ", ";
			}
		}
	}





	return 0;
}