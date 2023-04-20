/*������� input ������������ ������� ������ �����
��������� Keyboard::isKeyPressed, ��������������� SFML.
��� ������� Escape m_Window ����� �������. ��� ������ ������
���������� ��������������� ������� ��������.*/

#include "Engine.h"

void Engine::input()
{
    // ������������ ������� Escape
    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        m_Window.close();
    }

    // ��������� ������� ������ �������� ��� ����
    if (Keyboard::isKeyPressed(Keyboard::A))
    {
        m_Bob.moveLeft();
    }
    else
    {
        m_Bob.stopLeft();
    }

    if (Keyboard::isKeyPressed(Keyboard::D))
    {
        m_Bob.moveRight();
    }
    else
    {
        m_Bob.stopRight();
    }

    if (Keyboard::isKeyPressed(Keyboard::W)) 
    {
        m_Bob.moveUp();
    }
    else 
    {
        m_Bob.stopUp();
    }

    if (Keyboard::isKeyPressed(Keyboard::S)) 
    {
        m_Bob.moveDown();
    }
    else 
    {
        m_Bob.stopDown();
    }

    // ��������� ������� ������ �������� ��� BaldDude

    if (Keyboard::isKeyPressed(Keyboard::Up)) 
    {
        m_BaldDude.moveUp();
    }
    else 
    {
        m_BaldDude.stopUp();
    }

    if (Keyboard::isKeyPressed(Keyboard::Down))
    {
        m_BaldDude.moveDown();
    }
    else
    {
        m_BaldDude.stopDown();
    }
    
    if (Keyboard::isKeyPressed(Keyboard::Left))
    {
        m_BaldDude.moveLeft();
    }
    else
    {
        m_BaldDude.stopLeft();
    }

    if (Keyboard::isKeyPressed(Keyboard::Right))
    {
        m_BaldDude.moveRight();
    }
    else
    {
        m_BaldDude.stopRight();
    }

}