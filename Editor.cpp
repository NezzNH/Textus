#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

static string settingsPath = "config.txt";

class File {
private:
	string loadedFilePortion;
	string path;
public:
	int openFile();
	void setPath(string pathInput);
	void printFile();
	int returnSize() const;
	void addToString(string inputString);
};

int File::openFile() {
	int i = 0;
	ifstream mainFile;
	string temp = "";
	mainFile.open(path);
	if (!mainFile) return -1;
	while (!mainFile.eof()) {
		getline(mainFile, temp);
		loadedFilePortion += temp + "\n" ;
		++i;
	} 
	mainFile.close();
	return 0;
}

void File::setPath(string pathInput) {
	path = pathInput;
}

void File::printFile() {
	int i;
	cout << loadedFilePortion << endl;
}

int File ::returnSize() const {
	return loadedFilePortion.length();
}

void File::addToString(string inputString) {
	
	loadedFilePortion += inputString;

}