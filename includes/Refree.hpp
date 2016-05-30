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
        Refree();
		    Refree(const Refree& src);
		    Refree&	operator=(const Refree& src);
        Refree(std::string name, std::string pName, std::string nat, int age,
				RefClas clas, RefPost post);

        RefClas       getClass() const;
        RefPost       getPost() const;
        static int    getCount();

        void          setId(int n);
        static void   setCount(int n);
};

#endif
