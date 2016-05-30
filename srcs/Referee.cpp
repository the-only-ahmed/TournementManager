#include "Referee.hpp"

int			Referee::_count = 0;

Referee::Referee() : APerson("", "", "", 0) {}

Referee&	Referee::operator=(const Referee& src) {
	setName(src.getName());
	setPreName(src.getPreName());
	setNationality(src.getNat());
	setAge(src.getAge());

	this->myClas = src.getClass();
	this->myPost = src.getPost();
	this->id = src.getId();
	return *this;
}

Referee::Referee(Referee const& src) : APerson(src.getName(), src.getPreName(),
		src.getNat(), src.getAge()) {
	this->myClas = src.getClass();
	this->myPost = src.getPost();
	this->id = src.getId();
}

Referee::Referee(std::string name, std::string pName, std::string nat, int age,
				RefClas clas, RefPost post) : APerson(name, pName, nat, age)
{
    this->myClas = clas;
    this->myPost = post;
		setId(Referee::_count++);
}

RefClas Referee::getClass() const { return this->myClas; }
RefPost Referee::getPost() const { return this->myPost; }
int     Referee::getCount() { return Referee::_count; }

void    Referee::setId(int n) { this->id = n; }
void    Referee::setCount(int n) { Referee::_count = n; }
