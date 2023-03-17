#include <iostream>
//setting integer meanings and calculating time between integers
void age(int pd, int pm, int py,int bd, int bm, int by) {
    int d, m, y;
    int md[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    y = py - by;
    if (pm < bm) {
        y--;
        m = 12 - (bm - pm);
    }
    else {
        m = pm - bm;
    }
    if (pd < bd) {
        m--;
        d = md[pm - 1] - (bd - pd);
    }
    else {
        d = pd - bd;
    }
    std::cout << "Driver age is: \n";
    std::cout << y << " years " << m << " months " << d << " days. ";
}
//chatgpt ai repeat program function
void repeatProgram() {
    char repeat;
    do {
//cinput and coutput from user and program
        int pd, pm, py, bd, bm, by;
        char slash;
        std::cout << "Enter the present date in the format mm/dd/yyyy: ";
        std::cin >> pm >> slash >> pd >> slash >> py;
        std::cout << "Enter the birth date in the format mm/dd/yyyy: ";
        std::cin >> bm >> slash >> bd >> slash >> by;
        age(pd, pm, py, bd, bm, by);
        std::cout << "\nDo you want to repeat the program? (y/n): ";
        std::cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');
}

int main() {
    repeatProgram();
    return 0;
}