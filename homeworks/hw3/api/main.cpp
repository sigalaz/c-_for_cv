//#include "../api/html_writer.hpp"
#include "../api/image_browser.hpp"

#include <iostream>

int main() {

  image_browser::ScoredImage img1("data/000000.png", 0.05);
  image_browser::ScoredImage img2("data/000100.png", 0.08);
  image_browser::ScoredImage img3("data/000200.png", 0.05);

  image_browser::ScoredImage img4("data/000300.png", 0.05);
  image_browser::ScoredImage img5("data/000400.png", 0.08);
  image_browser::ScoredImage img6("data/000500.png", 0.05);

  image_browser::ScoredImage img7("data/000600.png", 0.05);
  image_browser::ScoredImage img8("data/000700.png", 0.08);
  image_browser::ScoredImage img9("data/000800.png", 0.55);

  image_browser::ImageRow a = {img9, img2, img3};
  image_browser::ImageRow b = {img4, img5, img6};
  image_browser::ImageRow c = {img7, img8, img9};

  std::vector<image_browser::ImageRow> img_set = {a, b, c};

  image_browser::CreateImageBrowser("Hellos", "style.css", img_set);

  /*
  html_writer::OpenDocument();
  html_writer::AddTitle("Hello, this html file was generated from C++");
  html_writer::AddCSSStyle("style.css");

  html_writer::OpenBody();

  for (int i = 0; i < img_set.size(); ++i) {
    image_browser::AddFullRow(img_set[i], false);
  }

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

  html_writer::OpenRow();
  html_writer::AddImage("data/000000.png", 0.05, false);
  html_writer::CloseRow();

  html_writer::CloseBody();
  html_writer::CloseDocument();
*/
  return 0;
}