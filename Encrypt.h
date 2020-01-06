#ifndef _Encrypt_h
#define _Encrypt_h


#include <string>
#include <fstream> //interaction avec les fichiers

class Encrypt{
protected:
	std::string m_plain; //message non chiffré
	std::string m_cipher; //message chiffré
public:
	Encrypt();
	//getters
	std::string get_plain() const; //lecture message non chiffré
	std::string get_cipher() const; //lecture message chiffré
	//methodes
	bool read(bool isCipher, std::string filename); //lecture du message à dechiffrer ou chiffrer
	bool write(bool isCipher, std::string filename); //ecriture du message chiffré ou dechiffré

	std::string encode(); //copier plain dans cipher
	std::string decode(); //copier cipher dans plain

};


#endif