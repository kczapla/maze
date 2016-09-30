enum field_type {PLAYER, DOOR, WALL, PATH, BORDER, START, EXIT};
enum field_state {OPEN, CLOSE};
enum directions {East, South, North, West};

typedef struct coordinates
{
  int x;
  int y;
} point;

typedef struct fields
{
  // Postion
  point position;
  // Orientation (East, West ...)
  int directon;

  // What is the type of field
  int type;
  // By what symbol field will be represented on the map
  char* sym;
  // Action that player can perform on the fie
  //
  // Determines whereas player can go thorugh this field or not
  int state;
} field;

// New point
point point_new(int x, int y);

// Field constructors
field* field_door(point p);
field* field_exit(point p);
field* field_start(point p);
field* field_path(point p);
field* field_player(point p);
field* field_wall(point p);

// Destructors
void field_del(field* f);

// Player control functions

// Player actions
field* open_door(field* f);

// Map - functions responsible for parsing the map from file and drawing it
void draw_map(field **map, int x_axis, int y_axis); // Should be passed two dimensional array with fields
field** parse_file(field **map, char* path);
field* convert_char_to_field(char* c); // Converts char symbol into the field 
