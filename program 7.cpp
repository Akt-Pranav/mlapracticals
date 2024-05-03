#include <iostream>
#include <string>
using namespace std;

// Base class
class Media {
protected:
    string title;
    float price;
public:
    Media(string t, float p) : title(t), price(p) {}
    virtual void display() {
        cout << "Title: " << title << ", Price: $" << price;
    }
};

// Derived class for books
class Book : public Media {
private:
    int numPages;
public:
    Book(string t, float p, int np) : Media(t, p), numPages(np) {}
    void display() override {
        Media::display();
        cout << ", Number of Pages: " << numPages << endl;
    }
};

// Derived class for video tapes
class VideoTape : public Media {
private:
    float playingTime;
public:
    VideoTape(string t, float p, float pt) : Media(t, p), playingTime(pt) {}
    void display() override {
        Media::display();
        cout << ", Playing Time: " << playingTime << " minutes" << endl;
    }
};

int main() {
    // Creating objects of different classes
    Media* media1 = new Media("Generic Media", 10.99);
    Book* book1 = new Book("The Great Gatsby", 15.99, 180);
    VideoTape* tape1 = new VideoTape("Inception", 19.99, 148.5);

    // Polymorphic behavior through pointers
    media1->display();
    cout << endl;
    book1->display();
    tape1->display();

    // Memory cleanup
    delete media1;
    delete book1;
    delete tape1;

    return 0;
}
