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
	/* �������� �������� ����� �� ��������� ������ 
	  - �������� ���� ����
	  - ��������� �� ���� ������
	  - ���� � ��� ���������
	  - �������� ����*/
	if (argc == 3) {
		string str, sub_str;
		ifstream file;
		file.open(argv[1]);
		const char* c_str;
		const char* c_substr;
		//filename(argv[1]);
		while(file >> str);
		cout << str.find(sub_str);
		c_str = str.c_str();
		c_substr = sub_str.c_str();
		printf(c_str);
		const char* p;
		p = strstr(c_str, c_substr);
		cout << endl;
		printf("Simbol: %d\n", p - c_str + 1);
		//file.close();
	}
	return 0;
}