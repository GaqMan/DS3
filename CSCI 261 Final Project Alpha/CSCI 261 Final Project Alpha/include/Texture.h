#pragma once

#include <SFML/Graphics.hpp>
using namespace sf;

class Texture
{
private:

public:
    void Pillar(int length, int width, Color baseColor);
    void Water(Color baseColor);
    void Ground(Color baseColor);
};