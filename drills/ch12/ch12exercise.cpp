/*
g++ ch12exercise.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o ch12_exercises `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"
int main()
try{
Simple_window win {Point{100,100}, 1920, 1080, "Az en ablakom"};

//1.feladat
Polygon poly1={{700,650},{700,400},{550,400},{550,650}};
poly1.set_color(Color::red);
win.attach(poly1);



Rectangle r (Point(100,100),400,400);
r.set_color(Color::blue);
win.attach(r);
win.wait_for_button();
// 2.fealdat
Rectangle dobozka(Point(100,100),100,30);
Text Szoveg(Point(110,120),"Howdy!"); 
win.attach(dobozka);
win.attach(Szoveg);
//3.feladat
	Closed_polyline b_betu;
    b_betu.add(Point(300,400));
    b_betu.add(Point(350,400));
    b_betu.add(Point(370,425));
    b_betu.add(Point(370,450));
    b_betu.add(Point(350,475));
    b_betu.add(Point(300,475));
    b_betu.add(Point(350,475));
    b_betu.add(Point(375,500));
    b_betu.add(Point(375,525));
    b_betu.add(Point(350,550));
    b_betu.add(Point(300,550));
    b_betu.set_color(Color::red);
    win.attach(b_betu);
    win.wait_for_button();



    Closed_polyline E_betu;
    E_betu.add(Point(400,400));
    E_betu.add(Point(470,400));
    E_betu.add(Point(400,400));
    E_betu.add(Point(400,475));
  	E_betu.add(Point(470,475));
  	E_betu.add(Point(400,475));
  	E_betu.add(Point(400,550));
  	E_betu.add(Point(470,550));
  	E_betu.add(Point(400,550));




    E_betu.set_color(Color::yellow);
    win.attach(E_betu);
    win.wait_for_button();
 //4.feladat
 
	Rectangle tictac1 (Point(400,400),100,100);
	tictac1.set_fill_color(Color::red);
	Rectangle tictac2 (Point(500,400),100,100);
	tictac2.set_fill_color(Color::white);
	Rectangle tictac3 (Point(600,400),100,100);
	tictac3.set_fill_color(Color::red);
	Rectangle tictac4 (Point(400,500),100,100);
	tictac4.set_fill_color(Color::white);
	Rectangle tictac5 (Point(400,600),100,100);
	tictac5.set_fill_color(Color::red);
	Rectangle tictac6 (Point(500,500),100,100);
	tictac6.set_fill_color(Color::red);
	Rectangle tictac7 (Point(500,600),100,100);
	tictac7.set_fill_color(Color::white);
	Rectangle tictac8 (Point(600,500),100,100);
	tictac8.set_fill_color(Color::white);
	Rectangle tictac9 (Point(600,600),100,100);
	tictac9.set_fill_color(Color::red);
	win.attach(tictac1);
	win.attach(tictac2);
	win.attach(tictac3);
	win.attach(tictac4);
	win.attach(tictac5);
	win.attach(tictac6);
	win.attach(tictac7);
	win.attach(tictac8);
	win.attach(tictac9);
	//5.feladat
	int xmax = (1920/4)*3;
    int ymax = (1080/3)*2;
	Rectangle alakzat5(Point(217,63),xmax,ymax);
    alakzat5.set_color(Color::red);
    win.attach(alakzat5);
    win.wait_for_button();
	//6.feladatt
	Rectangle big (Point(100,100),2000,2000);
	big.set_fill_color(Color::white);
	win.attach(big);
	win.wait_for_button();
	
	//feladat 7
	Rectangle haztest (Point(400,400),200,200);
	haztest.set_fill_color(Color::yellow);
	win.attach(haztest);
	Rectangle ajto (Point(500,530),30,70);
	ajto.set_fill_color(Color::red);
	win.attach(ajto);
	Rectangle ablak (Point(420,420),50,50);
	ablak.set_fill_color(Color::blue);
	win.attach(ablak);
	Rectangle ablak2 (Point(520,420),50,50);
	ablak2.set_fill_color(Color::blue);
	win.attach(ablak2);

	Polygon teto;
    teto.add(Point(400,400));
    teto.add(Point(500,200));
    teto.add(Point(600,400));
    teto.set_fill_color(Color::red);
    win.attach(teto);

    Rectangle kemeny(Point(550,280),20,100);
	kemeny.set_fill_color(Color::red);
	kemeny.set_color(Color::red);
	win.attach(kemeny);
	win.wait_for_button();
	//feladat 8
	Circle c1(Point(300,300),120);
    c1.set_style(Line_style(Line_style::solid,20));
    c1.set_color(Color::blue);
    win.attach(c1);

    Circle c2(Point(450,300),120);
    c2.set_style(Line_style(Line_style::solid,20));
    win.attach(c2);

    Circle c3(Point(600,300),120);
    c3.set_style(Line_style(Line_style::solid,20));
    c3.set_color(Color::red);
    win.attach(c3);

    Circle c4(Point(400,400),120);
    c4.set_style(Line_style(Line_style::solid,20));
    c4.set_color(Color::yellow);
    win.attach(c4);

    Circle c5(Point(550,400),120);
    c5.set_style(Line_style(Line_style::solid,20));
    c5.set_color(Color::green);
    win.attach(c5);
    win.set_label("ch12_ex8");
    win.wait_for_button();
	//feladat 9
	Image pic(Point(100,100),"balát.jpg");
	   
    win.attach(pic);
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
