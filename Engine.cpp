#include "Engine.h"

Engine::Engine()
{
   // �������� ���������� ������, ������� ���� SFML � View
    Vector2f resolution;
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;

    m_Window.create(VideoMode(resolution.x, resolution.y),
        "Simple Game Engine",
        Style::Fullscreen);

    // ��������� ��� � ��������

    m_BackgroundTexture.loadFromFile("background1.jpg");

    // ��������� ������ � ��������
    m_BackgroundSprite.setTexture(m_BackgroundTexture);
    // ������� ����
    FloatRect backgroundBounds = m_BackgroundSprite.getGlobalBounds();

}

void Engine::start()
{
    // ������ �������
    Clock clock;

    while (m_Window.isOpen())
    {
        // ������������� ������ � ���������� ���������� ����� � dt
        Time dt = clock.restart();

        float dtAsSeconds = dt.asSeconds();

        input();
        update(dtAsSeconds);
        draw();
    }
}

int main()
{
    // ��������� ��������� ������ Engine
    Engine engine;

    // �������� ������� start
    engine.start();

    // ������������� ��������� ���������, ����� ������ ����������
    return 0;
}