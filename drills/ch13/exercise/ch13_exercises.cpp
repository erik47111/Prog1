/*
    g++ -w -Wall ch13_exercises.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o ch13_exercises `fltk-config --ldflags --use-images`
*/

#include "Simple_window.h"
#include "Graph.h"

int main()
try{
	using namespace Graph_lib;

	Simple_window win{Point{100,100},1920, 1080, "ch13_exe"};
	//----------------------------------1----------------------------------
	Graph_lib::Arc arc(Point{100,100},100, 50, 0, 100); //kezdo,hossz,mag
	arc.set_angle1(0);
	arc.set_angle2(180);
	arc.set_angles(0,90);//mettől meddig rajzolja ki
	win.attach(arc);
    win.set_label("feladat: 1");
    win.wait_for_button();
	//----------------------------------1----------------------------------



	//----------------------------------2----------------------------------
	Box box(Point{150,300},100, 100, 35);// kezdo,szel, mag, görb
	box.set_fill_color(Color::red);
	win.attach(box);
    win.set_label("feladat: 2");
    win.wait_for_button();
    //----------------------------------2----------------------------------



	//----------------------------------3----------------------------------
	Arrow arrow(Point{50,50}, Point{200,200});// nyil kezdett pont,nyil vege
	win.attach(arrow);
    win.set_label("feladat: 3");
    win.wait_for_button();
	//----------------------------------3----------------------------------



	//----------------------------------6----------------------------------
	//------------------ B O X ------------------
	Box box1(Point{200,200}, 120, 50,20);
	win.attach(box1);
	box1.set_fill_color(Color::green);

	Box box2(Point{400,200}, 120, 50, 20);
	win.attach(box2);
	box2.set_fill_color(Color::green);

	Box box3(Point{300,400}, 120, 50, 20);
	win.attach(box3);
	box3.set_fill_color(Color::red);

	//----------------- T E X T -----------------

	Text text1 {Point{230,230}, "honnan1"};
	text1.set_font_size(15);
	win.attach(text1);

	Text text2 {Point{440,230}, "honnan2"};
	text2.set_font_size(15);
	win.attach(text2);

	Text text3 {Point{340,420}, "hova"};
	text3.set_font_size(15);
	win.attach(text3);

	//---------------- A R R O W ----------------

	Arrow arrow1(Point{250,250},Point{360,400});
	win.attach(arrow1);

	Arrow arrow2(Point{450,250},Point{360,400});
	win.attach(arrow2);

    win.set_label("feladat: 6");
    win.wait_for_button();
    //----------------------------------6----------------------------------



    //----------------------------------7----------------------------------
    Vector_ref<Rectangle> vr;
    int meret = 100; // négyzet mérete

    for(int sor = 0; sor < 4; ++sor)
    {
        for(int oszlop = 0; oszlop < 4; ++oszlop)
        {
            vr.push_back(new Rectangle {Point{400+meret*oszlop, 600+meret*sor}, meret, meret});
            int i = vr.size()-1;
            if(i == 0) vr[i].set_fill_color(Color::white);
            if(i == 1) vr[i].set_fill_color(Color::white);
            if(i == 2) vr[i].set_fill_color(Color::white);
            if(i == 3) vr[i].set_fill_color(Color::white);
            if(i == 4) vr[i].set_fill_color(Color::dark_yellow);
            if(i == 5) vr[i].set_fill_color(Color::dark_red);
            if(i == 6) vr[i].set_fill_color(Color::dark_magenta);
            if(i == 7) vr[i].set_fill_color(Color::dark_blue);
            if(i == 8) vr[i].set_fill_color(Color::dark_cyan);
            if(i == 9) vr[i].set_fill_color(Color::dark_green);
            if(i == 10) vr[i].set_fill_color(Color::yellow);
            if(i == 11) vr[i].set_fill_color(Color::red);
            if(i == 12) vr[i].set_fill_color(Color::magenta);
            if(i == 13) vr[i].set_fill_color(Color::blue);
            if(i == 14) vr[i].set_fill_color(Color::cyan);
            if(i == 15) vr[i].set_fill_color(Color::green);
            
            


           

            

            win.attach(vr[i]);
        }
    }

    win.set_label("feladat: 7");
    win.wait_for_button();
    //----------------------------------7----------------------------------
 
}catch(exception& e){
	cerr << e.what() << endl;
	return 1;
}catch(...){
	cerr << "We have eine probléma\n";
	return 2;
}