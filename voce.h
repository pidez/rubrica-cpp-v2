#ifndef VOCE_H
#define VOCE_H

#include <cstring>
#include <ostream>

struct voce {
	std::string cognome;
	std::string nome;
	std::string ntel;
};

std::ostream& operator<<(std::ostream& os, const voce& v);

#endif