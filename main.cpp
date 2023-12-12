#include <iostream>
#include <string>
#include <cstdlib>

#include "Editor.h"

#define LOOP_LIMIT 10e4

using namespace std;

int main() {

	system("title Textus");

	File file;

	int result;

	file.setPath("test.txt");
	
	result = file.openFile();

	if (result == -1) {
		cout << "Something failed!";
		system("pause");
		return -1;
	}

	system("pause");
	system("CLS");

	file.printFile();

	system("pause");

	return 0;
}