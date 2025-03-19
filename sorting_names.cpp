#include <iostream>
#include <string>
#include <utility>

void sortingNamesAtoZ(int numberOfNames, std::string *name)
{
	for (int i = 0; i < numberOfNames - 1; ++i)
	{
		int smallestIndex = i;

		for (int j = i + 1; j < numberOfNames; ++j)
		{
			if (name[j] < name[smallestIndex])

				smallestIndex = j;
		}
		std::swap(name[i], name[smallestIndex]);
	}
}

int main()
{
	//Запрос на количество вводимых имен
    std::cout << "How many names would you like to enter? ";
    int numberOfNames;
    std::cin >> numberOfNames;

    std::string *name = new std::string[numberOfNames];

	//Получение имен
    for (int i = 0; i < numberOfNames; ++i)
    {
        std::cout << "Enter name #" << i+1 << ": ";
        std::cin >> name[i];
    }

	//Сортировка имен
	sortingNamesAtoZ(numberOfNames, name);

	//Вывод отсортированых имен по алфавиту
	std::cout << "Here is your sorted list: \n";

	for (int i = 0; i < numberOfNames; ++i)
	{
		std::cout << "Name #" << i+1 << ": "<< name[i] << std::endl;
	}

	delete[] name;
	name = nullptr;

	return 0;
}
