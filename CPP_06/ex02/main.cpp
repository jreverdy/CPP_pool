#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base *generate(void)
{
    srand(time(0));
    int test = rand()%3 + 1;

    std::cout << std::endl;
    std::cout << "######### Generation of a random base #########" << std::endl;
    std::cout << std::endl;
    switch (test)
    {
        case 1:
            std::cout << "rand chose to create A" << std::endl;
            return (new(A));

        case 2:
            std::cout << "rand chose to create B" << std::endl;
            return (new(B));

        case 3:
            std::cout << "rand chose to create C" << std::endl;
            return (new(C));
    }
    return (NULL);
}

void    identify(Base *p)
{
    std::cout << std::endl;
    std::cout << "######### Inditify base with pointer #########" << std::endl;
    std::cout << std::endl;

    A *ptr_a = dynamic_cast<A*>(p);
    B *ptr_b = dynamic_cast<B*>(p);
    C *ptr_c = dynamic_cast<C*>(p);

    if (ptr_a)
        std::cout << "p identify as A" << std::endl;
    else if (ptr_b)
        std::cout << "p identify as B" << std::endl;
    else if (ptr_c)
        std::cout << "p identify as C" << std::endl;
    else
        std::cout << "type not found" << std::endl;
}

void    identify(Base &p)
{
    std::cout << std::endl;
    std::cout << "######### Inditify base with ref #########" << std::endl;
    std::cout << std::endl;

    try
    {
        A &ref_A = dynamic_cast<A&>(p);
        (void)ref_A;
        std::cout << "p identify as A" << std::endl;
    }
    catch(std::exception &e)
    {}
    try
    {
        B &ref_B = dynamic_cast<B&>(p);
        (void)ref_B;
        std::cout << "p identify as B" << std::endl;
    }
    catch(std::exception &e)
    {}
    try
    {
        C &ref_C = dynamic_cast<C&>(p);
        (void)ref_C;
        std::cout << "p identify as C" << std::endl;
    }
    catch(std::exception &e)
    {}
}

int main(void)
{
    Base	*base = generate();

    identify(base);
    identify(*base);

    delete (base);
    return (0);
}