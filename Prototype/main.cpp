#include <iostream>
#include "PirelliFerrari.h"
int main() {
  PirelliFerrari machine("Pirelli", "Ferrari");

  std::cout << machine.GetEngineName() << " " << machine.GetShassiName() << std::endl;

  std::unique_ptr<Prototype> out(std::move(machine.clone()));

  PirelliFerrari* out2 = dynamic_cast<PirelliFerrari*>(out.get());
  std::cout << out2->GetEngineName() << " ";
  std::cout << out2->GetShassiName() << std::endl;
  return 0;
}