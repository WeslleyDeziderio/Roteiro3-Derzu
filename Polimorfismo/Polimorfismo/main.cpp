#include <iostream>
#include "Animal.h"
#include "Cachorro.h"

int main(void) {
	Animal animal = Animal();
	Animal* cachorro = new Cachorro();

	std::cout << "Na progamacao orientada a objetos, o polimorfismo consiste na capacidade dos objetos "
		"se comportarem de forma diferente dependendo de suas caracteristicas ou do ambiente "
		"que estao submetidas, mesmo que as diferentes acoes foram designadas igualmente em sua semantica. "
		"O polimorfismo pode ser aplicado desde funcoes com mesma identidade, mas que recebe parametros "
		"diferentes, ate os metodos virtuais que sao dependentes da classe a qual o objeto pertence.\n " << std::endl;

	
	std::cout << "Animal: " << animal.fazerSom() << std::endl;
	std::cout << "Cachorro: " << cachorro->fazerSom() << std::endl;

	return 0;
}