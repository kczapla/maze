#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include "../include/field_factory.hpp"
#include "../include/path.hpp"
#include "../include/wall.hpp"


Field FieldFactory::convert_symbol_to_field(std::string sym, Point crd) {
    Field f; 
    if (sym == "F") {
        f = Field(crd, sym);
    }
    else if (sym == "W") {
        f = Field(crd, sym);
    }
    else if (sym == " ") {
        f = Field(crd, sym);
    }
    return f;
}


std::string FieldFactory::convert_field_to_symbol(Field f) {
    std::string sym = f.get_symbol();
    return sym;
}


std::vector<std::vector<Field> > 
FieldFactory::convert_file_to_map(std::string path) {
    std::ifstream file (path);
    std::string line;
    std::vector<std::vector<Field> > map;
    if (file.is_open()) {
        int row_cnt = 0;   // Count the number of lines
        while (std::getline(file, line)) {
            std::vector<Field> row;
            int col_cnt = 0;  // Column counter
            for (auto c: line) {
                std::string tmpc(1, c); 
                Point p {row_cnt, col_cnt};
                Field tmp = this->convert_symbol_to_field(tmpc, p);
                row.push_back(tmp);
            }
            map.push_back(row);
        }
    }
    else {
        std::cout << "Can not open the file" << std::endl;
    }
    return map;
}


void
FieldFactory::convert_map_to_file(std::vector<std::vector<Field> > map, 
                                  std::string path) {
    std::ofstream file;
    file.open(path);
    for (auto row: map) {
        for (auto c: row) {
            file << c.get_symbol();
        }
    }
    file.close();
}
