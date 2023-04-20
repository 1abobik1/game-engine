#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class BaldDude
{
private:

    /*������� BaldDude.Vector2f--������������ ��� �������� � ��������� �������,
    ��������, ������� � ������ ���������� ���������� �������� � ����������.*/
    Vector2f m_Position;

    /* ��������� ������ Sprite
    Sprite--������������ ��� ����������� ����������� �� ������, �����
    ��� ��������, ��������, ���������� ����� � ������ ����������� ���������.*/
    Sprite m_Sprite;

    /* ��������� ��������.Texture--����� ��� �������� � �������� �����������
    � �������,������� ������������ ��� ����������� ����������� ��������� � ����������
    ��� Sprite*/
    Texture m_Texture;

    // ���������� ���������� ��� ������������ ����������� ��������
    bool m_LeftPressed;
    bool m_RightPressed;
    bool m_DownPressed;
    bool m_UpPressed;
    // �������� BaldDude � �������� � �������
    float m_Speed;

    // �������� ������
public:

    // ����������� BaldDude � ������������
    BaldDude();

    // ��� �������� ������� � ������� �������
    Sprite getSprite();

    // ��� �������� BaldDude
    void moveLeft();
    void moveRight();
    void moveUp();
    void moveDown();

    // ����������� ��������
    void stopLeft();
    void stopRight();
    void stopDown();
    void stopUp();

    // ��� ������� ����� ���������� �� ������ ����
    void update(float elapsedTime);
    /*elapsedTime - ������������ ��� ��������� ������� ���������� �������
    ����� ����� �������*/
};