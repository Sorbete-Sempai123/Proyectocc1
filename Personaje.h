#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <SFML/Graphics.hpp>
#define frames 4 //es el numero de imagenes que se cargaran a las texturas
class Personaje{
	char dir='W';
public:
	float x,y,tamx,tamy;
    sf::RectangleShape Per; //are del personaje
    sf::Texture* texturasPer = new sf::Texture[frames];    
	Personaje(float,float,float,float);
	void Movimiento();
	char getDir();
	~Personaje();
};
#endif 