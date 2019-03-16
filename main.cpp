#include "person.h"

int main()
{
	Person my_person{};
	my_person.SetName("hadonggun");

	my_person.PrintInfo();

	system("pause");
	return 0;
}