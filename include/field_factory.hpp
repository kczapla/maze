#ifndef __FIELD_FACTORY.HPP_H_INCLUDED__
#define __FIELD_FACTORY.HPP_H_INCLUDED__
 
#include <string>
#include "field"
 
class FieldFactory {
    std::string path; 

    Field convert_symbol_to_field(std::string sym);
    std::string convert_field_to_symbol(Field f);
    public: 
        FieldFactory(std::string path); 
}; 
 
#endif
