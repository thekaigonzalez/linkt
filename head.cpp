#include "head.h"
#include <fstream>

void create_file(std::string file) 
{
	std::ofstream filetr(file);
	filetr << "hello";
	filetr.close();
}

