#include <iostream>
#include "Enemy.h"
#include <SFML/Graphics.hpp>
#define tamenemy 30
#define velenemy 0.09

Enemy::Enemy(float _x,float _y){
	x=_x;
	y=_y;
	entidad.setSize(sf::Vector2f(tamenemy,tamenemy));
            (entidad).setFillColor(sf::Color::Green);

}

Enemy::Enemy(){
	x=0; y=0;
	entidad.setSize(sf::Vector2f(tamenemy,tamenemy));
    entidad.setFillColor(sf::Color::Green);
}

void Enemy::Movimiento(){
	std::cout<<"1 ";
	float ax,ay;
	if(px-x>0)ax=velenemy;else ax=-velenemy;
	if(py-y>0)ay=velenemy;else ay=-velenemy;
    entidad.move(sf::Vector2f(ax,ay));
    std::cout<<"("<<entidad.getPosition().x<<" "<<entidad.getPosition().y<<") ";
    x+=ax;y+=ay;
}

void Enemy::PosicionPer(float ex,float ey){
	std::cout<<" 2 ";
	px=ex;
	py=ey;
}

