CC = clang
RM = rm
SRCDIR = src
BUILDDIR = build
TARGET = bin/maze

SRCEXT = c
SOURCES = $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS = $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS = -g
LDFLAGS = -lncurses
INC = -I include

$(TARGET): $(OBJECTS)
	@echo " Linking... "
	@echo " $(CC) $(LDFLAGS) $^ -o $(TARGET)" 
	$(CC) $(LDFLAGS) $^ -o $(TARGET)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	@echo " $(CC) $(CFLAGS) $(INC) -c -o $@ $<"
	$(CC) $(CFLAGS) $(INC) -c -o $@ $<

clean:
	@echo " $(RM) -r $(BUILDDIR) $(TARGET)"
	$(RM) -r $(BUILDDIR) $(TARGET)
