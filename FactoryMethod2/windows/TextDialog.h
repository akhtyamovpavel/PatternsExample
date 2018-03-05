//
// Created by Pavel Akhtyamov on 05/03/2018.
//

#pragma once

#include <memory>
#include "Dialog.h"

class TextDialog : public Dialog {
 public:
  std::unique_ptr<IButton> CreateButton() const override;
};
