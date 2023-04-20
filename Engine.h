#pragma once
#include <SFML/Graphics.hpp>
#include "Bob.h";
#include "BaldDude.h";

using namespace sf;

class Engine
{
private:

    RenderWindow m_Window;

    // Объявляем спрайт и текстуру для фона
    Sprite m_BackgroundSprite;
    Texture m_BackgroundTexture;

    //экземпляр BaldDude

    BaldDude m_BaldDude;

    // Экземпляр Боба
    Bob m_Bob;

    void input();
    void update(float dtAsSeconds);
    void draw();

public:
    // Конструктор движка
    Engine();
    void update(float dtAsSeconds);
    // Функция старт вызовет все приватные функции
    void start();


};