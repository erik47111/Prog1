/*
	g++ ch13.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o ch13 `fltk-config --ldflags --use-images`
*/

#include "Simple_window.h"
#include "Graph.h"

int main()
{

//1.feladat
Simple_window win{Point{100,100},800, 1000, "Simple_window"};
Vector_ref<Rectangle> vr;
    int meret = 100; // négyzet mérete

    for(int sor = 0; sor < 8; ++sor)
    {
        for(int oszlop = 0; oszlop < 8; ++oszlop)
        {
            vr.push_back(new Rectangle {Point{0+meret*oszlop, 0+meret*sor}, meret, meret});
            int i = vr.size()-1;
            if(i == 0) vr[i].set_fill_color(Color::red);
            if(i == 9) vr[i].set_fill_color(Color::red);
            if(i == 18) vr[i].set_fill_color(Color::red);
            if(i == 27) vr[i].set_fill_color(Color::red);
            if(i == 36) vr[i].set_fill_color(Color::red);
            if(i == 45) vr[i].set_fill_color(Color::red);
            if(i == 54) vr[i].set_fill_color(Color::red);
            if(i == 63) vr[i].set_fill_color(Color::red);

           
            win.attach(vr[i]);
        }
    }

    win.set_label("feladat: 3");
    win.wait_for_button();

    //4.feladat
    int kep_meret200 = 200;

    Image pic1(Point(600,200),"badge.jpg");
    pic1.set_mask(Point(0,200), kep_meret200, kep_meret200);
    win.attach(pic1);

    Image pic2(Point(200,600),"badge.jpg");
    pic2.set_mask(Point(0,200), kep_meret200, kep_meret200);
    win.attach(pic2);

    Image pic3(Point(400,0),"badge.jpg");
    pic3.set_mask(Point(0,200), kep_meret200, kep_meret200);
    win.attach(pic3);

    win.wait_for_button();
    



    //5.feladat
    int kep_meret100=100;
    Image pic_round(Point(0,0),"badge.jpg");
    pic_round.set_mask(Point(200,0),kep_meret100,kep_meret100);
    win.attach(pic_round);
    for (int i = 0; i < 8; ++i)
    {
    	for (int j = 0; j < 8; ++j)
    	{
    		win.wait_for_button();
    		if (j < 7) pic_round.move(100,0);
    		else pic_round.move(-700,100);
    	}
    }
    //---------------------5---------------------
    

}