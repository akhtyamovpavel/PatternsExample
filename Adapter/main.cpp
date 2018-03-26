#include <iostream>
#include "TextStorage.h"
#include "JsonStorage.h"
#include "TextJsonAdapter.h"

int main() {
  TextStorage interface;

  interface.Read("../input.txt");
  interface.Write("../output.txt");

  JsonStorage storage;
  storage.Read("../input.json");
  storage.WriteJson("../output.json");

  TextJsonAdapter adapter;
  adapter.Read("../input.txt");
  adapter.Write("../output_text.json");
  return 0;
}