#include "../api/html_writer.hpp"
#include <iostream>

int main() {
  /*
  html_writer::OpenDocument();
  html_writer::AddTitle("Hello, this html file was generated from C++");
  html_writer::AddCSSStyle("style.css");
  html_writer::OpenBody();
  html_writer::OpenRow();
  html_writer::AddImage("data/000000.png", 0.05, false);

  html_writer::CloseDocument();
*/
  html_writer::CheckImageFormat("data/000000.png");

  return 0;
}