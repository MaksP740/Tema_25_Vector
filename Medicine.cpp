#include "Medicine.h"

Medicine::Medicine(){
	title = new char[10] {"undefined"};
	type = new char[10] {"undefined"};
	price = 0;
}

Medicine::Medicine(const char* _title, const char* _type, float _price){
	int size_title = strlen(_title) + 1;
	title = new char[size_title];
	strcpy(title, _title);

	int size_type = strlen(_type) + 1;
	type = new char[size_type];
	strcpy(type, _type);

	price = _price;
}

Medicine::Medicine(const Medicine& obj)
{
	// Medicine k = a; => k=this, a= obj
	int size_title = strlen(obj.title) + 1;
	title = new char[size_title];
	strcpy(title, obj.title);

	int size_type = strlen(obj.type) + 1;
	type = new char[size_type];
	strcpy(type,  obj.type);

	price = obj.price;
}

Medicine& Medicine::operator=(const Medicine& obj)
{
	// b = a; =>    b=this,     a= obj
	int size_title = strlen(obj.title) + 1;
	title = new char[size_title];
	strcpy(title,  obj.title);

	int size_type = strlen(obj.type) + 1;
	type = new char[size_type];
	strcpy(type,  obj.type);

	price = obj.price;

	return *this;
}

Medicine::~Medicine(){
	delete[] title;
	delete[] type;
}

void Medicine::setTitle(const char* _title)
{
	if (strlen(_title) < 2) cout << "Error: setTitle!\n";
	else {
		delete[] title;

		int size_title = strlen(_title) + 1;
		title = new char[size_title];
		strcpy(title,  _title);
	}
}

void Medicine::setType(const char* _type)
{
	if (strlen(_type) < 2) cout << "Error: setType!\n";
	else {
		delete[] type;

		int size_type = strlen(_type) + 1;
		type = new char[size_type];
		strcpy(type,  _type);
	}
}

void Medicine::setPrice(float _price)
{
	if (_price > 0) {
		price = _price;
	}
	else {
		cout << "Error: setPrice!\n";
	}
}

const char* Medicine::getTitle() const{	return title;}
const char* Medicine::getType() const{	return type;}
float Medicine::getPrice() const{	return price;}

  


void Medicine::showInfo() const
{
	cout << "Medicine: " << title << endl;
	cout << "Type:     " << type << endl;
	cout << "Price:    " << price << "UAH\n\n";
}


