#include "Simple_window.h"
#include "Graph.h"
double one(double x) {return 1; }
double slope(double x) {return x/2; }
double square(double x) {return x*x; }
double sloping_cos(double x) {return cos(x) + slope(x); }
//g++ dh15.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o ch15 `fltk-config --ldflags --use-images` 
//-------------------------------------------------------------------------------------------------------------------------------------------
int main()
try{
int xmax = 600;
int ymax = 600;

Point tl(600,50);
Simple_window win{tl,xmax,ymax, "Function graphs"};

//-----------------------------------------------------------------------------------------------------------------------------------------

	int x_orig = xmax/2;
    int y_orig = ymax/2;

    
    int n_points = 400;

	Point origo {x_orig, y_orig};

	int xlength = xmax - 200;
	int ylength = ymax - 200;

	int xscale = 20;
	int yscale = 20;



	Axis x {Axis::x, Point{100, y_orig}, xlength, xlength/xscale, "1 ==20 pix"};
	Axis y {Axis::y, Point{x_orig, 500}, ylength, ylength/yscale, "1==20 pix"};
	win.attach(x);
	win.attach(y);

	x.set_color(Color::red);
	y.set_color(Color::red);

	win.wait_for_button();
//-----------------------------------------------------------------------------------------------------------------------------------------
	int r_min = -10;
	int r_max = 11;
	int points = 400;

	Function elso(one, r_min, r_max, origo, points, xscale, yscale);
	win.attach(elso);
	win.wait_for_button();

	Function ferde(slope, r_min, r_max, origo, points, xscale, yscale);
	win.attach(ferde);
	win.wait_for_button();

	Text text(Point{170,350},"x/2");
	win.attach(text);
	win.wait_for_button();

	Function negyzet(square, r_min, r_max, origo, points, xscale, yscale);
	win.attach(negyzet);
	win.wait_for_button();
	
	Function cos1(cos, r_min, r_max, origo, points, xscale, yscale);
	cos1.set_color(Color::blue);
	win.attach(cos1);
	win.wait_for_button();
	
	Function cosslop(sloping_cos, r_min, r_max, origo, points, xscale, yscale);
	win.attach(cosslop);
	win.wait_for_button();















































}catch(exception& e){
	cerr << e.what() << endl;
	return 1;
}catch(...){ 
	cerr << "Van valami baj" << endl;
	return 2;
}