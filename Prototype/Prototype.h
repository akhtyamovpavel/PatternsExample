//
// Created by Pavel Akhtyamov on 05/03/2018.
//

#pragma once

#include <memory>
class Prototype {
  virtual std::unique_ptr<Prototype> clone() = 0;

  virtual ~Prototype() = default;
};
