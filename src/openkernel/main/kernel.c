#include <driver/vga.h>

int main(){
    clearwin(COLOR_WHT, COLOR_BLK);

    struct display screen;
    screen.x = 0;
    screen.y = 0;
    screen.text = "[======== O p e n  B o o t =======]";
    screen.update();
    screen.updateText();

    return 0;
}
