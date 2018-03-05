//
// Created by Pavel Akhtyamov on 05/03/2018.
//

#pragma once

#include "Dialog.h"
class WebDialog : public Dialog {
 public:
  std::unique_ptr<IButton> CreateButton() const override;
};

