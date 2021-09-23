#include <iostream>

using namespace std;


class handler {
public:

    virtual void handle(string msg) = 0;

    virtual void setHeandler(handler *h) {
        next = h;
    }

protected:
    handler *next = nullptr;
};
class pdfHandler: public handler{
public:
    void handle(string msg)override{
        cout<<"PDFhandler write to the file: "<<msg<<endl;
        if(next){
            next->handle(msg);
        }
    }

};
class txtHandler: public handler{
public:
    void handle(string msg)override{
        cout<<"TXThandler write to the file: "<<msg<<endl;
        if(next){
            next->handle(msg);
        }
    }


};
class xmlHandler: public handler{
public:
    void handle(string msg)override{
        cout<<"XMLhandler write to the file: "<<msg<<endl;
        if(next){
            next->handle(msg);
        }
    }

};
int main() {
    pdfHandler pdf;
    txtHandler txt;
    xmlHandler xml;
    txt.setHeandler(&pdf);
    pdf.setHeandler(&xml);
    txt.handle("Hello");
    return 0;
}
