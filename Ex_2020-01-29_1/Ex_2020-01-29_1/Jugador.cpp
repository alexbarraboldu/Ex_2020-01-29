#include "Jugador.h"

Jugador::Jugador()
{
};

Jugador::Jugador(int _id, unsigned char _IP1, unsigned char _IP2, unsigned char _IP3, unsigned char _IP4, PORT _puerto)
{
	id = _id;
	direccionIP.IP1 = _IP1;
	direccionIP.IP2 = _IP2;
	direccionIP.IP3 = _IP3;
	direccionIP.IP4 = _IP4;
	puerto = _puerto;
}

int Jugador::getID()
{
	return id;
};
IP Jugador::getIP()
{
	return direccionIP;
};
PORT Jugador::getPuerto()
{
	return puerto;
};


Jugador::~Jugador()
{
	std::cout << "Se llamo al destructor perro\n";
}
