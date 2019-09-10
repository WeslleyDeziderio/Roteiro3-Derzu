#pragma once

#include "Animal.h"

class Cachorro : public Animal{
	public:
		Cachorro();
		virtual ~Cachorro();
		virtual std::string fazerSom();
	protected:

	private:
};

