#include <iostream>
#include <vector>
#include "windows/TextDialog.h"
#include "windows/WebDialog.h"

int main() {
  TextDialog text_dialog;
  WebDialog web_dialog;

  text_dialog.RenderWindow();
  web_dialog.RenderWindow();

//  std::vector<std::unique_ptr<Dialog>> dialogs;
//  dialogs[0] = std::move(std::un){
//      std::move(new TextDialog),
//      std::move(new WebDialog)
//  };
//
//  for (auto dialog: dialogs) {
//    dialog->RenderWindow();
//  }
  return 0;
}