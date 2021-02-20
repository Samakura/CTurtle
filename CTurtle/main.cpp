#include <iostream>



void printCanvas(char canvas[][20]){

    //This for loop is responsible for printing out each element of the canvas array
    for (int x = 0; x < 20; x++){
        for (int y = 0; y < 20; y++){
            std::cout << canvas[x][y] << ' ';
        }
        std::cout << '\n';
    }

}

int main(){
    char canvas[20][20]{};

    for (int x = 0; x < 20; x++){
        for (int y = 0; y < 20; y++){
            canvas[x][y] = '0';
        }
    }

    printCanvas(canvas);


}