//Ёё задача вызвать аналогичную функцию обновления состояния
//у всех игровых объектов.В нашем случае это только Bob и BaldDude.
#include "Engine.h"

using namespace sf;

void Engine::update(float dtAsSeconds)
{
    m_Bob.update(dtAsSeconds);
    m_BaldDude.update(dtAsSeconds);
}