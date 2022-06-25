#include<iostream>
using namespace std;

class Chap{
    private:
    int page;

    public:
    Chap(int);
    int getPages()const;
};

class Book{
   
   public:
    Chap c1,c2,c3,c4;

   Book( int page1,int page2,int page3, int page4):c1(page1),c2(page2),c3(page3),c4(page4){}
    int getTotalPages()const;
    void print()const;
};
    
    int main(){   

         Book b1(100,100,200,200);
         b1.print();

        system("pause");
        return 0;
    }


    Chap::Chap(int p){
        page=p;
    }

    int Chap::getPages()const{
        return page;
    }


    int Book::getTotalPages()const{
    return c1.getPages()+c2.getPages()+c3.getPages()+c4.getPages();
}

void Book::print()const{
   cout<<"Total pages are : "<<getTotalPages()<<endl;
}
