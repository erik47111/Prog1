/*
    g++ -w -Wall ch14_exercises.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o ch14e `fltk-config --ldflags --use-images`
*/
// 1, 11-14 feladat


#include "Simple_window.h"
#include "Graph.h"

int main()
try{
	using namespace Graph_lib;

	Simple_window win{Point{100,100},1920, 1080, "ch14_exe"};

    //----------------------------------1----------------------------------
    Smiley happy(Point(250,150),80);// kezdo, méret
    happy.set_fill_color(Color::red); 
    happy.set_color(Color::yellow); //szem, száj, és a körvonal színe
    //happy.move(-180,50); //így kell mozgatni
    //happy.set_radius(120); //így kell változtatni a méretét
    
    happy.set_style(Line_style(Line_style::dot,5));
    win.attach(happy);
    win.wait_for_button();

    Frowny sad(Point(800,150),100);
    sad.set_fill_color(Color::yellow);
    sad.set_color(Color::red); 
    win.attach(sad);
    win.wait_for_button();


    Hat_smiley happyhat(Point(250,600),175);
    happyhat.set_fill_color(Color::yellow);
    happyhat.set_color(Color::red);
    happyhat.set_style(Line_style(Line_style::dot,5));
    win.attach(happyhat);
    win.wait_for_button();


    Hat_frowny sadhat(Point(700,600),190);
    sadhat.set_style(Line_style(Line_style::solid,5));
    sadhat.set_fill_color(Color::yellow);
    sadhat.set_color(Color::red);
    win.attach(sadhat);
    win.wait_for_button();

    //LECSATOLÁS:
    win.detach(happy);
    win.detach(sad);
    win.detach(happyhat);
    win.detach(sadhat);
    //----------------------------------1----------------------------------



	//----------------------------------11----------------------------------
	Binary_tree bt(Point(700,100),5,"");
    win.attach(bt);
    win.set_label("feladat: 11");
    win.wait_for_button();

    // ÍGY KELL MOZGATNI
    /*
    bt.move(50,50);
    bt.move(-50,-50);
    win.wait_for_button();
	*/

    win.detach(bt);
    //----------------------------------11----------------------------------



    //----------------------------------12----------------------------------
    Binary_tree_squares bts(Point(700,100),5,"");
    win.attach(bts);
    win.set_label("feladat: 12");
    win.wait_for_button();

    win.detach(bts);
    //----------------------------------12----------------------------------



    //----------------------------------13----------------------------------
    Binary_tree bt2(Point(700,100),5,"ad"); //arrow up
    win.attach(bt2);
    win.set_label("feladat: 13");
    win.wait_for_button();

    win.detach(bt2);

    Binary_tree bt3(Point(700,100),5,"au"); //arrow down
    win.attach(bt3);
    win.set_label("feladat: 13");
    win.wait_for_button();
    //----------------------------------13----------------------------------



    //----------------------------------14----------------------------------
    bt3.set_node_label("r","Root"); //az első mindegy hogy left vagy right
    bt3.set_node_label("lr","lr");
    bt3.set_node_label("lrl","lrl");
    bt3.set_node_label("lrlr","lrlr");
    bt3.set_node_label("lrlrl","lrlrl");
    bt3.set_node_label("lrlrlr","lrlrlr");
    bt3.set_node_label("lrrlr", "lrrlr");
    win.set_label("feladat: 14");
    win.wait_for_button();
    //----------------------------------14----------------------------------


}catch(exception& e){
	cerr << e.what() << endl;
	return 1;
}catch(...){
	cerr << "Gondok vannak\n";
	return 2;
}