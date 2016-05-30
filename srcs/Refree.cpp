#include "Refree.hpp"

int			Refree::_count = 0;

Refree::Refree() : APerson("", "", "", 0) {}

Refree&	Refree::operator=(const Refree& src) {
	setName(src.getName());
	setPreName(src.getPreName());
	setNationality(src.getNat());
	setAge(src.getAge());

	this->myClas = src.getClass();
	this->myPost = src.getPost();
	this->id = src.getId();
	return *this;
}

Refree::Refree(Refree const& src) : APerson(src.getName(), src.getPreName(),
		src.getNat(), src.getAge()) {
	this->myClas = src.getClass();
	this->myPost = src.getPost();
	this->id = src.getId();
}

Refree::Refree(std::string name, std::string pName, std::string nat, int age,
				RefClas clas, RefPost post) : APerson(name, pName, nat, age)
{
    this->myClas = clas;
    this->myPost = post;
		setId(Refree::_count++);
}

RefClas Refree::getClass() const { return this->myClas; }
RefPost Refree::getPost() const { return this->myPost; }
void    Refree::setId(int n) { this->id = n; }
void    Refree::setCount(int n) { Refree::_count = n; }
