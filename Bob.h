#pragma once
#include <SFML/Graphics.hpp>
 
using namespace sf;
 
class Bob
{
    // Все private переменные могут быть доступны только внутри объекта
private:
 
    /*Позиция Боба.Vector2f--используется для хранения и обработки позиции,
    скорости, размера и других параметров двухмерных объектов в приложении.*/
    Vector2f m_Position;
 
    /* Объявляем объект Sprite
    Sprite--используется для отображения изображений на экране, таких
    как текстуры, анимации, спрайтовые листы и других графических элементов.*/
    Sprite m_Sprite;
 
    /* Добавляем текстуру.Texture--нужен для загрузки и хранения изображений
    и текстур,которые используются для отображения графических элементов в приложении
    как Sprite*/
    Texture m_Texture;
 
    // Логические переменные для отслеживания направления движения
    bool m_LeftPressed;
    bool m_RightPressed;
    bool m_DownPressed;
    bool m_UpPressed;
    // Скорость Боба в пикселях в секунду
    float m_Speed;
 
    // Открытые методы
public:
 
    // Настраиваем Боба в конструкторе
    Bob();
 
    // Для отправки спрайта в главную функцию
    Sprite getSprite();
 
    // Для движения Боба
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();

    // Прекращение движения
    void stopLeft();
    void stopRight();
    void stopDown();
    void stopUp();
 
    // Эта функция будет вызываться на каждый кадр
    void update(float elapsedTime);
    /*elapsedTime - используется для измерения времени прошедшего времени
    между двумя точками*/
};