#ifndef EX7_32H
#define EX7_32H

#include <string>
#include <vector>

class Screen{
    friend class Window_mgr;
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
    
    pos size() const;

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    void do_display(std::ostream &os) const {os << contents;}
};

std::string::size_type Screen::size() const{
        return height*width;
    }


Screen Screen::move(pos x, pos y){
        cursor=x*width + y;
        return *this;
}

Screen Screen::set(char c){
    contents[cursor] = c;
    return *this;
}

class Window_mgr{
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);
private:
    std::vector<Screen> screens{Screen(24, 80, 'x')};
};

void Window_mgr::clear(ScreenIndex i){
    Screen &s=screens[i];
    s.contents = std::string(s.height*s.width, ' ');
}

#endif