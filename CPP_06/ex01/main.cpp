#include "main.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return (raw);
}

Data* deserialize(uintptr_t raw)
{
    Data *ptr = reinterpret_cast<Data *>(raw);
    return (ptr);
}

int main(void)
{
    Data        data;
    void        *addr_cpy;
    uintptr_t   r_serialize;
    Data        *ptr;

    data.age = 25;
    data.height = 1.87;
    data.name = "Billy";
    addr_cpy = &data;

    std::cout << std::endl << "data address before serialization: " << &data << std::endl;
    std::cout << std::endl;
    std::cout << "######## Data values ########" << std::endl;
    std::cout << std::endl;
    std::cout << "age: " << data.age << std::endl;
    std::cout << "height: " << data.height << std::endl;
    std::cout << "name: " << data.name << std::endl;

    std::cout << std::endl << "######## Reinterpret cast tests ########" << std::endl;
    std::cout << std::endl;
    r_serialize = serialize(&data);
    std::cout << "After serialized: " <<  r_serialize << std::endl;
    ptr = deserialize(r_serialize);
    std::cout << "After deserialized: " << ptr << std::endl;
    std::cout << std::endl;

    std::cout << std::endl << "######## Reinterpret cast results ########" << std::endl;
    std::cout << std::endl;
    std::cout << "Unchanged data address: " << addr_cpy << std::endl;
    std::cout << "Serialized and deserialized data adress: " <<ptr << std::endl;
    std::cout << "age: " << ptr->age << std::endl;
    std::cout << "height: " << ptr->height << std::endl;
    std::cout << "name: " << ptr->name << std::endl;
}