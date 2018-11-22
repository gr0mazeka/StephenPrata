//  --------------------- S.Prata C++ Primer Plus 6th ed. ----------------------
//  ------------------------ Programming Exercises 7.3 -------------------------

#include <iostream>
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void show_box(const box t);
void volume_box(box * t);
int main()
{
    box cube = {"Cube", 5, 4, 10, 0};
    volume_box(&cube);
    show_box(cube);
    return 0;
}
void show_box(const box t)
{
    std::cout << "Maker: " << t.maker << "\nHeight: " << t.height
              << "\nWidth: " << t.width << "\nLength: " << t.length
              << "\nVolume: " << t.volume << std::endl;
}
void volume_box(box * t)
{
    t->volume = t->height * t->width * t->length;
}
