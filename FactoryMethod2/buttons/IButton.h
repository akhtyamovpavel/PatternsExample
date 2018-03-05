//
// Created by Pavel Akhtyamov on 05/03/2018.
//

#pragma once

#include <string>

class IButton {
 private:

 public:
  virtual std::string render() const = 0;
};
