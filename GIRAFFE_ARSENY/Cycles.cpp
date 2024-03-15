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

	std::cout << "���������� ����� ����� � ����� ����������� ������� � ��������� �� 100 �� 999: " << amount_1 << "\n";
	std::cout << "\n���������� ����� ����� � ������� ������� � ��������� �� 100 �� 999: " << amount_2 << "\n";



	std::cout << "\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";



	int number, new_number = 0;

	std::cout << "������� ����� �����: ";
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

	std::cout << "����� �����: ";

	while (new_number > 0)
	{
		std::cout << new_number % 10;
		new_number /= 10;
	}



	std::cout << "\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";



	int A;
	std::cout << "������� ����� �: ";
	std::cin >> A;

	std::cout << "\n����� B, ��� ������� � ������� �� � * � ��� �������: \n";

	for (int B = 1; B <= A; B++)
	{
		if (A % (B * B) == 0)
		{
			std::cout << B << ", ";
		}
	}

	std::cout << "\n\n����� B, ��� ������� � �� ������� �� � * � * � � ��������:\n";


	for (int B = 1; B <= A; B++)
	{
		if (A % (B * B * B) != 0)
		{
			std::cout << B << ", ";
		}
	}




	std::cout << "\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";




	int Aa;
	std::cout << "������� ����� A: ";
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
		std::cout << "��� ����� ����  (" << sum_Aa_cubed << ") ������� ����� � ����� � * �";
	}

	else
	{
		std::cout << "��� ����� ����  (" << sum_Aa_cubed << ") ������� ����� � �� ����� � * �\n";
	}




	std::cout << "\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";




	int digit;
	std::cout << "������� �����: ";
	std::cin >> digit;

	std::cout << "�����, �� ������� " << digit << " ������� ��� �������: \n";

	for (int i = 1; i <= digit; i++)
	{
		if (digit % i == 0)
		{
			std::cout << i << ", ";
		}

	}



	std::cout << "\n\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";





	int first, second;
	std::cout << "������� 1-� �����: ";
	std::cin >> first;
	std::cout << "������� 2-� �����: ";
	std::cin >> second;

	std::cout << "�����, �� ������� " << first << " � " << second << " ������� ��� �������: \n";

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