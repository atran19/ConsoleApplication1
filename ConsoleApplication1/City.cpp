////////////
//Anna Tran
//CS 172 Sec 1
//Exam 2 
////////////

#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include"City.h"
#include"Citizen.cpp"

using namespace std;

City::City(string cityName)
{
	//pointer to new city
	this->cityName = cityName;
	population= 0;
	fstream cn;
	//checks to see if city eqauls to given name
		cn.open("cityName.txt", ios::out || ios::app);
	{
		//Check to see if file has failed to open
		if (cn.fail)
			cout << "Cannot create this city" << endl;
		//read in new objects when file is not at the end
		while (!cn.eof)
		{
			int id;
			string firstName, lastName, color;
			//read in stream
			cn>> id >> firstName >> lastName >> color;
			//make a new citizen
			Citizen*citi = new citi(id, firstName, lastName, color);
			addCitizen(citi);
			delete citi;
		}

	}
	//close file
	cn.close();
}
//destructor
City::~City()
{
	//save file 
	fstream save(cityName, ios::out);
	//copy citizens into saved file
	Citizen* citizen;
	for (int i = 0; i < population; i++)
	{
		getCitizenAtIndex(i);
		save << citizen;
	}

		//clear city
		save.clear();
		save.close();
}
string City::getCityName()
{
	return cityName;
}
int City::populationSize()
{
	//return the population size and increase
	return populationSize();
}
Citizen* City::getCitizenAtIndex(int index)
{
	//return citzen at i
	return citizen(i);
}
void City::addCitizen(Citizen* citizen)
{
	//return new citizen 
	return citizen(id, firstName, lastName, color);
}
Citizen* City::getCitizenWithId(int id)
{
	//return citizen id if get id matches with id
	return citizen->getId() == id;
}
vector<Citizen*> getCitizensForFavoriteColor(string color)
{

}