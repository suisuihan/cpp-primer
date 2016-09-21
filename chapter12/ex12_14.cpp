#include <iostream>
#include <memory>
using namespace std;

struct destination{
    string ip;
    int port;
};

struct connection{
    string ip;
    int port;
};

connection connect(destination *dst){
    connection conn{dst->ip, dst->port};
    return conn;
}

void disconnect(connection conn){
    cout << "disconnet to " << conn.ip << ":" << conn.port << endl;
}

void end_connection(connection *c){
    disconnect(*c);
}

void f(destination &d){
    connection c = connect(&d);
    shared_ptr<connection> p(&c, end_connection);
}

int main(){
    destination d{"127.0.0.1", 22};
    f(d);
}






















