#pragma once
struct beginStruct
{
	char sig[8]; // сигнатура У1CDBMSV8Ф

	char ver1;

	char ver2;

	char ver3;

	char ver4;

	unsigned int length;

	int unknown;
};

struct blockStruct{

	char sig[8]; // сигнатура У1CDBOBV8Ф

	int length; // длина содержимого объекта

	int version1;

	int version2;

	unsigned int version;

	unsigned int blocks[1018];

};