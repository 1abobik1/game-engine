#include "BaldDude.h"
//конструктор 
BaldDude::BaldDude()
{
    // Вписываем в переменную скорость BaldDude
    m_Speed = 666;

    /*комбинация этих двух строчек позволяет загрузить текстуру
    из файла и установить ёё на спрайте,чтобы отобразить на экране*/
    m_Texture.loadFromFile("bald_dude.png");
    m_Sprite.setTexture(m_Texture);

    // Устанавливаем начальную позицию BaldDude в пикселях
    m_Position.x = 100;
    m_Position.y = 100;

}

// Делаем приватный спрайт доступным для функции draw()
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

// Двигаем BaldDude на основании пользовательского ввода в этом кадре,
// прошедшего времени и скорости
void BaldDude::update(float elapsedTime)  /*elapsedTime--это переменная,которая
                                          содержит время,прошедшее с предыдущего
                                          кадра до текущего.*/
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
    // Теперь сдвигаем спрайт на новую позицию
    m_Sprite.setPosition(m_Position);

}