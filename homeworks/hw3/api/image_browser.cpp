#include "image_browser.hpp"
#include "html_writer.hpp"
#include <iostream>
namespace image_browser {

void AddFullRow(const ImageRow &row, bool first_row) {
  html_writer::OpenRow();
  for (int i = 0; i < 3; ++i) {
    if (i == 0 && first_row) {
      html_writer::AddImage(std::get<0>(row[i]), std::get<1>(row[i]), true);
    } else {
      html_writer::AddImage(std::get<0>(row[i]), std::get<1>(row[i]));
    }
  }
  html_writer::CloseRow();
}

void CreateImageBrowser(const std::string &title, const std::string &stylesheet,
                        const std::vector<ImageRow> &rows) {
  html_writer::OpenDocument();
  html_writer::AddTitle(title);
  html_writer::AddCSSStyle(stylesheet);
  html_writer::OpenBody();
  int number_of_elements = rows.size();

  /*
  for (int i = 0; i < number_of_elements; ++i) {
    AddFullRow(rows[i]);
  }
*/
  html_writer::CloseBody();
  html_writer::CloseDocument();
}

} // namespace image_browser
