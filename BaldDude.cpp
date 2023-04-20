#include "BaldDude.h"
//����������� 
BaldDude::BaldDude()
{
    // ��������� � ���������� �������� BaldDude
    m_Speed = 666;

    /*���������� ���� ���� ������� ��������� ��������� ��������
    �� ����� � ���������� �� �� �������,����� ���������� �� ������*/
    m_Texture.loadFromFile("bald_dude.png");
    m_Sprite.setTexture(m_Texture);

    // ������������� ��������� ������� BaldDude � ��������
    m_Position.x = 100;
    m_Position.y = 100;

}

// ������ ��������� ������ ��������� ��� ������� draw()
Sprite BaldDude::getSprite()
{
    return m_Sprite;
}

void BaldDude::moveUp() {
    m_UpPressed = true;

}

void BaldDude::moveDown() {
    m_DownPressed = true;
}


void BaldDude::moveLeft()
{
    m_LeftPressed = true;
}

void BaldDude::moveRight()
{
    m_RightPressed = true;
}

void BaldDude::stopLeft()
{
    m_LeftPressed = false;
}

void BaldDude::stopRight()
{
    m_RightPressed = false;
}

void BaldDude::stopDown() {
    m_DownPressed = false;
}

void BaldDude::stopUp() {
    m_UpPressed = false;
}

// ������� BaldDude �� ��������� ����������������� ����� � ���� �����,
// ���������� ������� � ��������
void BaldDude::update(float elapsedTime)  /*elapsedTime--��� ����������,�������
                                          �������� �����,��������� � �����������
                                          ����� �� ��������.*/
{
    if (m_RightPressed)
    {
        m_Position.x += m_Speed * elapsedTime;
    }

    if (m_LeftPressed)
    {
        m_Position.x -= m_Speed * elapsedTime;
    }

    if (m_DownPressed)
    {
        m_Position.y += m_Speed * elapsedTime;
    }

    if (m_UpPressed)
    {
        m_Position.y -= m_Speed * elapsedTime;
    }
    // ������ �������� ������ �� ����� �������
    m_Sprite.setPosition(m_Position);

}