//�� ������ ������� ����������� ������� ���������� ���������
//� ���� ������� ��������.� ����� ������ ��� ������ Bob � BaldDude.
#include "Engine.h"

using namespace sf;

void Engine::update(float dtAsSeconds)
{
    m_Bob.update(dtAsSeconds);
    m_BaldDude.update(dtAsSeconds);
}