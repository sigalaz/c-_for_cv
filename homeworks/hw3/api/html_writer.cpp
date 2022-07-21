#include "html_writer.hpp"
#include <filesystem>
#include <iostream>
#include <sstream>

namespace html_writer {

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

bool CheckImageFormat(const std::string &img_path) {
  std::filesystem::path file_path;
  std::string filename;

  file_path = img_path;
  filename == file_path.filename();

  std::cout << file_path.filename() << std::endl;
  std::cout << file_path.extension() << std::endl;

  if (filename == ".png") {
    std::cout << "True" << std::endl;
    return true;
  } else {
    std::cout << "False" << std::endl;
    return false;
  }

  // return 0;
}

void AddImage(const std::string &img_path, float score, bool highlight) {
  std::stringstream img_name_type{img_path};

  std::string img_type;
  std::string img_name;

  img_name_type >> img_type >> img_name;

  std::cout << "    <div class = \"column\">" << std::endl;
  std::cout << "     <h2>"
            << "\"" << img_path << "\""
            << "/>" << std::endl;
}

} // namespace html_writer
