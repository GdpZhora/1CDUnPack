#pragma once
struct beginStruct
{
	char sig[8]; // ��������� �1CDBMSV8�

	char ver1;

	char ver2;

	char ver3;

	char ver4;

	unsigned int length;

	int unknown;
};

struct blockStruct{

	char sig[8]; // ��������� �1CDBOBV8�

	int length; // ����� ����������� �������

	int version1;

	int version2;

	unsigned int version;

	unsigned int blocks[1018];

};