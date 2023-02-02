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
  std::cout << "<head>" << std::endl;
  std::cout << "  <link rel=\"Stylesheet\" type=\"text/css\" href=\""
            << stylesheet << "\" /> " << std::endl;
  std::cout << "</head>" << std::endl;
}

void AddTitle(const std::string &title) {
  std::cout << "<title>" << title << "</title>" << std::endl;
}

void OpenBody() { std::cout << "<body>" << std::endl; }

void CloseBody() { std::cout << "</body>" << std::endl; }

void OpenRow() { std::cout << "  <div class=\"row\">" << std::endl; }

void CloseRow() { std::cout << "  </div>" << std::endl; }

void CheckImageFormat(const std::string &img_path) {
  std::filesystem::path file_path;
  std::string filename;
  std::string file_extension;

  file_path = img_path;
  filename = file_path.filename();
  file_extension = file_path.extension();

  std::string png_extension = ".png";
  std::string jpg_extension = ".jpg";
  std::string test = ".png";

  if (file_extension.compare(png_extension) != 0 &&
      file_extension.compare(jpg_extension) != 0) {
    // std::cout << "True, the extension file is: " << file_extension <<
    // std::endl;
    std::cerr << "Error, the file  " << file_path << " is neither jpg or png"
              << std::endl;
    std::exit(EXIT_FAILURE);
  }
}

void AddImage(const std::string &img_path, float score, bool highlight) {
  std::filesystem::path file_path;
  file_path = img_path;

  std::string filename = file_path.filename();

  CheckImageFormat(img_path);

  if (highlight) {
    std::cout << "    <div class=\"column\" style= \"border : 5px solid "
                 "green;> \""
              << std::endl;
  } else {
    std::cout << "    <div class=\"column\">" << std::endl;
  }
  std::cout << "      <h2>" << filename << "</h2>" << std::endl;
  std::cout << "      <img src=" << file_path << "/>" << std::endl;

  std::cout << "      <p>score = " << score << "</p>" << std::endl;

  std::cout << "    </div>" << std::endl;
}

} // namespace html_writer
