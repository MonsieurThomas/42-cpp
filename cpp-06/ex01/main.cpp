#include <iostream>
#include <cstdint>

struct Data
{
  int x;
  float f;
  double y;
};

uintptr_t serialize(Data* ptr) {
  return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
  return reinterpret_cast<Data*>(raw);
}

int main()
{
  Data d;
  d.x = 42;
  d.f = 40.02f;
  d.y = 3.14;

  uintptr_t raw = serialize(&d);
  Data* ptr = deserialize(raw);

    std::cout << std::endl;

    std::cout << "Voici d.x: " << d.x << std::endl;
    std::cout << "Voici d.f: " << d.f << std::endl;
    std::cout << "Voici d.y: " << d.y << std::endl;

    std::cout << "Voici d.x adresse: " << &d.x << std::endl;
    std::cout << "Voici d.x adresse: " << &d.f << std::endl;
    std::cout << "Voici d.y adresse: " << &d.y << std::endl;

    std::cout << std::endl;

    std::cout << "Voici ptr->x: " << ptr->x << std::endl;
    std::cout << "Voici ptr->f: " << ptr->f << std::endl;
    std::cout << "Voici ptr->y: " << ptr->y << std::endl;

    std::cout << "Voici ptr->x adresse: " << &ptr->x << std::endl;
    std::cout << "Voici ptr->x adresse: " << &ptr->f << std::endl;
    std::cout << "Voici ptr->y adresse: " << &ptr->y << std::endl;

}