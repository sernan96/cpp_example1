#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	string str1;
	cout << "Enter your data(name kor eng math) : ";
	getline(cin, str1);
	stringstream ss;
	ss.str(str1);
	string name;
	ss >> name;
	int score, sum = 0;
	while (ss >> score)
		sum += score;
	cout << name << " : " << sum << endl;
	return 0;
}