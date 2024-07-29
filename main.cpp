// learning how ppm files work and how i can write to them using c++ :)
//  -ethannself
#include <cmath>
#include <fstream>
#include <iostream>

struct RGB {
  int r, g, b;
};

int main() {
  const int width = 800;
  const int height = 600;

  std::ofstream ofs("red.ppm", std::ios::out | std::ios::binary);
  ofs << "P3\n" << width << " " << height << "\n255\n";

  for (int y = 0; y < height; ++y) {
    for (int x = 0; x < width; ++x) {
      RGB color = {255, 0, 0};
      ofs << color.r << " " << color.g << " " << color.b << " ";
    }
    ofs << "\n";
  }

  ofs.close();
  std::cout << "Red PPM file created!" << std::endl;
  return 0;
}
