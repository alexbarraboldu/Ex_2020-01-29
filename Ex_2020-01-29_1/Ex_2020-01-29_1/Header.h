#pragma once
#include <iostream>
#include <queue>

//struct IP
//{
//	unsigned char aIP[4];	// OCUPAN LO MISMO
//	unsigned short int IP;	// OCUPAN LO MISMO
//};

union IP
{
	unsigned char IP1, IP2, IP3, IP4;
};

typedef unsigned short PORT;

//struct Jugador
//{
//public:
//	int id;
//	IP direccionIP;
//	PORT puerto;
//
//public:
//	Jugador() {};
//	Jugador(int _id, unsigned char _IP1, unsigned char _IP2, unsigned char _IP3, unsigned char _IP4, PORT _puerto)
//	{
//		id = _id;
//		direccionIP.IP1 = _IP1;
//		direccionIP.IP2 = _IP2;
//		direccionIP.IP3 = _IP3;
//		direccionIP.IP4 = _IP4;
//		puerto = _puerto;
//	};
//};
//
//std::ostream& operator<<(std::ostream& _os, Jugador& _jugador)
//{
//	return _os << "ID: " << _jugador.id << "\nIP: " << (int)_jugador.direccionIP.IP1 << '.' << (int)_jugador.direccionIP.IP2 << '.' << (int)_jugador.direccionIP.IP3 << '.' << (int)_jugador.direccionIP.IP4 << "\nPuerto: " << _jugador.puerto;
//}
//
//
//struct ColaDeJugadores
//{
//private:
//	std::queue<Jugador> cola;
//public:
//	void IncorporarACola(Jugador& _jugador)
//	{
//		cola.push(_jugador);
//	};
//	Jugador& ConsultarSiguiente()
//	{
//		return cola.front();
//	};
//	Jugador& QuitarDeLaCola()
//	{
//		Jugador AuxJugador = ConsultarSiguiente();
//		cola.pop();
//		return AuxJugador;
//	};
//	size_t CuanosEnCOla()
//	{
//		return cola.size();
//	};
//};