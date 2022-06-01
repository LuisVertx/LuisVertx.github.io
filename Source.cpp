#include <iostream>
#include <vector>
#include <string>
using namespace std;




string a;

struct Contacts
{
	string Surname;
	string Name;
	string DateOfBD;
	string Patronymic;
	string Country;
	string Organisation;
	string Number;
	string PosInOrg;
	string Notes;

};

	vector <string> arrSurname;
	vector <string> arrName;
	vector <string> arrDateOfBD;
	vector <string> arrPatronymic;
	vector <string> arrCountry;
	vector <string> arrOrganisation;
	vector <string> arrNumber;
	vector <string> arrPosInOrg;
	vector <string> arrNotes;
	
	int numb;

void create()
{
	cout << "How many people u need to add?";

	cin >> numb;



	string str;

	for (int i = 0; i < numb; i++)
	{


		cout << "Enter Last Name : " << endl;
		cin >> str;
		arrSurname.push_back(str);
		if (arrSurname[i] == "")
		

		cout << "Enter name :" << endl;
		cin >> str;
		arrName.push_back(str);
		

		cout << "Enter Date of Birth:" << endl;
		cin >> str;
		arrDateOfBD.push_back(str);


		cout << "Enter Middle name:" << endl;
		cin >> str;
		arrPatronymic.push_back(str);
		

		cout << "Enter Country of residence:" << endl;
		cin >> str;
		arrCountry.push_back(str);
		

		cout << "Enter Organization:" << endl;
		cin >> str;
		arrOrganisation.push_back(str);
		

		cout << "Enter phone number:" << endl;
		cin >> str;
		arrNumber.push_back(str);
		

		cout << "Enter Position:" << endl;
		cin >> str;
		arrPosInOrg.push_back(str);
		

		cout << "Enter Notes:" << endl;
		cin >> str;
		arrNotes.push_back(str);



	}
	


}


void edit()
{
	cout << "Which post do you want to edit?" << endl;

	int post;

	cin >> post;

	cout << "What do you want to change?\n Last name\n Name\n Date of birth\n Middle name\n Country of residence\n Organization\n Phone number\n Position" << endl;

	string type;

	cin >> type;

	string abc;

	if (type == "Last name")
	{
		cout << "Enter new last name:" << endl;
		cin >> abc;
		arrSurname[post] = abc;

	}

	if (type == "Name")
	{
		cout << "Enter new  name:" << endl;
		cin >> abc;
		arrName[post] = abc;

	}

	if (type == "Date of birth")
	{
		cout << "Enter new date of birth:" << endl;
		cin >> abc;
		arrDateOfBD[post] = abc;

	}

	if (type == "Middle name")
	{
		cout << "Enter new middle name:" << endl;
		cin >> abc;
		arrPatronymic[post] = abc;

	}

	if (type == "Country of residence")
	{
		cout << "Enter new Country of residence:" << endl;
		cin >> abc;
		arrCountry[post] = abc;

	}

	if (type == "Organization")
	{
		cout << "Enter new Organization:" << endl;
		cin >> abc;
		arrOrganisation[post] = abc;

	}

	if (type == "Phone number")
	{
		cout << "Enter new Phone number:" << endl;
		cin >> abc;
		arrNumber[post] = abc;

	}

	if (type == "Position")
	{
		cout << "Enter new Position:" << endl;
		cin >> abc;
		arrPosInOrg[post] = abc;

	}
	

	
}

void look()
{
	for (int i = 0; i < numb; i++)
	{

		cout << "Last Name: " << i + 1 << " " << arrSurname[i] << endl;
		cout << "You added a Name to the entry: " << i + 1 << " " << arrName[i] << endl;
		cout << "You have added Number to the entry: " << i + 1 << " " << arrNumber[i] << endl;
	}
}





int main()
{
	system("color F4");

    string choose;

	while (choose != "Stop")
	{
		cout << "What do you want to do" << endl << "create" << endl << "edit" << endl << "look" << endl;



		cin >> choose;

		if (choose == "create")
		{
			create();
		}

		if (choose == "edit")
		{
			edit();
		}

		if (choose == "look")
		{
			look();
		}



	}

	system("pause");
	return 0;
}