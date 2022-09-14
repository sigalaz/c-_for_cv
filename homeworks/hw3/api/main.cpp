#include "../api/html_writer.hpp"
#include "../api/image_browser.hpp"

#include <iostream>

int main() {

  image_browser::ScoredImage img1("data/000000.png", 0.05);
  image_browser::ScoredImage img2("data/000100.png", 0.08);
  image_browser::ScoredImage img3("data/000000.png", 0.05);

  image_browser::ImageRow a = {img1, img2, img3};
  image_browser::ImageRow b = {img2, img2, img2};

  std::vector<image_browser::ImageRow> img_set = {a, b};

  // image_browser::CreateImageBrowser("Hellos", "style.css", img_set);

  html_writer::OpenDocument();
  html_writer::AddTitle("Hello, this html file was generated from C++");
  html_writer::AddCSSStyle("style.css");
  html_writer::OpenBody();

  html_writer::OpenRow();
  for (int i = 0; i < 3; ++i) {
    html_writer::AddImage(std::get<0>(a[i]), std::get<1>(a[i]), false);
  }
  html_writer::CloseRow();

  html_writer::OpenRow();
  for (int i = 0; i < 3; ++i) {
    html_writer::AddImage(std::get<0>(a[i]), std::get<1>(a[i]), false);
  }
  html_writer::CloseRow();
  /*
      html_writer::OpenRow();
      html_writer::AddImage("data/000000.png", 0.05, false);
      html_writer::CloseRow();
  */
  html_writer::CloseBody();
  html_writer::CloseDocument();

  return 0;
}