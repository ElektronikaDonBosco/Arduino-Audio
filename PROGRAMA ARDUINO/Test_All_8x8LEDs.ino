#include "LedControl.h"
int j;

LedControl lc = LedControl(12, 11, 10, 4);
//where 12=data, 11=clock, 10=cs and 1=number of 8x8 Matrices.

void setup() {
//initialice the 4 LED matrices:
lc.shutdown(0, false);  // turns on display
lc.setIntensity(0, 8); // 15 = brightest
lc.clearDisplay(0);

lc.shutdown(1, false);  // turns on display
lc.setIntensity(1, 8); // 15 = brightest
lc.clearDisplay(1);

lc.shutdown(2, false);  // turns on display
lc.setIntensity(2, 8); // 15 = brightest
lc.clearDisplay(2);

lc.shutdown(3, false);  // turns on display
lc.setIntensity(3, 8); // 15 = brightest
lc.clearDisplay(3);
}

void loop() {
        // This will show a moving column just to test the devices
        for(j = 0; j < 8; j++)
        {
            lc.setColumn(0, j, 0xFF); //LED matrix 1 set colum to all ON (FF)
            lc.setColumn(1, j, 0xFF); //LED matrix 2 set colum to all ON (FF)
            lc.setColumn(2, j, 0xFF); //LED matrix 3 set colum to all ON (FF)
            lc.setColumn(3, j, 0xFF); //LED matrix 4 set colum to all ON (FF)
            delay(100);
            lc.setColumn(0, j, 0); //LED matrix 1 turn OFF column
            lc.setColumn(1, j, 0); //LED matrix 2 turn OFF column
            lc.setColumn(2, j, 0); //LED matrix 3 turn OFF column
            lc.setColumn(3, j, 0); //LED matrix 4 turn OFF column         
        }
}
