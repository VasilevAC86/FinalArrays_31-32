# include <iostream>
# include <cstdlib>
# include <ctime>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// ������ 1. ���������� ������ N ���������
	/*std::cout << "Task 1.\n����������� ������:\n";
	const short	size1 = 10;
	int arr1[size1]{};
	srand(time(NULL));
	for (short i = 0; i < size1; i++) {
		arr1[i] = rand() % 10 + 1; // [1..10]
		std::cout << arr1[i] << ", ";
	}
	std::cout << "\b\b.\n";
	std::cout << "������� ���-�� ��������� ��� ���������� -> ";
	std::cin >> n;
	while (n < 2 || n > size1) {
		std::cout << "������ �����. ��������� ���� -> ";
		std::cin >> n;
	}
	// ����������� ����������
	for (short i = n - 1; i > 0; i--)
		for (short j = 0; j < i; j++)
			if (arr1[j] > arr1[j + 1])
				std::swap(arr1[j], arr1[j + 1]);
	std::cout << "�������� ������:\n";
	for (short i = 0; i < size1; i++) {		
		std::cout << arr1[i] << ", ";
	}
	std::cout << "\b\b.\n";*/

	// ������ 2. ����������� � ������
	/*std::cout << "������ 2. ����������� � ������\n";
	const short januaru_Days = 31;
	short january_Temperature[januaru_Days]{};
	srand(time(NULL));
	for (short day_Number = 0; day_Number < januaru_Days; day_Number++) {
		january_Temperature[day_Number] = rand() % (-5 + 1 - (-30)) - 30; // [-30..-5]
		std::cout << january_Temperature[day_Number] << ", ";
	}
	std::cout << "\b\b.\n������� ����������� -> ";
	std::cin >> n;
	short sum = 0;
	short counter = 0; // ������� ���������� ������ n
	for (short day_Number = 0; day_Number < januaru_Days; day_Number++) {
		sum += january_Temperature[day_Number];
		if (january_Temperature[day_Number] < n)
			counter++;
	}
	std::cout << "������� �����������: " << sum / double(januaru_Days) << std::endl;
	std::cout << "���������� ����, ����� ����������� ���� " << n << ": " << counter << '\n';*/

	// ������ 3. ��������� � ��������
	std::cout << "������ 3. ��������� � ��������\n\n";
	std::cout << "������� ��������:\n������ -> ";
	std::cin >> n;
	std::cout <<"����� -> ";
	std::cin >> m;
	const short size3 = 20;
	short arr3[size3]{};
	srand(time(NULL));
	std::cout << "����:\n";
	for (short i = 0; i < size3; i++) {
		arr3[i] = rand() % 100; // [0..100)
		//if (arr3[i] >= n && arr3[i] <= m)
		//	std::cout << i + 1 << ". " << arr3[i] << " !\n";
		//else
		//	std::cout << i + 1 << ". " << arr3[i] << "\n";
		std::cout << i + 1 << ". " << arr3[i] << (arr3[i] >= n && arr3[i] <= m ? "!" : "") << "\n";
	}

	return 0;
}