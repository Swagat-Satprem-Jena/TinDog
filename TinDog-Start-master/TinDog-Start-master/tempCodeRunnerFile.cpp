#include<iostream>
#include<string>
using namespace std;


int main()
{
	string s1 = "KING", s2 = "MARTIN", s3 = "LUTHER";
    string s4 = s1 + " " + s2 + " " + s3;
    s1.append(" ");
    s1.append(s2);
    s1.append(" ");
    s1. append(s3);

    cout << "BIT i : ";
    cout << s4 << "\n";
    cout << "BIT ii : ";
    cout << s1 << "\n";

}
