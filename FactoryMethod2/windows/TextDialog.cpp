//
// Created by Pavel Akhtyamov on 05/03/2018.
//

#include "TextDialog.h"
#include "../buttons/TextButton.h"

std::unique_ptr<IButton> TextDialog::CreateButton() const {
  std::unique_ptr<TextButton> ptr(new TextButton());
  return std::move(ptr);
}
