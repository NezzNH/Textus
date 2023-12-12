#pragma once
#ifndef Editor
#define Editor

#include <string>
#include <iostream>

class File {
private:
	std::string loadedFilePortion;
	std::string path;
public:
	int openFile();
	void setPath(std::string);
	void printFile();
	int returnSize() const;
	void addToString(std::string);
};

#endif // 

