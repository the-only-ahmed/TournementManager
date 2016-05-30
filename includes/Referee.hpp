#ifndef Referee_HPP
#define Referee_HPP

#include "APerson.hpp"
#include "foot_enum.hpp"

class Referee : public APerson
{
    private:
        RefClas     myClas;
        RefPost     myPost;
        static int  _count;

    public:
        Referee();
		    Referee(const Referee& src);
		    Referee&	operator=(const Referee& src);
        Referee(std::string name, std::string pName, std::string nat, int age,
				RefClas clas, RefPost post);

        RefClas       getClass() const;
        RefPost       getPost() const;
        static int    getCount();

        void          setId(int n);
        static void   setCount(int n);
};

#endif
