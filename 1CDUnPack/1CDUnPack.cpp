// 1CDUnPack.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"


int main(int argc, char* argv[])
{

	const char *filename = "d://Development//VSC++//1CDUnPack//Debug//1Cv8.1CD";

	UnPackApp mainApp = UnPackApp();

	for (int i = 0; i < argc; i++) {
		// Выводим список аргументов в цикле
		const char* currentParam = argv[i];
		if ((currentParam == "--f" || currentParam == "-filename") && argc > i)
		{
			mainApp.setFilename(argv[i + 1]);
		}
	}


	mainApp.setFilename(filename);

	mainApp.Run();

	return 1;

}


