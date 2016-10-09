#ifndef EX12_19_H
#define EX12_19_H

#include <vector>
#include <string>
#include <iostream>
#include <memory>

using namespace std;
class StrBlobPtr;
class StrBlob{
public:
    friend class StrBlobPtr;
    StrBlobPtr begin();
    StrBlobPtr end();
    // StrBlobPtr begin(){
    //     return StrBlobPtr(*this);
    // }
    // StrBlobPtr end(){
    //     auto ret = StrBlobPtr(*this, data->size());
    //     return ret;
    // }

    typedef vector<string>::size_type size_type;
    StrBlob();
    StrBlob(initializer_list<string> il);

    StrBlob(StrBlob &sb):data(make_shared<vector<string>>(*sb.data)){};
    StrBlob& operator=(StrBlob &sb);

    size_type size() const {return data->size();}
    bool empty() const {return data->empty();}
    void push_back(const string &t){data->push_back(t);}
    void push_back(const string &t) const {data->push_back(t);}
    void pop_back();
    string& front();
    string& back();
    const string& front() const;
    const string& back() const;



private:
    shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg) const;
};


StrBlob::StrBlob(): data(make_shared<vector<string>>()){ }

StrBlob::StrBlob(initializer_list<string> il): data(make_shared<vector<string>>(il)){}

StrBlob& StrBlob::operator=(StrBlob &sb){
    data = make_shared<vector<string>>(*sb.data);
    return *this;
}

void StrBlob::check(size_type i, const string &msg) const{
    if(i >= data->size())
        throw out_of_range(msg);
}

void StrBlob::pop_back(){
    check(0, "pop_back on empty StrBlob");
    data->pop_back();
}

string& StrBlob::front(){
    check(0, "front on empty StrBlob");
    return data->front();
}

string& StrBlob::back(){
    check(0, "back on empty StrBlob");
    return data->back();
}


const string& StrBlob::front() const{
    check(0, "front on empty StrBlob");
    return data->front();
}

const string& StrBlob::back() const{
    check(0, "back on empty StrBlob");
    return data->back();
}

class StrBlobPtr {
public:
    StrBlobPtr():curr(0) { }
    StrBlobPtr(StrBlob &a, size_t sz = 0):wptr(a.data), curr(sz) { }
    bool operator!=(const StrBlobPtr& p) { return p.curr != curr; }
    string& deref() const {
        auto p = check(curr, "dereference past end");
        return (*p)[curr];
    }
    StrBlobPtr& incr() {
        check(curr, "increment past end of StrBlobPtr");
        ++curr;
        return *this;
    }

private:
    std::shared_ptr<vector<string>> check(size_t i, const string &msg) const {
        auto ret = wptr.lock();
        if (!ret) throw std::runtime_error("unbound StrBlobPtr");
        if (i >= ret->size()) throw std::out_of_range(msg);
        return ret;
    }
    std::weak_ptr<vector<string>> wptr;
    size_t curr;
};


StrBlobPtr StrBlob::begin(){
    return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end(){
    auto ret = StrBlobPtr(*this, data->size());
    return ret;
}


#endif