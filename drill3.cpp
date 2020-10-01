#include "std_lib_facilities.h"

using namespace std;

int main()

{
	cout << "Írd be a címzett nevét! ";

	string first_name {" "};

	cin >> first_name;


	cout << "Írd be a címzett korát! ";

	int age {0};

	cin >> age;

	if (age <= 0 || age >= 110)
		simple_error("ugye csak viccelsz?");

	cout << "Írd be a közös barát nevét! ";

	string barat_nev {" "};

	cin >> barat_nev;


	cout << "Írd be a közös barátod nemét! (f mint férfi, n mint nő) ";

	char barat_sex {0};

	cin >> barat_sex;


	cout << "\nKedves " << first_name << ",\n\n";

	cout << "Hogy vagy manapság? Rég beszéltünk, kezdelek hiányolni.\n"
			"Én a Debreceni Egyetemen tanulok, egy nap meglátogathatnál!\n\n";


	cout << "Láttad már " << barat_nev << " valahol?\n";

		if (barat_sex == 'f')
			cout << "Mondd meg a fickónak, hogy hívjon fel!\n";
		if (barat_sex == 'n')
			cout << "Mondd meg a csajnak, hogy hívjon fel!\n";


	cout << "\nHallottam most volt a szülinapod, " << age << " az ám a szép kor.";

		if (age < 12)
			cout << "\nJövőre már " << age+1 << " éves leszel!";
		else if (age == 17)
			cout << "\nJövőre már szavazhatsz!";
		else if (age > 70)
			cout << "\nRemélem élvezed a nyugdíjas éveket!";


	cout << "\nSzeretettel,";

	cout << "\n\n\t\t\tKristóf\n\n";

}