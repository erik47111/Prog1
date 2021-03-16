/*
    g++ ch12.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o ch12 `fltk-config --ldflags --use-images`
*/

#include "Simple_window.h"
#include "Graph.h"

int main()
try {

    Point tl(150,150);
    Simple_window win(tl,600,400,"Az Én ablakom");
    win.resize(600,400);
    win.wait_for_button();

    
    Axis xt{Axis::x, Point{20,300}, 280, 5, "x tengely"};
    win.attach(xt);
    win.set_label("Canvas #2");
    win.wait_for_button();
    
    Axis yt{Axis::y, Point{20,300}, 280, 10, "y tengely"};
    yt.set_color(Color::dark_red);
    yt.label.set_color(Color::dark_red);
    win.attach(yt);
    win.set_label("Canvas #3");
    win.wait_for_button();

    Function cosinus{cos,0,100,Point{20,160},1000,30,30};
    win.attach(cosinus);
    win.set_label("Canvas #4");
    win.wait_for_button();

    cosinus.set_color(Color::cyan);
    Polygon poly;
    poly.add(Point{300,200});
    poly.add(Point{350,100});
    poly.add(Point{400,200});
    poly.add(Point{350,300});
    poly.set_color(Color::green);
    poly.set_style(Line_style::dash);
    win.attach(poly);
    win.set_label("Canvas #5");
    win.wait_for_button();


    Rectangle negyzet {Point{400,400}, 100, 50};
    win.attach(negyzet);
    win.set_label("Canvas #6");
    win.wait_for_button();


    Closed_polyline poly_rect;
    poly_rect.add(Point{100,50});
    poly_rect.add(Point{200,50});
    poly_rect.add(Point{200,100});
    poly_rect.add(Point{100,100});
    win.attach(poly_rect);
    poly_rect.add(Point{50,100});

    win.wait_for_button();

    negyzet.set_fill_color(Color::green);
    poly.set_style(Line_style(Line_style::dot,15));
    poly_rect.set_style(Line_style(Line_style::dash,5));
    poly_rect.set_fill_color(Color::dark_red);
    win.set_label("Canvas #7");
    win.wait_for_button();


    Text szoveg {Point{200,200}, "Szeretem a tejet!"};
    win.attach(szoveg);
    win.set_label("Canvas #8");
    win.wait_for_button();


    szoveg.set_font(Font::times_bold);
    szoveg.set_font_size(60);
    win.set_label("Canvas #9");
    win.wait_for_button();


    Image kep {Point{100,50},"badge.jpg"};
    kep.set_mask(Point(800,450),450,250);
    win.attach(kep);
    win.set_label("Canvas #10");
    win.wait_for_button();

    kep.move(60,50);
    win.set_label("Canvas #11");
    win.wait_for_button();


    Circle c {Point{100,200},50};
    //Ellipse e {Point{100,200}, 75,25};
    //e.set_color(Color::dark_red);
    Mark m {Point{100,200},'x'};
    ostringstream oss;
    oss << "screen size: " << x_max() << "*" << y_max()
    << "; window size: " << win.x_max() << "*" << win.y_max();
    Text sizes {Point{100,20},oss.str()};
    kep.move(1000,1000); // kitolom a képet az ablakról ( ne zavarjon )
    win.attach(c);
    win.attach(m);
    //win.attach(e);
    win.attach(sizes);
    win.set_label("Canvas #12");
    win.wait_for_button();

}
catch(exception& e) {
    cerr << "exception: " << e.what() << endl;
    return 1;
}
catch(...) {
    cerr << "exception\n";
    return 2;
}

