#include "../api/html_writer.hpp"
#include <iostream>
int main() {
  html_writer::OpenDocument();
  html_writer::AddTitle("Prueba de libreria html");
  html_writer::AddCSSStyle("style.css");
  html_writer::OpenBody();
  html_writer::OpenRow();

  html_writer::CloseDocument();

  return 0;
}