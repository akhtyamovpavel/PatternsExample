//
// Created by Pavel Akhtyamov on 05/03/2018.
//

#include <iostream>
#include "Dialog.h"


void Dialog::RenderWindow() {
  std::unique_ptr<IButton> button = CreateButton();
  std::cout << button->render() << std::endl;
}
