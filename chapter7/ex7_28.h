#ifndef EX7_28H
#define EX7_28H

#include <string>

class Screen{
public:
    typedef std::string::size_type pos;
    Screen(pos x, pos y,char c): height(x), width(y), contents(x*y, c){}
    char get() const {return contents[cursor];}
    Screen move(pos x, pos y);
    Screen set(char c);
    Screen display(std::ostream &os){
        do_display(os);
        return *this;
    }
    const Screen display(std::ostream &os) const {
        do_display(os);
        return *this;
    }
    
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    void do_display(std::ostream &os) const {os << contents;}
};


Screen Screen::move(pos x, pos y){
        cursor=x*width + y;
        return *this;
}

Screen Screen::set(char c){
    contents[cursor] = c;
    return *this;
}



#endif