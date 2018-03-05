//
// Created by Pavel Akhtyamov on 05/03/2018.
//

#include "FerrariPrototype.h"
FerrariPrototype::FerrariPrototype(const FerrariPrototype &prototype) {
  engine_name = prototype.engine_name;
}

std::unique_ptr<Prototype> FerrariPrototype::clone() {
  return std::unique_ptr<Prototype>(new FerrariPrototype(*this));
}

FerrariPrototype::FerrariPrototype(const std::string &engine_name) {
  this->engine_name = engine_name;
}
