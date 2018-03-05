//
// Created by Pavel Akhtyamov on 05/03/2018.
//


#include "IButton.h"
class TextButton : public IButton {
 public:
  std::string render() const;
};

