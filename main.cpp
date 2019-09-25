#include "TXLib.h"

void drawHouse()
{
    txSetColor(TX_RED, 3);
    txSetFillColor(TX_WHITE);
    txRectangle(100 , 100, 400 , 300);
    txSetFillColor(TX_BLUE);
    txRectangle(150 , 150, 250 , 200);
    txSetFillColor(TX_RED);
    txRectangle(300 , 150, 350 , 300);
    txLine     (100 , 100, 250 ,  50);
    txLine     (250 ,  50, 400 , 100);
    txFloodFill(250 ,  80);
}


void drawHouse2()
{
    txSetColor(TX_RED, 3);
    txSetFillColor(TX_WHITE);
    txRectangle(400, 100, 700, 300);
    txSetFillColor(TX_BLUE);
    txRectangle(450, 150, 550, 200);
    txSetFillColor(TX_RED);
    txRectangle(600, 150, 650, 300);
    txLine     (400, 100, 550,  50);
    txLine     (550,  50, 700, 100);
    txFloodFill(550,  80);
}

int main()
{
    txCreateWindow(800, 600);

    drawHouse();
    drawHouse2();

    return 0;
}
