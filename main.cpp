#include <iostream>

int main() {
    int craft [5][5][10];
    int block;
    int level;
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            std::cout << "How many blocks per point " << i << " " << j << " - ";
            std::cin >> block;
            while (block<0 || block>10){
                std::cout << "There can be from 1 to 10 blocks. Try again" << std:: endl;
                std::cout << "Нow many blocks per point " << i << " " << j;
                std::cin >> block;
            }

            for (int k=0; k<10; k++){
                if (k<block)
                    craft[i][j][k] = 1;
                else
                    craft[i][j][k] =0;
            }
        }
    }

    std::cout << "What level are we looking at? ";
    std::cin >> level;

    while (level<0 || level>10){
        std::cout << "There can be from 1 to 10 level. Try again" << std:: endl;
        std::cout << "What level are we looking at? ";
        std::cin >> level;
    }
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++) {

            std::cout << craft[i][j][level-1]<<" ";
        }
        std::cout << std::endl;

    }

    return 0;
}
