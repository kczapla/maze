#ifndef __POINT_H_INCLUDED__
#define __POINT_H_INCLUDED__

class Point{
    int x, y;
    public:
        Point ();
        Point (int a, int b) : x{a}, y{b} {}

        int get_x();
        int get_y();
        void set_x(int);
        void set_y(int);
};

#endif /* __POINT_H_INCLUDED__  */
