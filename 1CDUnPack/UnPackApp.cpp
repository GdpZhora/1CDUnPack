#include "pch.h"
#include "UnPackApp.h"


UnPackApp::UnPackApp()
{
}


UnPackApp::~UnPackApp()
{
}

void UnPackApp::setFilename(const char* filenameset)
{
	filename = const_cast<char*>(filenameset);
}

bool UnPackApp::Run()
{

/*	if (filename == "")
		return false;*/

	beginStruct temp;
	blockStruct block;
	char sign[8];

	cout << "File: " << filename << endl;

	ifstream in(filename, ios::binary|ios::in);
	if (!in)
	{
		cout << "Invalid filename";
		return 0;
	}
	in.read((char*)&temp, sizeof(temp));

	//in >> sign;

	cout << "Signature: " << temp.sig << endl;
	cout << "Version: " << (int)(temp.ver1) << "." << (int)(temp.ver2) << "." << (int)(temp.ver3) << "." << (int)(temp.ver4) << endl;
	cout << "Length: " << temp.length << endl;
	cout << "Unknown: " << temp.unknown << endl;

	in.read((char*)&block, sizeof(block));
	cout << "Signature: " << block.sig << endl;

	in.close();
	return true;

}
