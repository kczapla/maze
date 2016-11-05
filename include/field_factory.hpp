#ifndef __FIELD_FACTORY_H_INCLUDED__
#define __FIELD_FACTORY_H_INCLUDED__
 
#include <string>
#include <vector>
#include "field.hpp"
 
class FieldFactory {
    Field convert_symbol_to_field(std::string sym, Point crd);
    std::string convert_field_to_symbol(Field f);

    public: 
    std::vector<std::vector<Field> > convert_file_to_map(std::string path);
    void convert_map_to_file(std::vector<std::vector<Field> > map, std::string path);
}; 
 
#endif
