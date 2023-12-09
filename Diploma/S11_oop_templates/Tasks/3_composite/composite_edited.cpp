#include <iostream>
#include <vector>

using namespace std;

class PageObject
{
    public:
        virtual void addItem(PageObject po) {}
        virtual void removeItem() {}
        virtual void deleteItem(PageObject po) {}
};


class Page : public PageObject
{
    public:
        virtual void addItem(PageObject po)
        {
            cout << "Item added into the page" <<endl;
        }

        virtual void removeItem() 
        {
            cout << "Item Removed from page" <<endl;
        }

        virtual void deleteItem(PageObject po)
        {
            cout << "Item Deleted from Page" <<endl;
        }
};

//combining inheritance and composition
class Copy : public PageObject
{   
    private:
        vector<PageObject> copyPages;
    
    public:
        virtual void AddElement(PageObject po)
        {
            copyPages.push_back(po);
        }

        void addItem(PageObject a) 
        {
         cout << "Item added to the copy" << endl;
         }
        
        virtual void removeItem() 
        {
            cout << "Item Removed from the copy" <<endl;
        }

        virtual void deleteItem(PageObject po)
        {
            cout << "Item deleted from the copy";
        }
        
};


int main() {
   Page p1;
   Page p2;

   Copy myCopy;

   myCopy.AddElement(p1);
   myCopy.AddElement(p2);

   myCopy.addItem(p1);

   p1.addItem(p2);
   
   myCopy.removeItem();
   p2.removeItem();
   
}