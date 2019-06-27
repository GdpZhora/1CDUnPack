#pragma once
class UnPackApp
{
private:
	char* filename;

public:
	UnPackApp();
	~UnPackApp();
	void setFilename(const char* filenameset);
	bool Run();
};

