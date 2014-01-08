#ifndef CHUNK_HPP
#define CHUNK_HPP
#include <vector>
#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include <cmath>

class Chunk {
	public:
		Chunk(std::vector<sf::Vertex*> &vertices);
		std::vector<sf::Vertex*> getVertices();
    void appendVertices(std::vector<sf::Vertex*> &vertices);
    void appendVertex(sf::Vertex* vertex);
		void draw();
	private:
		std::vector<sf::Vertex*> vertices;
    sf::Texture background;
};

#endif
