#include "bob.h"
#include "Engine.cpp"
#include "Engine.h"
//����������� 
Bob::Bob()
{
    // ��������� � ���������� �������� ����
    m_Speed = 555;

    /*���������� ���� ���� ������� ��������� ��������� ��������
    �� ����� � ���������� �� �� �������,����� ���������� �� ������*/
    m_Texture.loadFromFile("bobik.png");
    m_Sprite.setTexture(m_Texture);

    // ������������� ��������� ������� ���� � ��������
    m_Position.x = 500;
    m_Position.y = 500;

}

// ������ ��������� ������ ��������� ��� ������� draw()
Sprite Bob::getSprite()
{
    return m_Sprite;
}

void Bob::moveUp() {
    m_UpPressed = true;

}

void Bob::moveDown() {
    m_DownPressed = true;
}


void Bob::moveLeft()
{
    m_LeftPressed = true;
}

void Bob::moveRight()
{
    m_RightPressed = true;
}

void Bob::stopLeft()
{
    m_LeftPressed = false;
}

void Bob::stopRight()
{
    m_RightPressed = false;
}

void Bob::stopDown() {
    m_DownPressed = false;
}

void Bob::stopUp() {
    m_UpPressed = false;
}

// ������� ���� �� ��������� ����������������� ����� � ���� �����,
// ���������� ������� � ��������
/*elapsedTime--��� ����������,������� �������� �����,
��������� � ����������� ����� �� ��������.*/
void Bob::update(float dtAsSeconds)
{
    const float speed = 200.f;

    // ��������� ������� ���� �� ����������
    sf::Vector2f oldPos = m_Sprite.getPosition();

    // ���������� ���� � ����������� �� ������� ������
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        m_Sprite.move(-speed * dtAsSeconds, 0.f);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        m_Sprite.move(speed * dtAsSeconds, 0.f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        m_Sprite.move(0.f, -speed * dtAsSeconds);
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        m_Sprite.move(0.f, speed * dtAsSeconds);
    }

    // �������� ������� ����
    sf::FloatRect backgroundBounds;


    // �������� ������� ������� ����
    sf::FloatRect bobBounds = m_Sprite.getGlobalBounds();

    // ���������, �� ������� �� ��� �� ������� ����
    if (bobBounds.left < backgroundBounds.left)
    {
        m_Sprite.setPosition(backgroundBounds.left, oldPos.y);
    }
    else if (bobBounds.left + bobBounds.width > backgroundBounds.left + backgroundBounds.width)
    {
        m_Sprite.setPosition(backgroundBounds.left + backgroundBounds.width - bobBounds.width, oldPos.y);
    }
    if (bobBounds.top < backgroundBounds.top)
    {
        m_Sprite.setPosition(oldPos.x, backgroundBounds.top);
    }
    else if (bobBounds.top + bobBounds.height > backgroundBounds.top + backgroundBounds.height)
    {
        m_Sprite.setPosition(oldPos.x, backgroundBounds.top + backgroundBounds.height - bobBounds.height);
    }
}
