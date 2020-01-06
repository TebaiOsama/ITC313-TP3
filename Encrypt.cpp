#include "Encrypt.h"

#include <fstream> //interaction avec les fichiers
#include <string>
#include <iostream>

Encrypt::Encrypt(){
}
	
std::string Encrypt::get_plain() const{
	return m_plain;
}
std::string Encrypt::get_cipher() const{
	return m_cipher;
}

bool Encrypt::read(bool isCipher, std::string filename){
	std::ifstream flux(filename);
	if(flux){
		std::string message;
		getline (flux, message);

		if(isCipher)
			m_cipher = message;
		else
			m_plain = message;
		return true;
	}
	else{
		std::cout << "Fichier inexistant"<<std::endl;
		return false;
	}

}

bool Encrypt::write(bool isCipher, std::string filename){
	std::ofstream flux(filename);
	if(flux){
		if(isCipher)
			flux << m_cipher;
		else
			flux << m_plain;
		return true;
	}
	else{
		std::cout << "Fichier inexistant"<<std::endl;
		return false;
	}
}
