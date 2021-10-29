#include <iostream>
using namespace std;
class Notebook;
class Abonent {
private:
	int ID;
	string Surname, Nomer;
public:
	Abonent(int ID_, string Surname_, string Nomer_) {
		ID = ID_;
		Surname = Surname_;
		Nomer = Nomer_;
	};
	friend class Notebook;
};
class Notebook {
public:
	void change(Abonent x) {
		string k;
		cin >> k;
		x.Nomer = k;
		cout << "ID Abonenta ->" << x.ID << "   Surname Abonenta ->" << x.Surname << "   Nomer Abonenta ->" << x.Nomer << endl;
	};
	void show(Abonent y) {
		cout << "ID Abonenta ->" << y.ID << "   Surname Abonenta ->" << y.Surname << "   Nomer Abonenta ->" << y.Nomer << endl;
	};
};

int main() {
	Notebook Book;
	Abonent mass[5]{
		Abonent(1,"Petrenko","89626345567"),
		Abonent(2,"Sovko","86151524354"),
		Abonent(3,"Lavrov","85462237565"),
		Abonent(4,"Gusko","86159007455"),
		Abonent(5,"Malov","85314435112")
	};
	for (int i = 0; i < 5; i++) {
		Book.show(mass[i]);
	}
	Book.change(mass[3]);
	return 0;
};

