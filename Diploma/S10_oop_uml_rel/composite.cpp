/**
 * super class:Graphics :sub classes Line , Rectangle , Text and Picture 
 * where Picture is the Compisite contains a vector of Graphics pointers.
 * All children override draw, Picture overrides draw() and add() methods.
 
 * @file: compoiste.cpp
 * @author: mustafa.syyd
    
*/

#include <iostream>
#include <algorithm>
#include <vector>


class Graphics
{
    public:
    virtual void draw() const =0; //pure virtual Fn, // [virtual void draw() const {}] but not neccessary for children to implement inside
    virtual void info() const =0; 
    virtual void add(Graphics* g) {}
    virtual void remove(Graphics* g) {}
    virtual void remove_LIFO() {}
    virtual void GetChild(int n) {}
    virtual ~Graphics(){};

};

class Line :public Graphics
{
    public:
    Line(double len=0) : length(len) {}
    
    void info() const{
        std::cout<< "Line ";
    }
    
    void draw() const override{
        std::cout<< this->length<< " m\n";
    } 

    private:
    double length;
};

class Rectangle :public Graphics
{
    public:
    Rectangle(double len=0, double width=0) : length(len) , width(width) {}
    
    void info() const  {
        std::cout<< "Rectangle ";
    }
    void draw() const{
        std::cout<< this->length<<" x "<< this->width << " cmxcm\n";
    }

    private:
    double length;
    double width;
};

class Circle :public Graphics
{
    public:
    Circle(double dia=0) : diameter(dia) {}

    void info() const {
        std::cout<< "Circle ";
    }

    void draw() const override{
        std::cout<< this->diameter <<" m\n";
    }


    private:
    double diameter;
};

class Text :public Graphics
{
    public:
    Text(std::string txt_str = " ") : text_string(txt_str) {}

    void info() const  {
        std::cout<< "Text ";
    }

    void draw() const override{
        std::cout<< this->text_string <<"\n";
    }

    private:
    std::string text_string;
};

class Picture final :public Graphics  //final keyword is written only for practicing purpose
{
    public:
    Picture(){
        std::cout<< "A picture is created!\n  ----------------" <<std::endl;
    }

    void info() const {
        std::cout<< "Picture";
    }

    
    void draw() const{
        for (auto& grafik_el : grafik_list){
            grafik_el->info();
            grafik_el->draw();
        }
    }

    void add(Graphics* g){
        grafik_list.push_back(g);

    }    

    void remove_LIFO(){
        //g=nullptr;
        grafik_list.pop_back();

    }

    /*
    void remove(Graphics* g){
        std::cout<< "\n\n";
        delete g;
    }*/
    
    private:
    std::vector <Graphics*> grafik_list;
};

int main(){

    Line ln(40);
    Rectangle rec(31.2, 43);
    Circle crcl(15);
    Text txt("mustafa.syyd");
    

    Picture p;
    p.add(&ln);
    p.add(&rec);
    p.add(&txt);
    p.add(&crcl);

    p.draw();

    //p.remove(&rec);
   // p.remove_LIFO();
  //  std::cout<<"-----------------------------\n";
//    p.draw();

    //p.remove(&txt);
    //std::cout<<"-----------------------------\n";
    //p.draw();
    
    return 0;

}