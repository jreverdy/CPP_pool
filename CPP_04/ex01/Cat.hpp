#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal
{
private:

    Brain   *_catBrain;

public:

    Cat();
    Cat(const Cat &rhs);
    Cat &operator=(const Cat &rhs);
    ~Cat();

    Brain       & getBrain(void)const;
    void        makeSound()const;
};

#endif