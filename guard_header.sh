#!/bin/bash

postfix='.hpp'
header_name="$1"
class_name=$header_name
file_name="$header_name$postfix"


if [ -e $file_name ]
then
 echo "File already exists."
 exit
fi


if [ -n "$header_name" ]
then 
 upp_case_file_name=__$(echo $header_name | tr '[:lower:]' '[:upper:]')
 upp_case_file_name+=_H_INCLUDED__
 echo "#ifndef $upp_case_file_name" >> $file_name
 echo "#define $upp_case_file_name" >> $file_name
 echo " " >> $file_name
 echo " " >> $file_name
 echo "class $class_name{ " >> $file_name
 echo "    public: " >> $file_name
 echo "        $class_name (); " >> $file_name
 echo "}; " >> $file_name
 echo " " >> $file_name
 echo "#endif" >> $file_name
fi

exit
