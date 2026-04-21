#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Medicine
{
	char* title; //����� ���������
	char* type; //��� ���������
	float price; //����

public:
	Medicine();
	Medicine(const char* _title, const char* _type, float _price);
	//����������� ���������
	Medicine(const Medicine& obj); // Medicine k = a; => k=this, a= obj
	//�������� ������������
	Medicine& operator =(const Medicine& obj);
	~Medicine();

	void setTitle(const char* _title);
	void setType(const char* _type);
	void setPrice(float _price);

	const char* getTitle()const;
	const char* getType()const;
	float getPrice()const;

	void showInfo()const;
};

