#pragma once
#include <iostream>

//class FileNAme
//{
//	std::string file_name;
//
//	FileName()
//	{
//		file_name = "";
//	}
//
//	void set_fileName(std::string path)
//	{
//		this->file_name = path;
//	}
//
//	std::string printFileName()
//	{
//		return file_name;
//	}
//};

class FileName
{
	std::string file_name;


public:

	FileName();
	void set_fileName(std::string path);
	std::string printFileName();
};

#include "FileName.h"


FileName::FileName()
{
	file_name = "";
}

void FileName::set_fileName(std::string path)
{
	this->file_name = path;
}

std::string FileName::printFileName()
{
	return file_name;
}