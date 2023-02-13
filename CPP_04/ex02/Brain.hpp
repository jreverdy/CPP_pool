#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:

    std::string _ideas[100];

public:

    Brain();
    Brain(const Brain &rhs);
    Brain &operator=(const Brain &rhs);
    ~Brain();

    void        setIdea(std::string idea, int nb);
    std::string getIdea(size_t nb);
};

#endif