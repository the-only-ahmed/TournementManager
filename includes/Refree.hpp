#ifndef REFREE_HPP
#define REFREE_HPP

#include "APerson.hpp"
#include "foot_enum.hpp"

class Refree : public APerson
{
    private:
        RefClas     myClas;
        RefPost     myPost;
        static int  _count;

    public:
		Refree(const Refree& src);
		Refree&	operator=(const Refree& src);
        Refree(std::string name, std::string pName, std::string nat, int age,
				RefClas clas, RefPost post);
        RefClas getClass() const;
        RefPost getPost() const;
        void    setId();
        void    setCount(int n);
};

#endif
