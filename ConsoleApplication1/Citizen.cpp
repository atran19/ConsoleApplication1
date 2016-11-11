////////////
//Anna Tran
//CS 172 Sec 1
//Exam 2 
////////////

#include<iostream>
#include<string>
#include"Citizen.h"

using namespace std;

Citizen::Citizen(int id, string firstName, string lastName, string color)
{
	//point object to access member vairable
	this->id = id;
	this->firstName = firstName;
	this->lastName = lastName;
	this->color = color;
}
//Shallow Copy constructor 
Citizen::Citizen(Citizen* citizen)
{
	id = this->id;
	firstName = this->firstName;
	lastName = this->lastName;
	color = this->color;

}

string Citizen::getFirstName()
{
	return firstName;
}
string Citizen::getLastName()
{
	return lastName;
}
int Citizen::getId()
{
	return id;
}
string Citizen::getFavoriteColor()
{
	return color;
}
void Citizen::setFavoriteColor(string color)
{
	//sets new color for getFavoriteColor to return
	this->color = color;
}


