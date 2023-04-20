#pragma once
#include <SFML/Graphics.hpp>
#include "Bob.h";
#include "BaldDude.h";

using namespace sf;

class Engine
{
private:

    RenderWindow m_Window;

    // ��������� ������ � �������� ��� ����
    Sprite m_BackgroundSprite;
    Texture m_BackgroundTexture;

    //��������� BaldDude

    BaldDude m_BaldDude;

    // ��������� ����
    Bob m_Bob;

    void input();
    void update(float dtAsSeconds);
    void draw();

public:
    // ����������� ������
    Engine();
    void update(float dtAsSeconds);
    // ������� ����� ������� ��� ��������� �������
    void start();


};