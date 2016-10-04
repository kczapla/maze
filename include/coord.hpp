#ifndef __PLANE_H_INCLUDED__

#define __PLANE_H_INCLUDED__

class Coord{
    int x, y;
    public:
        Coord ();
        Coord (int, int);

        int get_x();
        int get_y();
        void set_x(int);
        void set_y(int);
};

#endif /* __PLANE_H_INCLUDED__  */
