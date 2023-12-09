#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using std::vector; using std::cout; using std::endl;

/**
 *  < Create a class names image has 2D vector of uint8_t
 *    you can set/get an image and copy image into another image >
 * 
 * @file image.cpp
 * @author: mustafa.syyd
*/

class image{
    
    public: 
    //constructors
    image (const vector <vector <uint8_t>> &image_vec); //parametrized constructor.
    image( const image &img); //copy constructor

    //methods
    void Set_image(const vector <vector <uint8_t>> &image_vec);
    vector <vector <uint8_t>> Get_image ();    
   
    void Print_image();
    void Copy_image(const image &img_cpy);
    void Copy_image_dyn(const image *img_cpy);

    private: //attributes
    vector <vector <uint8_t>> image_vec;
};

//definitions uint16_t 
    //constructors
image::image (const vector <vector <uint8_t>> &image_vec) : image_vec(image_vec) {} //parametrized constructor.

image::image(const image &img) : image_vec (img.image_vec) {} //copy constructor

    //methods
void image::Set_image( const vector <vector <uint8_t>> &image_vec ){
        this->image_vec = image_vec;
}

vector <vector <uint8_t>> image::Get_image (){
    return image_vec;
}

void image::Print_image()
{ //range-based loop hat nicht ausgefuert/ging nicht.
    //std::for_each ( this->image_vec.begin(), this->image_vec.end(), [](uint16_t& el){cout<< el <<endl;}); 
    for(int i=0; i<image_vec.size() ; i++)
    {
        for(int j=0; j< 3 ; j++)
        {
            cout << image_vec[i][j]<<endl;
        }
    }
}

//public function
void image::Copy_image(const image &img_cpy){
    this->image_vec = img_cpy.image_vec; 
}

void image::Copy_image_dyn(const image *img_cpy){
    this->image_vec = img_cpy->image_vec;
}


int main(){

    //test cases.
    vector <vector <uint8_t>> image_png
    {
        {12, 15, 22},
        {21, 41 , 32}
    };

    vector <vector <uint8_t>> image_jpg
    {
        {14, 32, 24},
        {11, 10 , 16}
    };

    image img_finn (image_png);     //Initializing an image (creating obj).

    img_finn.Set_image(image_jpg);   //setting the image.

    image img_jake(img_finn);  //copy constructor
    
    image img_momo(image_png);
    img_momo.Copy_image(img_finn);

    //third way of copying --img obj-- into another one
    image *img_ptr = new image(image_png);
    
    img_jake.Copy_image_dyn(img_ptr);
    
    img_finn.Print_image();

    cout<<endl;
    return 0;
}
