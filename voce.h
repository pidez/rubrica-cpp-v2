#ifndef VOCE_H
#define VOCE_H

#include <cstring>
#include <ostream>

struct voce {
	std::string cognome; ///< Cognome 
	std::string nome;    ///< Nome 
	std::string ntel;	 ///< Numero di telefono
};

/**
* ridefinizione dell'operatore <<.
*
* Una voce viene serializzata nel formato "Cognome Nome Numero\n".
*/
std::ostream& operator<<(std::ostream& os, const voce& v);

#endif