#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
	ifstream textfile;
  textfile.open(argv[1]);
  string firstline;
	string str;
	getline(textfile, firstline);
	getline(textfile, str);
  reverse(str.begin(), str.end());
  cout << str << endl;
}

