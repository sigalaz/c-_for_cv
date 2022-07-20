#include "../api/html_writer.hpp"
#include <iostream>

int main() {
  html_writer::OpenDocument();
  html_writer::AddTitle("Hello, this html file was generated from C++");
  html_writer::AddCSSStyle("style.css");
  html_writer::OpenBody();

  html_writer::CloseDocument();

  return 0;
}