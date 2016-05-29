#include "Refree.hpp"

Refree&	Refree::operator=(const Refree& src) {
	setName(src.getName());
	setPreName(src.getPreName());
	setNationality(src.getNat());
	setAge(src.getAge());

	this->myClas = src.getClass();
	this->myPost = src.getPost();
	return *this;
}

Refree::Refree(Refree const& src) : APerson(src.getName(), src.getPreName(),
		src.getNat(), src.getAge()) {
	this->myClas = src.getClass();
	this->myPost = src.getPost();
}

Refree::Refree(std::string name, std::string pName, std::string nat, int age,
				RefClas clas, RefPost post) : APerson(name, pName, nat, age)
{
    this->myClas = clas;
    this->myPost = post;
}

RefClas Refree::getClass() const { return this->myClas; }
RefPost Refree::getPost() const { return this->myPost; }
