#include <iostream>

#define MODE 1

#if !defined MODE
#error Нужно определить директиву MODE
#endif


int main(int argc, char** argv) {
	setlocale(LC_ALL, "ru");

#if MODE == 0
	std::cout << "Работаю в режиме тренировки." << std::endl;
#elif MODE == 1
	std::cout << "Работаю в боевом режиме." << std::endl;
	int add(const int &a, const int &b);

	int a{};
	int b{};

	std::cout << "Введите число 1: ";
	std::cin >> a;
	std::cout << "Введите число 2: ";
	std::cin >> b;

	std::cout << "Результат сложения: " << add(a, b) << std::endl;
#else
	std::cout << "Неизвестный режим. Завершение работы." << std::endl;
#endif

	system("pause > nul");

	return 0;
}

#if MODE == 1
int add(const int& a, const int& b) {
	return a + b;
}
#endif