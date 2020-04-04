#pragma once

#include "Interfaces.h"
#include "Base classes.h"

using namespace sf;
using namespace std;

class S : public iMove, public iRotate, public iColour, public iScaling, public iDraw
{
public:
	S();
	virtual ~S(); // ���, ����������� ���������� �� �����, �������...
};

class Circle : public S
{
private:
	Point xy;
	float radius{};
	float degree{};
	Point scale;
	RGBA Col;
	bool show = false; // ��� ���
	bool path = false; // ������� ������� � ����� ����� �� ������
					   // �������������� ����� � ������������
	// � ����
public:
	Circle();

	Circle(Point p, float r);

	~Circle();

	void invert();
	Point getxy();
	float getrad();
	float getdeg();
	Point getscale();
	bool getshow();
	void setshow(bool show_1);
	
	void movebyvalue(Point xy) override;
	void move(Point xy) override;
	void rottocertain(float deg) override;
	void rot(float deg) override;
	void deformx(float times) override;
	void deformy(float times) override;
	void doubledeform(float times) override;
	void Draw(RenderWindow& window) override;
	void setcolour(RGBA Colour) override;
	void changecolour_red();
	void changecolour_yellow();
	void changecolour_green();
	void changecolour_blue();
	void changecolour_gray();
	void returncolor();
};

class Triangle : public S
{
private:
	Point xy;
	float radius;
	float degree;
	Point scale;
	RGBA Col;
	bool show = false; // �� ���� � ��� �������
	// �� �������
public:
	Triangle();

	Triangle(Point p, float r);

	~Triangle();

	void invert();
	Point getxy();
	float getdeg();
	float getrad();
	Point getscale();
	bool getshow();
	void setshow(bool show_1);

	void move(Point xy) override;
	void movebyvalue(Point xy) override;
	void rottocertain(float deg) override;
	void rot(float deg) override;
	void deformx(float times) override;
	void deformy(float times) override;
	void doubledeform(float times) override;
	void Draw(RenderWindow& window) override;
	void setcolour(RGBA Colour) override;
	void changecolour_red();
	void changecolour_yellow();
	void changecolour_green();
	void changecolour_blue();
	void changecolour_gray();
	void returncolor();
};

class Square : public S
{
private:
	Point xy;
	float radius;
	float degree;
	Point scale;
	RGBA Col;
	bool show = false; // �� �� �����
	// ��� ������� ����� ���� �����������?
public:
	Square();

	Square(Point p, float r);

	~Square();

	void invert();
	Point getxy();
	float getdeg();
	float getrad();
	Point getscale();
	bool getshow();
	void setshow(bool show_1);

	void move(Point xy) override;
	void movebyvalue(Point xy) override;
	void rottocertain(float deg) override;
	void rot(float deg) override;
	void deformx(float times) override;
	void deformy(float times) override;
	void doubledeform(float times) override;
	void Draw(RenderWindow& window) override;
	void setcolour(RGBA Colour) override;
	void changecolour_red();
	void changecolour_yellow();
	void changecolour_green();
	void changecolour_blue();
	void changecolour_gray();
	void returncolor();
};

struct Functions { // ����� ��������� ����� ���, ����?
	Functions() = delete;
	~Functions() = delete;
	static void out(Triangle* shape); // ������ ������ �������, � �� S*? ������, ������, ��� ��������
};