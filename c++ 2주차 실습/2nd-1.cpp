#include <iostream>
using namespace std;

int main()
{
	int vowel = 0, consonant = 0;
	char ch;

	cout << "영문자를 입력하고 ctlr+z를 치세요" << endl;
	while (cin >> ch)
	{
		switch (ch)
		{
		case 'a': case'i': case'e': case'o': case 'u':
			vowel++; break;
		case 'b':case 'c':case 'd':case 'f':case 'g':case 'h':case 'j':case 'k':case 'l':case 'm':case 'n':case 'p':	case 'q':
		case 'r':	case 's':	case 't':	case 'v':	case 'w':	case 'x':	case 'y':	case 'z':
			consonant++; break;
		default:
			cout << "check to alphabet" << endl;
			break;
		}
	}
	cout << "모음: " << vowel << endl;
	cout << "자음: " << consonant << endl;

	return 0;
}