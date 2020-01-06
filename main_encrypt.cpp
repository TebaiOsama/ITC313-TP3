
#include "Encrypt.h"
#include <iostream>
#include <string>

int main(){

	std::string fichier = "message.txt";
	std::string code = "code.txt";

	Encrypt codage;

	codage.read(false, fichier);
	std::cout<<codage.get_plain()<<std::endl;

	codage.write(false, code);
	std::cout<<codage.get_cipher()<<std::endl;

	return 0;
}