//
// Created by Pavel Akhtyamov on 05/03/2018.
//

#include "WebDialog.h"
#include "../buttons/WebButton.h"

std::unique_ptr<IButton> WebDialog::CreateButton() const {
  std::unique_ptr<WebButton> ptr(new WebButton());
  return std::move(ptr);
}
