#include<iostream>
#include<string>

bool strrr(std::string str) {
	int n = str.length();
	for (int i = 0; i < str.length(); i++)
		str[i]=std::tolower(str[i]);
	for (int i = 0; i < str.length()/2; i++) 
		if (str[i] != str[str.size() - i - 1])
			return false;
	return true;
}
void note(std::string ligne) {
	char a = ' ', b = ',', c = '.', d = '!', e = '?';
	int compte = 0;
	for (int i = 0; i < ligne.length(); i++) {
		if (ligne[i] == a || ligne[i] == b || ligne[i] == c || ligne[i] == d || ligne[i] == e)
			compte++;
	}
	std::cout<< compte;
}
std::string chercher(std::string note, char graphe) {
	int n = note.rfind(graphe);
	std::string let ;
	if (n >= 0 && n < note.length())
		let = note.substr(n);
	return let;
}
int main() {
	setlocale(LC_ALL, "Russian");
	// ������ 1.
	std::cout << "������ 1.\n���� ������ : ";
	std::string str = "Il nome di Fra Luca Paciolo da Borgo San Sepolcro non suona ai cultori della scienza dei conti.";
	std::cout << str << '\n';
	char sym;
	std::cout << "������� ������ : ";
	std::cin >> sym;
	std::string res;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == sym)
			res += sym;
	}
	std::cout <<"���� ������ : "<< res << "\n\n";

	// ������ 2.
	std::cout << "������ 2.\n������� ����� : ";
	std::string stroka;
	std::cin.ignore();
	std::getline(std::cin, stroka);
	if (strrr(stroka))
		std::cout << "true\n";
	else
		std::cout << "false\n";

	// ������ 3.
	std::cout << "\n������ 3.\n������� ������ : ";
	std::string graphe;
	getline(std::cin,graphe);
	std::cout << "���������� . ,  !? = ";
	note(graphe);
	std::cout<< "\n\n";

	// ������ 4.
	std::cout << "������ 4.\n������� ������ : ";
	std::string lettre;
	char syl;
	std::getline(std::cin, lettre);	
	std::cout << "������� ������ : ";
	std::cin >> syl;
	std::cout << "��������� : ";
	std::cout << chercher(lettre, syl) << '\n';

	return 0;
}