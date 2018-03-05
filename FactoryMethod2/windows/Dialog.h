//
// Created by Pavel Akhtyamov on 05/03/2018.
//

#pragma once

#include <memory>
#include "../buttons/IButton.h"
class Dialog {
 public:
  void RenderWindow();
  virtual std::unique_ptr<IButton> CreateButton() const = 0;
};

