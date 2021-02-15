#include <iostream>

constexpr int width = 20;
constexpr int height = 20;

void printCanvas(int width, int height){
    for (int x = 0; x < width; x++) {
        std::cout << '\n';
        for (int y = 0; y < height; y++)
            std::cout << "0 ";
    }
}


int main() {

   printCanvas(width, height);

}

