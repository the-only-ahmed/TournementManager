#ifndef REFREE_HPP
#define REFREE_HPP

#include "APerson.hpp"
#include "foot_enum.hpp"

class Refree : public APerson
{
    private:
        RefClas myClas;
        RefPost myPost;

    public:
	Refree&	operator=(Refree const& src);
        Refree(std::string name, std::string pName, std::string nat, int age,
				RefClas clas, RefPost post);
        RefClas getClass() const;
        RefPost getPost() const;
};

#endif
