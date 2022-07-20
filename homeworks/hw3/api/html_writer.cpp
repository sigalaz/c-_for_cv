#include "html_writer.hpp"
#include <fstream>
#include <iostream>

namespace html_writer {

static std::ofstream html_file;

void OpenDocument() {
  std::cout << "<!DOCTYPE html>" << std::endl;
  std::cout << "<html>" << std::endl;
} // namespace html_writer::OpenDocument()

void CloseDocument() { std::cout << "</html>" << std::endl; }

void AddCSSStyle(const std::string &stylesheet) {
  std::cout << " <head>" << std::endl;
  std::cout << "  <link> rel= \"text/css\" href=\"" << stylesheet << "\" "
            << std::endl;
  std::cout << " <head>" << std::endl;
}

void AddTitle(const std::string &title) {
  std::cout << " <title>" << title << "/title" << std::endl;
}

void OpenBody() { std::cout << "<body>" << std::endl; }

void CloseBody() { std::cout << "</body>" << std::endl; }

void OpenRow() { std::cout << "<div class=\" row \">" << std::endl; }

void CloseRow() { std::cout << "</div>" << std::endl; }

void AddImage(const std::string &img_path, float score) {
  std::cout << "    <div class = \"column\">" << std::endl;
  std::cout << "     <h2>"
            << "\"" << img_path << "\""
            << "/>" << std::endl;
}

} // namespace html_writer
