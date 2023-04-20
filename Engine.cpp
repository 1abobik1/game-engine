#include "Engine.h"

Engine::Engine()
{
   // Получаем разрешение экрана, создаем окно SFML и View
    Vector2f resolution;
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;

    m_Window.create(VideoMode(resolution.x, resolution.y),
        "Simple Game Engine",
        Style::Fullscreen);

    // Загружаем фон в текстуру

    m_BackgroundTexture.loadFromFile("background1.jpg");

    // Связываем спрайт и текстуру
    m_BackgroundSprite.setTexture(m_BackgroundTexture);
    // граница фона
    FloatRect backgroundBounds = m_BackgroundSprite.getGlobalBounds();

}

void Engine::start()
{
    // Расчет времени
    Clock clock;

    while (m_Window.isOpen())
    {
        // Перезапускаем таймер и записываем отмеренное время в dt
        Time dt = clock.restart();

        float dtAsSeconds = dt.asSeconds();

        input();
        update(dtAsSeconds);
        draw();
    }
}

int main()
{
    // Объявляем экземпляр класса Engine
    Engine engine;

    // Вызываем функцию start
    engine.start();

    // Останавливаем программу программу, когда движок остановлен
    return 0;
}