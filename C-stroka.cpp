#include<iostream>
#include<string>
#include<fstream>
using namespace std;

/*�������� ������� �� C-�������:
   - �������� � ��������� ������ �������� ����� � ���������.
   - �������� ����.
   - ���������� ��� � C-������ (char *).
   - ��������� ������� ��������� �����, ������� � ��� ���������.

   ������ �������������:
   search.exe myfile.txt mysubstr
   Symbol 28*/

int main(int argc, char* argv[]) {
	string filename;
	string str;
	char substr[50];
	const char* c_str;
	istream& fin = cin;
	getline (fin, filename);
	cin >> substr;
	ifstream file;
	file.open(filename);
	file >> str;
	c_str = str.c_str();
	printf(c_str);
	const char* p;
	p = strstr(c_str, substr);
	cout << endl;
	printf("Simbol: %d\n", p - c_str + 1);
	file.close();
}