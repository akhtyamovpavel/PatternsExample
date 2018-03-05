//
// Created by Pavel Akhtyamov on 05/03/2018.
//

#pragma once

#include "IButton.h"

class WebButton : public IButton {
 public:
  std::string render() const;

};
