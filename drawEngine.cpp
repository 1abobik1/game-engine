/*Ёё задача – отрисовать все объекты текущего экрана.*/

#include "Engine.h"

void Engine::draw()
{
    // Стираем предыдущий кадр
    m_Window.clear(Color::White);

    // Отрисовываем фон
    m_Window.draw(m_BackgroundSprite);

    // Боба
    m_Window.draw(m_Bob.getSprite());
    // Balddude
    m_Window.draw(m_BaldDude.getSprite());

    // Отображаем все, что нарисовали
    m_Window.display();
}