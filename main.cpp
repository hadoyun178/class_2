#include "person.h"

int main()
{
	Person my_person[5]{};
	//my_person[0].SetName("hadonggun");
	//my_person[0].SetAge(28);
	//my_person[0].SetWeight(100.0f);
	//my_person[0].SetHeight(178.0f);

	my_person[0].SetInfo("hadonggun", 28, 100.0f, 178.0f);
	my_person[0].PrintInfo();

	my_person[1].SetInfo("hadonggun2", 29, 95.0f, 178.0f);
	my_person[1].PrintInfo();

	my_person[2].SetInfo("majunglack");
	my_person[2].PrintInfo();


	

	system("pause");
	return 0;
}