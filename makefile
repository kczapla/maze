CC=clang++
RM= rm
SRCDIR = src
BUILDDIR = build
TARGET=bin/maze

SRCEXT = cpp
SOURCES = $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS = $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS = -g 
INC = -I inlucde

# all: 
# 	@echo " $(OBJECTS)"
# 	@echo " $(CC) $^ -o $(TARGET)"

$(TARGET): $(OBJECTS)
	@echo " Linking... "
	@echo " $(CC) $^ -o $(TARGET)" 
	$(CC) $^ -o $(TARGET)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	@echo " $(CC) $(CFLAGS) $(INC) -c -o $@ $<"
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<

clean:
	@echo " $(RM) -r $(BUILDDIR) $(TARGET)"
	$(RM) -r $(BUILDDIR) $(TARGET)
# maze: $(obj)
#	$(CC) -o maze $(obj)
# all: maze
# 
# prompt: field.o plain.o main.o
# 	$(CC) main.o field.o plain.o -o maze
# 
# main.o: main.cpp
# 	$(CC) $(CFLAGS) main.cpp 
#  
# field.o: field.hpp field.cpp
# 	$(CC) $(CFLAGS) field.hpp field.cpp
# 
# plain.o: plain.hpp plain.cpp
# 	$(CC) $(CFLAGS) plain.hpp plain.cpp
# 
# clean:
#	rm *o *gch prompt
