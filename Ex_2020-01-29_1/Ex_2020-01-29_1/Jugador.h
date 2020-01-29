#include "Header.h"

class Jugador
{
private: 
	int id;
	IP direccionIP;
	PORT puerto;
public:
	Jugador();
	Jugador(int _id, unsigned char _IP1, unsigned char _IP2, unsigned char _IP3, unsigned char _IP4, PORT _puerto);
	
	/*std::ostream& operator<<(std::ostream& _os, Jugador& _jugador)
	{
		return _os << "ID: " << _jugador.id << "\nIP: " << (int)_jugador.direccionIP.IP1 << '.' << (int)_jugador.direccionIP.IP2 << '.' << (int)_jugador.direccionIP.IP3 << '.' << (int)_jugador.direccionIP.IP4 << "\nPuerto: " << _jugador.puerto;
	}*/
	
	int getID();
	IP getIP();
	PORT getPuerto();

	/*struct ColaDeJugadores
	{
	private:
		std::queue<Jugador> cola;
	public:
		void IncorporarACola(Jugador& _jugador)
		{
			cola.push(_jugador);
		};
		Jugador& ConsultarSiguiente()
		{
			return cola.front();
		};
		Jugador& QuitarDeLaCola()
		{
			Jugador AuxJugador = ConsultarSiguiente();
			cola.pop();
			return AuxJugador;
		};
		size_t CuanosEnCOla()
		{
			return cola.size();
		};
	};*/
	~Jugador();
};

